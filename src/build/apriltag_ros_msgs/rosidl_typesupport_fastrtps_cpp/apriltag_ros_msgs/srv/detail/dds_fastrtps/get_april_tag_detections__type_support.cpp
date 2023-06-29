// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from apriltag_ros_msgs:srv/GetAprilTagDetections.idl
// generated code does not contain a copyright notice
#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__rosidl_typesupport_fastrtps_cpp.hpp"
#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::CameraInfo &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::CameraInfo &);
size_t get_serialized_size(
  const sensor_msgs::msg::CameraInfo &,
  size_t current_alignment);
size_t
max_serialized_size_CameraInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::Image &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::Image &);
size_t get_serialized_size(
  const sensor_msgs::msg::Image &,
  size_t current_alignment);
size_t
max_serialized_size_Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace apriltag_ros_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros_msgs
cdr_serialize(
  const apriltag_ros_msgs::srv::GetAprilTagDetections_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: camera_info
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.camera_info,
    cdr);
  // Member: image
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.image,
    cdr);
  // Member: apriltag_size
  cdr << ros_message.apriltag_size;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  apriltag_ros_msgs::srv::GetAprilTagDetections_Request & ros_message)
{
  // Member: camera_info
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.camera_info);

  // Member: image
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.image);

  // Member: apriltag_size
  cdr >> ros_message.apriltag_size;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros_msgs
get_serialized_size(
  const apriltag_ros_msgs::srv::GetAprilTagDetections_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: camera_info

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.camera_info, current_alignment);
  // Member: image

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.image, current_alignment);
  // Member: apriltag_size
  {
    size_t item_size = sizeof(ros_message.apriltag_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros_msgs
max_serialized_size_GetAprilTagDetections_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: camera_info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CameraInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: image
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: apriltag_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _GetAprilTagDetections_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const apriltag_ros_msgs::srv::GetAprilTagDetections_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetAprilTagDetections_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<apriltag_ros_msgs::srv::GetAprilTagDetections_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetAprilTagDetections_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const apriltag_ros_msgs::srv::GetAprilTagDetections_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetAprilTagDetections_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetAprilTagDetections_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetAprilTagDetections_Request__callbacks = {
  "apriltag_ros_msgs::srv",
  "GetAprilTagDetections_Request",
  _GetAprilTagDetections_Request__cdr_serialize,
  _GetAprilTagDetections_Request__cdr_deserialize,
  _GetAprilTagDetections_Request__get_serialized_size,
  _GetAprilTagDetections_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetAprilTagDetections_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAprilTagDetections_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace apriltag_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_apriltag_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<apriltag_ros_msgs::srv::GetAprilTagDetections_Request>()
{
  return &apriltag_ros_msgs::srv::typesupport_fastrtps_cpp::_GetAprilTagDetections_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, apriltag_ros_msgs, srv, GetAprilTagDetections_Request)() {
  return &apriltag_ros_msgs::srv::typesupport_fastrtps_cpp::_GetAprilTagDetections_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace apriltag_ros_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const apriltag_ros_msgs::msg::Detection &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  apriltag_ros_msgs::msg::Detection &);
size_t get_serialized_size(
  const apriltag_ros_msgs::msg::Detection &,
  size_t current_alignment);
size_t
max_serialized_size_Detection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace apriltag_ros_msgs


namespace apriltag_ros_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros_msgs
cdr_serialize(
  const apriltag_ros_msgs::srv::GetAprilTagDetections_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: detections
  {
    size_t size = ros_message.detections.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      apriltag_ros_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.detections[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  apriltag_ros_msgs::srv::GetAprilTagDetections_Response & ros_message)
{
  // Member: detections
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.detections.resize(size);
    for (size_t i = 0; i < size; i++) {
      apriltag_ros_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.detections[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros_msgs
get_serialized_size(
  const apriltag_ros_msgs::srv::GetAprilTagDetections_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: detections
  {
    size_t array_size = ros_message.detections.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        apriltag_ros_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.detections[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_apriltag_ros_msgs
max_serialized_size_GetAprilTagDetections_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: detections
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        apriltag_ros_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Detection(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _GetAprilTagDetections_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const apriltag_ros_msgs::srv::GetAprilTagDetections_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetAprilTagDetections_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<apriltag_ros_msgs::srv::GetAprilTagDetections_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetAprilTagDetections_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const apriltag_ros_msgs::srv::GetAprilTagDetections_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetAprilTagDetections_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetAprilTagDetections_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetAprilTagDetections_Response__callbacks = {
  "apriltag_ros_msgs::srv",
  "GetAprilTagDetections_Response",
  _GetAprilTagDetections_Response__cdr_serialize,
  _GetAprilTagDetections_Response__cdr_deserialize,
  _GetAprilTagDetections_Response__get_serialized_size,
  _GetAprilTagDetections_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetAprilTagDetections_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAprilTagDetections_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace apriltag_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_apriltag_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<apriltag_ros_msgs::srv::GetAprilTagDetections_Response>()
{
  return &apriltag_ros_msgs::srv::typesupport_fastrtps_cpp::_GetAprilTagDetections_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, apriltag_ros_msgs, srv, GetAprilTagDetections_Response)() {
  return &apriltag_ros_msgs::srv::typesupport_fastrtps_cpp::_GetAprilTagDetections_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace apriltag_ros_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetAprilTagDetections__callbacks = {
  "apriltag_ros_msgs::srv",
  "GetAprilTagDetections",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, apriltag_ros_msgs, srv, GetAprilTagDetections_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, apriltag_ros_msgs, srv, GetAprilTagDetections_Response)(),
};

static rosidl_service_type_support_t _GetAprilTagDetections__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetAprilTagDetections__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace apriltag_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_apriltag_ros_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<apriltag_ros_msgs::srv::GetAprilTagDetections>()
{
  return &apriltag_ros_msgs::srv::typesupport_fastrtps_cpp::_GetAprilTagDetections__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, apriltag_ros_msgs, srv, GetAprilTagDetections)() {
  return &apriltag_ros_msgs::srv::typesupport_fastrtps_cpp::_GetAprilTagDetections__handle;
}

#ifdef __cplusplus
}
#endif
