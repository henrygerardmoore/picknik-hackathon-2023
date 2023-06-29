// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from apriltag_ros_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS_MSGS__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define APRILTAG_ROS_MSGS__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "apriltag_ros_msgs/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace apriltag_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_Detection_pose
{
public:
  explicit Init_Detection_pose(::apriltag_ros_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  ::apriltag_ros_msgs::msg::Detection pose(::apriltag_ros_msgs::msg::Detection::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::apriltag_ros_msgs::msg::Detection msg_;
};

class Init_Detection_id
{
public:
  explicit Init_Detection_id(::apriltag_ros_msgs::msg::Detection & msg)
  : msg_(msg)
  {}
  Init_Detection_pose id(::apriltag_ros_msgs::msg::Detection::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Detection_pose(msg_);
  }

private:
  ::apriltag_ros_msgs::msg::Detection msg_;
};

class Init_Detection_family
{
public:
  Init_Detection_family()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_id family(::apriltag_ros_msgs::msg::Detection::_family_type arg)
  {
    msg_.family = std::move(arg);
    return Init_Detection_id(msg_);
  }

private:
  ::apriltag_ros_msgs::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::apriltag_ros_msgs::msg::Detection>()
{
  return apriltag_ros_msgs::msg::builder::Init_Detection_family();
}

}  // namespace apriltag_ros_msgs

#endif  // APRILTAG_ROS_MSGS__MSG__DETAIL__DETECTION__BUILDER_HPP_
