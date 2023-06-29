// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from apriltag_ros_msgs:srv/GetAprilTagDetections.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__BUILDER_HPP_
#define APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace apriltag_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAprilTagDetections_Request_apriltag_size
{
public:
  explicit Init_GetAprilTagDetections_Request_apriltag_size(::apriltag_ros_msgs::srv::GetAprilTagDetections_Request & msg)
  : msg_(msg)
  {}
  ::apriltag_ros_msgs::srv::GetAprilTagDetections_Request apriltag_size(::apriltag_ros_msgs::srv::GetAprilTagDetections_Request::_apriltag_size_type arg)
  {
    msg_.apriltag_size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::apriltag_ros_msgs::srv::GetAprilTagDetections_Request msg_;
};

class Init_GetAprilTagDetections_Request_image
{
public:
  explicit Init_GetAprilTagDetections_Request_image(::apriltag_ros_msgs::srv::GetAprilTagDetections_Request & msg)
  : msg_(msg)
  {}
  Init_GetAprilTagDetections_Request_apriltag_size image(::apriltag_ros_msgs::srv::GetAprilTagDetections_Request::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_GetAprilTagDetections_Request_apriltag_size(msg_);
  }

private:
  ::apriltag_ros_msgs::srv::GetAprilTagDetections_Request msg_;
};

class Init_GetAprilTagDetections_Request_camera_info
{
public:
  Init_GetAprilTagDetections_Request_camera_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAprilTagDetections_Request_image camera_info(::apriltag_ros_msgs::srv::GetAprilTagDetections_Request::_camera_info_type arg)
  {
    msg_.camera_info = std::move(arg);
    return Init_GetAprilTagDetections_Request_image(msg_);
  }

private:
  ::apriltag_ros_msgs::srv::GetAprilTagDetections_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::apriltag_ros_msgs::srv::GetAprilTagDetections_Request>()
{
  return apriltag_ros_msgs::srv::builder::Init_GetAprilTagDetections_Request_camera_info();
}

}  // namespace apriltag_ros_msgs


namespace apriltag_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_GetAprilTagDetections_Response_detections
{
public:
  Init_GetAprilTagDetections_Response_detections()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::apriltag_ros_msgs::srv::GetAprilTagDetections_Response detections(::apriltag_ros_msgs::srv::GetAprilTagDetections_Response::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::apriltag_ros_msgs::srv::GetAprilTagDetections_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::apriltag_ros_msgs::srv::GetAprilTagDetections_Response>()
{
  return apriltag_ros_msgs::srv::builder::Init_GetAprilTagDetections_Response_detections();
}

}  // namespace apriltag_ros_msgs

#endif  // APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__BUILDER_HPP_
