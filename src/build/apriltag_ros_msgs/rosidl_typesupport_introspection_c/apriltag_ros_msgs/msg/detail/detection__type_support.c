// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from apriltag_ros_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "apriltag_ros_msgs/msg/detail/detection__rosidl_typesupport_introspection_c.h"
#include "apriltag_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "apriltag_ros_msgs/msg/detail/detection__functions.h"
#include "apriltag_ros_msgs/msg/detail/detection__struct.h"


// Include directives for member types
// Member `family`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  apriltag_ros_msgs__msg__Detection__init(message_memory);
}

void apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function(void * message_memory)
{
  apriltag_ros_msgs__msg__Detection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[3] = {
  {
    "family",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros_msgs__msg__Detection, family),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros_msgs__msg__Detection, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros_msgs__msg__Detection, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members = {
  "apriltag_ros_msgs__msg",  // message namespace
  "Detection",  // message name
  3,  // number of fields
  sizeof(apriltag_ros_msgs__msg__Detection),
  apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array,  // message members
  apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_init_function,  // function to initialize message memory (memory has to be allocated)
  apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle = {
  0,
  &apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_apriltag_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, apriltag_ros_msgs, msg, Detection)() {
  apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier) {
    apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &apriltag_ros_msgs__msg__Detection__rosidl_typesupport_introspection_c__Detection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
