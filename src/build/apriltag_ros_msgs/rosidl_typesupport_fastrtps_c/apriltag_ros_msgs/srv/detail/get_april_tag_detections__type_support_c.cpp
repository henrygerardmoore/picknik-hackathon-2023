// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from apriltag_ros_msgs:srv/GetAprilTagDetections.idl
// generated code does not contain a copyright notice
#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "apriltag_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.h"
#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "sensor_msgs/msg/detail/camera_info__functions.h"  // camera_info
#include "sensor_msgs/msg/detail/image__functions.h"  // image

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_apriltag_ros_msgs
size_t get_serialized_size_sensor_msgs__msg__CameraInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_apriltag_ros_msgs
size_t max_serialized_size_sensor_msgs__msg__CameraInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_apriltag_ros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CameraInfo)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_apriltag_ros_msgs
size_t get_serialized_size_sensor_msgs__msg__Image(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_apriltag_ros_msgs
size_t max_serialized_size_sensor_msgs__msg__Image(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_apriltag_ros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image)();


using _GetAprilTagDetections_Request__ros_msg_type = apriltag_ros_msgs__srv__GetAprilTagDetections_Request;

static bool _GetAprilTagDetections_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetAprilTagDetections_Request__ros_msg_type * ros_message = static_cast<const _GetAprilTagDetections_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: camera_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CameraInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->camera_info, cdr))
    {
      return false;
    }
  }

  // Field name: image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->image, cdr))
    {
      return false;
    }
  }

  // Field name: apriltag_size
  {
    cdr << ros_message->apriltag_size;
  }

  return true;
}

static bool _GetAprilTagDetections_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetAprilTagDetections_Request__ros_msg_type * ros_message = static_cast<_GetAprilTagDetections_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: camera_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, CameraInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->camera_info))
    {
      return false;
    }
  }

  // Field name: image
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, Image
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->image))
    {
      return false;
    }
  }

  // Field name: apriltag_size
  {
    cdr >> ros_message->apriltag_size;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_apriltag_ros_msgs
size_t get_serialized_size_apriltag_ros_msgs__srv__GetAprilTagDetections_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetAprilTagDetections_Request__ros_msg_type * ros_message = static_cast<const _GetAprilTagDetections_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name camera_info

  current_alignment += get_serialized_size_sensor_msgs__msg__CameraInfo(
    &(ros_message->camera_info), current_alignment);
  // field.name image

  current_alignment += get_serialized_size_sensor_msgs__msg__Image(
    &(ros_message->image), current_alignment);
  // field.name apriltag_size
  {
    size_t item_size = sizeof(ros_message->apriltag_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetAprilTagDetections_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_apriltag_ros_msgs__srv__GetAprilTagDetections_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_apriltag_ros_msgs
size_t max_serialized_size_apriltag_ros_msgs__srv__GetAprilTagDetections_Request(
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

  // member: camera_info
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__CameraInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: image
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__Image(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: apriltag_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetAprilTagDetections_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_apriltag_ros_msgs__srv__GetAprilTagDetections_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetAprilTagDetections_Request = {
  "apriltag_ros_msgs::srv",
  "GetAprilTagDetections_Request",
  _GetAprilTagDetections_Request__cdr_serialize,
  _GetAprilTagDetections_Request__cdr_deserialize,
  _GetAprilTagDetections_Request__get_serialized_size,
  _GetAprilTagDetections_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetAprilTagDetections_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetAprilTagDetections_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, apriltag_ros_msgs, srv, GetAprilTagDetections_Request)() {
  return &_GetAprilTagDetections_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "apriltag_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.h"
// already included above
// #include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "apriltag_ros_msgs/msg/detail/detection__functions.h"  // detections

// forward declare type support functions
size_t get_serialized_size_apriltag_ros_msgs__msg__Detection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_apriltag_ros_msgs__msg__Detection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, apriltag_ros_msgs, msg, Detection)();


using _GetAprilTagDetections_Response__ros_msg_type = apriltag_ros_msgs__srv__GetAprilTagDetections_Response;

static bool _GetAprilTagDetections_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetAprilTagDetections_Response__ros_msg_type * ros_message = static_cast<const _GetAprilTagDetections_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: detections
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, apriltag_ros_msgs, msg, Detection
      )()->data);
    size_t size = ros_message->detections.size;
    auto array_ptr = ros_message->detections.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _GetAprilTagDetections_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetAprilTagDetections_Response__ros_msg_type * ros_message = static_cast<_GetAprilTagDetections_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: detections
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, apriltag_ros_msgs, msg, Detection
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->detections.data) {
      apriltag_ros_msgs__msg__Detection__Sequence__fini(&ros_message->detections);
    }
    if (!apriltag_ros_msgs__msg__Detection__Sequence__init(&ros_message->detections, size)) {
      fprintf(stderr, "failed to create array for field 'detections'");
      return false;
    }
    auto array_ptr = ros_message->detections.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_apriltag_ros_msgs
size_t get_serialized_size_apriltag_ros_msgs__srv__GetAprilTagDetections_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetAprilTagDetections_Response__ros_msg_type * ros_message = static_cast<const _GetAprilTagDetections_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name detections
  {
    size_t array_size = ros_message->detections.size;
    auto array_ptr = ros_message->detections.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_apriltag_ros_msgs__msg__Detection(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetAprilTagDetections_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_apriltag_ros_msgs__srv__GetAprilTagDetections_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_apriltag_ros_msgs
size_t max_serialized_size_apriltag_ros_msgs__srv__GetAprilTagDetections_Response(
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

  // member: detections
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
        max_serialized_size_apriltag_ros_msgs__msg__Detection(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetAprilTagDetections_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_apriltag_ros_msgs__srv__GetAprilTagDetections_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GetAprilTagDetections_Response = {
  "apriltag_ros_msgs::srv",
  "GetAprilTagDetections_Response",
  _GetAprilTagDetections_Response__cdr_serialize,
  _GetAprilTagDetections_Response__cdr_deserialize,
  _GetAprilTagDetections_Response__get_serialized_size,
  _GetAprilTagDetections_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetAprilTagDetections_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetAprilTagDetections_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, apriltag_ros_msgs, srv, GetAprilTagDetections_Response)() {
  return &_GetAprilTagDetections_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "apriltag_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "apriltag_ros_msgs/srv/get_april_tag_detections.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetAprilTagDetections__callbacks = {
  "apriltag_ros_msgs::srv",
  "GetAprilTagDetections",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, apriltag_ros_msgs, srv, GetAprilTagDetections_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, apriltag_ros_msgs, srv, GetAprilTagDetections_Response)(),
};

static rosidl_service_type_support_t GetAprilTagDetections__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetAprilTagDetections__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, apriltag_ros_msgs, srv, GetAprilTagDetections)() {
  return &GetAprilTagDetections__handle;
}

#if defined(__cplusplus)
}
#endif
