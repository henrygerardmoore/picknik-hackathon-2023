#include <get_block_sorting_plan/get_block_sorting_plan.hpp>

#include <moveit_studio_behavior_interface/check_for_error.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <sensor_msgs/msg/camera_info.hpp>
#include <sensor_msgs/msg/image.hpp>

namespace
{
  constexpr auto kPortIDBlockOrder = "block_order";
  constexpr auto kPortIDActionVector = "action_vector";

  constexpr auto kGetTaskPlan = "/plan_tasks";
}  // namespace

namespace get_block_sorting_plan
{
GetBlockSortingPlan::GetBlockSortingPlan(const std::string &name, const BT::NodeConfiguration &config,
                                                   const std::shared_ptr<moveit_studio::behaviors::BehaviorContext> &shared_resources)
    : moveit_studio::behaviors::ServiceClientBehaviorBase<GetTaskPlanService>(name, config, shared_resources)
{
}

BT::PortsList GetBlockSortingPlan::providedPorts()
{
  return {
    BT::InputPort<std::string>(kPortIDBlockOrder),
    BT::OutputPort<tamp_msgs::msg::PickPlacePlan>(kPortIDActionVector),
  };
}

fp::Result<std::string> GetBlockSortingPlan::getServiceName() {
  return kGetTaskPlan;
}

fp::Result<GetTaskPlanService::Request> GetBlockSortingPlan::createRequest()
{
  // Check that all required input data ports were set.
  const auto block_sequence = getInput<std::string>(kPortIDBlockOrder);
  if (const auto error = moveit_studio::behaviors::maybe_error(block_sequence); error)
  {
    return tl::make_unexpected(fp::Internal("Missing input port: " + error.value()));
  }

  const auto block_sequence_string = block_sequence.value();
  if (block_sequence_string.size() != 4) {
    return tl::make_unexpected(fp::Internal("Block sequence string must be of length 4."));
  }
  // Create and return the service request.
  GetTaskPlanService::Request request;
  std::vector<std::string> const seq = {block_sequence_string.substr(0,1), block_sequence_string.substr(1,1), block_sequence_string.substr(2,1), block_sequence_string.substr(3,1)};
  request.block_ids = seq;
  return request;
}

fp::Result<bool> GetBlockSortingPlan::processResponse(const GetTaskPlanService::Response &response)
{
  const auto plan = response.plan.actions;
  if (plan.size() == 0) {
    return tl::make_unexpected(fp::Internal("Plan not found"));
  }
  setOutput(kPortIDActionVector, response.plan);
  return true;
}

}  // namespace get_block_sorting_plan

template class moveit_studio::behaviors::ServiceClientBehaviorBase<get_block_sorting_plan::GetTaskPlanService>;
