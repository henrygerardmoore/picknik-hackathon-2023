// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from apriltag_ros_msgs:srv/GetAprilTagDetections.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__rosidl_typesupport_introspection_c.h"
#include "apriltag_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__functions.h"
#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.h"


// Include directives for member types
// Member `camera_info`
#include "sensor_msgs/msg/camera_info.h"
// Member `camera_info`
#include "sensor_msgs/msg/detail/camera_info__rosidl_typesupport_introspection_c.h"
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request__init(message_memory);
}

void apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_fini_function(void * message_memory)
{
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_message_member_array[3] = {
  {
    "camera_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros_msgs__srv__GetAprilTagDetections_Request, camera_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros_msgs__srv__GetAprilTagDetections_Request, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "apriltag_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros_msgs__srv__GetAprilTagDetections_Request, apriltag_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_message_members = {
  "apriltag_ros_msgs__srv",  // message namespace
  "GetAprilTagDetections_Request",  // message name
  3,  // number of fields
  sizeof(apriltag_ros_msgs__srv__GetAprilTagDetections_Request),
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_message_member_array,  // message members
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_message_type_support_handle = {
  0,
  &apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_apriltag_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros_msgs, srv, GetAprilTagDetections_Request)() {
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, CameraInfo)();
  apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_message_type_support_handle.typesupport_identifier) {
    apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &apriltag_ros_msgs__srv__GetAprilTagDetections_Request__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__rosidl_typesupport_introspection_c.h"
// already included above
// #include "apriltag_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__functions.h"
// already included above
// #include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.h"


// Include directives for member types
// Member `detections`
#include "apriltag_ros_msgs/msg/detection.h"
// Member `detections`
#include "apriltag_ros_msgs/msg/detail/detection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response__init(message_memory);
}

void apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_fini_function(void * message_memory)
{
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response__fini(message_memory);
}

size_t apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__size_function__GetAprilTagDetections_Response__detections(
  const void * untyped_member)
{
  const apriltag_ros_msgs__msg__Detection__Sequence * member =
    (const apriltag_ros_msgs__msg__Detection__Sequence *)(untyped_member);
  return member->size;
}

const void * apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__get_const_function__GetAprilTagDetections_Response__detections(
  const void * untyped_member, size_t index)
{
  const apriltag_ros_msgs__msg__Detection__Sequence * member =
    (const apriltag_ros_msgs__msg__Detection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__get_function__GetAprilTagDetections_Response__detections(
  void * untyped_member, size_t index)
{
  apriltag_ros_msgs__msg__Detection__Sequence * member =
    (apriltag_ros_msgs__msg__Detection__Sequence *)(untyped_member);
  return &member->data[index];
}

void apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__fetch_function__GetAprilTagDetections_Response__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const apriltag_ros_msgs__msg__Detection * item =
    ((const apriltag_ros_msgs__msg__Detection *)
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__get_const_function__GetAprilTagDetections_Response__detections(untyped_member, index));
  apriltag_ros_msgs__msg__Detection * value =
    (apriltag_ros_msgs__msg__Detection *)(untyped_value);
  *value = *item;
}

void apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__assign_function__GetAprilTagDetections_Response__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  apriltag_ros_msgs__msg__Detection * item =
    ((apriltag_ros_msgs__msg__Detection *)
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__get_function__GetAprilTagDetections_Response__detections(untyped_member, index));
  const apriltag_ros_msgs__msg__Detection * value =
    (const apriltag_ros_msgs__msg__Detection *)(untyped_value);
  *item = *value;
}

bool apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__resize_function__GetAprilTagDetections_Response__detections(
  void * untyped_member, size_t size)
{
  apriltag_ros_msgs__msg__Detection__Sequence * member =
    (apriltag_ros_msgs__msg__Detection__Sequence *)(untyped_member);
  apriltag_ros_msgs__msg__Detection__Sequence__fini(member);
  return apriltag_ros_msgs__msg__Detection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_message_member_array[1] = {
  {
    "detections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros_msgs__srv__GetAprilTagDetections_Response, detections),  // bytes offset in struct
    NULL,  // default value
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__size_function__GetAprilTagDetections_Response__detections,  // size() function pointer
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__get_const_function__GetAprilTagDetections_Response__detections,  // get_const(index) function pointer
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__get_function__GetAprilTagDetections_Response__detections,  // get(index) function pointer
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__fetch_function__GetAprilTagDetections_Response__detections,  // fetch(index, &value) function pointer
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__assign_function__GetAprilTagDetections_Response__detections,  // assign(index, value) function pointer
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__resize_function__GetAprilTagDetections_Response__detections  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_message_members = {
  "apriltag_ros_msgs__srv",  // message namespace
  "GetAprilTagDetections_Response",  // message name
  1,  // number of fields
  sizeof(apriltag_ros_msgs__srv__GetAprilTagDetections_Response),
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_message_member_array,  // message members
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_message_type_support_handle = {
  0,
  &apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_apriltag_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros_msgs, srv, GetAprilTagDetections_Response)() {
  apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros_msgs, msg, Detection)();
  if (!apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_message_type_support_handle.typesupport_identifier) {
    apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &apriltag_ros_msgs__srv__GetAprilTagDetections_Response__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "apriltag_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers apriltag_ros_msgs__srv__detail__get_april_tag_detections__rosidl_typesupport_introspection_c__GetAprilTagDetections_service_members = {
  "apriltag_ros_msgs__srv",  // service namespace
  "GetAprilTagDetections",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // apriltag_ros_msgs__srv__detail__get_april_tag_detections__rosidl_typesupport_introspection_c__GetAprilTagDetections_Request_message_type_support_handle,
  NULL  // response message
  // apriltag_ros_msgs__srv__detail__get_april_tag_detections__rosidl_typesupport_introspection_c__GetAprilTagDetections_Response_message_type_support_handle
};

static rosidl_service_type_support_t apriltag_ros_msgs__srv__detail__get_april_tag_detections__rosidl_typesupport_introspection_c__GetAprilTagDetections_service_type_support_handle = {
  0,
  &apriltag_ros_msgs__srv__detail__get_april_tag_detections__rosidl_typesupport_introspection_c__GetAprilTagDetections_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros_msgs, srv, GetAprilTagDetections_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros_msgs, srv, GetAprilTagDetections_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_apriltag_ros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros_msgs, srv, GetAprilTagDetections)() {
  if (!apriltag_ros_msgs__srv__detail__get_april_tag_detections__rosidl_typesupport_introspection_c__GetAprilTagDetections_service_type_support_handle.typesupport_identifier) {
    apriltag_ros_msgs__srv__detail__get_april_tag_detections__rosidl_typesupport_introspection_c__GetAprilTagDetections_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)apriltag_ros_msgs__srv__detail__get_april_tag_detections__rosidl_typesupport_introspection_c__GetAprilTagDetections_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros_msgs, srv, GetAprilTagDetections_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros_msgs, srv, GetAprilTagDetections_Response)()->data;
  }

  return &apriltag_ros_msgs__srv__detail__get_april_tag_detections__rosidl_typesupport_introspection_c__GetAprilTagDetections_service_type_support_handle;
}
