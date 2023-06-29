// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from apriltag_ros_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS_MSGS__MSG__DETAIL__DETECTION__STRUCT_H_
#define APRILTAG_ROS_MSGS__MSG__DETAIL__DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'family'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in msg/Detection in the package apriltag_ros_msgs.
/**
  * Definition for AprilTag Detection
 */
typedef struct apriltag_ros_msgs__msg__Detection
{
  rosidl_runtime_c__String family;
  int32_t id;
  geometry_msgs__msg__PoseStamped pose;
} apriltag_ros_msgs__msg__Detection;

// Struct for a sequence of apriltag_ros_msgs__msg__Detection.
typedef struct apriltag_ros_msgs__msg__Detection__Sequence
{
  apriltag_ros_msgs__msg__Detection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} apriltag_ros_msgs__msg__Detection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRILTAG_ROS_MSGS__MSG__DETAIL__DETECTION__STRUCT_H_
