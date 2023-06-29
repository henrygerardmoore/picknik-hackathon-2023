#pragma once

#include <moveit_studio_behavior_interface/service_client_behavior_base.hpp>
#include <moveit_studio_behavior_interface/shared_resources_node.hpp>

#include <tamp_msgs/srv/plan_block_sorting.hpp>

namespace get_block_sorting_plan
{

using GetTaskPlanService = tamp_msgs::srv::PlanBlockSorting;

/**
 * @brief Calls an external ROS 2 service that detects AprilTags and
 * returns the pose of the first detection that matches the target AprilTag ID.
 * 
 * @details
 * | Data Port Name | Port Type | Object Type                     |
 * | -------------- | --------- | --------------------------------|
 * | apriltag_id    | input     | int                             |
 * | apriltag_size  | input     | double                          |
 * | file_prefix    | input     | sensor_msgs::msg::CameraInfo    |
 * | image          | input     | sensor_msgs::msg::Image         |
 * | detection_pose | output    | geometry_msgs::msg::PoseStamped |
 */
class GetBlockSortingPlan : public moveit_studio::behaviors::ServiceClientBehaviorBase<GetTaskPlanService>
{
public:
  /** @brief Constructor for the get_apriltag_detections behavior. */
  GetBlockSortingPlan(const std::string &name, const BT::NodeConfiguration &config, const std::shared_ptr<moveit_studio::behaviors::BehaviorContext> &shared_resources);

  /** @brief Implementation of the required providedPorts() function for this Behavior. */
  static BT::PortsList providedPorts();

private:
  /** @brief Returns the AprilTag detection service name. */
  fp::Result<std::string> getServiceName() override;

  /** 
   * @brief Packages the service request.
   * @details This request takes camera info and image messages from the blackboard input ports to this Behavior.
   */
  fp::Result<GetTaskPlanService::Request> createRequest() override;

  /**
   * @brief Processes the service response.
   * @details Looks for the first detection instance that matches the specified ID, and if available sets its pose to the blackboard output port.
  */
  fp::Result<bool> processResponse(const GetTaskPlanService::Response& response) override;

  /** @brief Classes derived from AsyncBehaviorBase must implement getFuture() so that it returns a shared_future class member */
  std::shared_future<fp::Result<bool>>& getFuture() override
  {
    return response_future_;
  }

  /** @brief Holds the result of calling the service asynchronously. */
  std::shared_future<fp::Result<bool>> response_future_;

  /** @brief The target AprilTag ID to look for. */
  int target_id_;
};
}  // namespace get_block_sorting_plan
