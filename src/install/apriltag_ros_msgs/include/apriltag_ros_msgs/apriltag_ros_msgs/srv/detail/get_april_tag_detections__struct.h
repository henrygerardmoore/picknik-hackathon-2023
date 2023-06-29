// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from apriltag_ros_msgs:srv/GetAprilTagDetections.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__STRUCT_H_
#define APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/GetAprilTagDetections in the package apriltag_ros_msgs.
typedef struct apriltag_ros_msgs__srv__GetAprilTagDetections_Request
{
  sensor_msgs__msg__CameraInfo camera_info;
  sensor_msgs__msg__Image image;
  double apriltag_size;
} apriltag_ros_msgs__srv__GetAprilTagDetections_Request;

// Struct for a sequence of apriltag_ros_msgs__srv__GetAprilTagDetections_Request.
typedef struct apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence
{
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} apriltag_ros_msgs__srv__GetAprilTagDetections_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'detections'
#include "apriltag_ros_msgs/msg/detail/detection__struct.h"

/// Struct defined in srv/GetAprilTagDetections in the package apriltag_ros_msgs.
typedef struct apriltag_ros_msgs__srv__GetAprilTagDetections_Response
{
  apriltag_ros_msgs__msg__Detection__Sequence detections;
} apriltag_ros_msgs__srv__GetAprilTagDetections_Response;

// Struct for a sequence of apriltag_ros_msgs__srv__GetAprilTagDetections_Response.
typedef struct apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence
{
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} apriltag_ros_msgs__srv__GetAprilTagDetections_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__STRUCT_H_
