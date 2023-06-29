// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from apriltag_ros_msgs:srv/GetAprilTagDetections.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__TRAITS_HPP_
#define APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__traits.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace apriltag_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAprilTagDetections_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: camera_info
  {
    out << "camera_info: ";
    to_flow_style_yaml(msg.camera_info, out);
    out << ", ";
  }

  // member: image
  {
    out << "image: ";
    to_flow_style_yaml(msg.image, out);
    out << ", ";
  }

  // member: apriltag_size
  {
    out << "apriltag_size: ";
    rosidl_generator_traits::value_to_yaml(msg.apriltag_size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAprilTagDetections_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: camera_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_info:\n";
    to_block_style_yaml(msg.camera_info, out, indentation + 2);
  }

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_block_style_yaml(msg.image, out, indentation + 2);
  }

  // member: apriltag_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apriltag_size: ";
    rosidl_generator_traits::value_to_yaml(msg.apriltag_size, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAprilTagDetections_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace apriltag_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use apriltag_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const apriltag_ros_msgs::srv::GetAprilTagDetections_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  apriltag_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use apriltag_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const apriltag_ros_msgs::srv::GetAprilTagDetections_Request & msg)
{
  return apriltag_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<apriltag_ros_msgs::srv::GetAprilTagDetections_Request>()
{
  return "apriltag_ros_msgs::srv::GetAprilTagDetections_Request";
}

template<>
inline const char * name<apriltag_ros_msgs::srv::GetAprilTagDetections_Request>()
{
  return "apriltag_ros_msgs/srv/GetAprilTagDetections_Request";
}

template<>
struct has_fixed_size<apriltag_ros_msgs::srv::GetAprilTagDetections_Request>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::CameraInfo>::value && has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<apriltag_ros_msgs::srv::GetAprilTagDetections_Request>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::CameraInfo>::value && has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<apriltag_ros_msgs::srv::GetAprilTagDetections_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'detections'
#include "apriltag_ros_msgs/msg/detail/detection__traits.hpp"

namespace apriltag_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAprilTagDetections_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: detections
  {
    if (msg.detections.size() == 0) {
      out << "detections: []";
    } else {
      out << "detections: [";
      size_t pending_items = msg.detections.size();
      for (auto item : msg.detections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAprilTagDetections_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.detections.size() == 0) {
      out << "detections: []\n";
    } else {
      out << "detections:\n";
      for (auto item : msg.detections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAprilTagDetections_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace apriltag_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use apriltag_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const apriltag_ros_msgs::srv::GetAprilTagDetections_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  apriltag_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use apriltag_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const apriltag_ros_msgs::srv::GetAprilTagDetections_Response & msg)
{
  return apriltag_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<apriltag_ros_msgs::srv::GetAprilTagDetections_Response>()
{
  return "apriltag_ros_msgs::srv::GetAprilTagDetections_Response";
}

template<>
inline const char * name<apriltag_ros_msgs::srv::GetAprilTagDetections_Response>()
{
  return "apriltag_ros_msgs/srv/GetAprilTagDetections_Response";
}

template<>
struct has_fixed_size<apriltag_ros_msgs::srv::GetAprilTagDetections_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<apriltag_ros_msgs::srv::GetAprilTagDetections_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<apriltag_ros_msgs::srv::GetAprilTagDetections_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<apriltag_ros_msgs::srv::GetAprilTagDetections>()
{
  return "apriltag_ros_msgs::srv::GetAprilTagDetections";
}

template<>
inline const char * name<apriltag_ros_msgs::srv::GetAprilTagDetections>()
{
  return "apriltag_ros_msgs/srv/GetAprilTagDetections";
}

template<>
struct has_fixed_size<apriltag_ros_msgs::srv::GetAprilTagDetections>
  : std::integral_constant<
    bool,
    has_fixed_size<apriltag_ros_msgs::srv::GetAprilTagDetections_Request>::value &&
    has_fixed_size<apriltag_ros_msgs::srv::GetAprilTagDetections_Response>::value
  >
{
};

template<>
struct has_bounded_size<apriltag_ros_msgs::srv::GetAprilTagDetections>
  : std::integral_constant<
    bool,
    has_bounded_size<apriltag_ros_msgs::srv::GetAprilTagDetections_Request>::value &&
    has_bounded_size<apriltag_ros_msgs::srv::GetAprilTagDetections_Response>::value
  >
{
};

template<>
struct is_service<apriltag_ros_msgs::srv::GetAprilTagDetections>
  : std::true_type
{
};

template<>
struct is_service_request<apriltag_ros_msgs::srv::GetAprilTagDetections_Request>
  : std::true_type
{
};

template<>
struct is_service_response<apriltag_ros_msgs::srv::GetAprilTagDetections_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__TRAITS_HPP_
