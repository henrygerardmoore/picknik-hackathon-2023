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
GetBlocksortingPlan::GetBlocksortingPlan(const std::string &name, const BT::NodeConfiguration &config,
                                                   const std::shared_ptr<moveit_studio::behaviors::BehaviorContext> &shared_resources)
    : moveit_studio::behaviors::ServiceClientBehaviorBase<GetTaskPlanService>(name, config, shared_resources)
{
}

BT::PortsList GetBlocksortingPlan::providedPorts()
{
  return {
    BT::InputPort<std::string>(kPortIDBlockOrder),
    BT::OutputPort<tamp_msgs::msg::PickPlacePlan>(kPortIDActionVector),
  };
}

fp::Result<std::string> GetBlocksortingPlan::getServiceName() {
  return kGetTaskPlan;
}

fp::Result<GetTaskPlanService::Request> GetBlocksortingPlan::createRequest()
{
  // Check that all required input data ports were set.
  const auto block_sequence = getInput<std::string>(kPortIDBlockOrder);
  if (const auto error = moveit_studio::behaviors::maybe_error(block_sequence); error)
  {
    return tl::make_unexpected(fp::Internal("Missing input port: " + error.value()));
  }

  const auto block_sequence_string = block_sequence.value();
  if (block_sequence_string.size() != 4) {
    return tl::make_unexpected("Block sequence string must be of length 4.");
  }
  // Create and return the service request.
  GetTaskPlanService::Request request;
  request.block_ids = {block_sequence[0], block_sequence[1], block_sequence[2], block_sequence[3]};
  return request;
}

fp::Result<bool> GetBlocksortingPlan::processResponse(const GetTaskPlanService::Response &response)
{
  const auto plan = detection.plan;
  if (plan.size() == 0) {
    return tl::make_unexpected("Plan not found");
  }
  setOutput(kPortIDActionVector, detection.plan);
}

}  // namespace get_block_sorting_plan

template class moveit_studio::behaviors::ServiceClientBehaviorBase<get_block_sorting_plan::GetTaskPlanService>;
