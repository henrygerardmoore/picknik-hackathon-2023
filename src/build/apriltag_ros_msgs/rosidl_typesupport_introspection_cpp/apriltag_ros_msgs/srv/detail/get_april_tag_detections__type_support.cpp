// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from apriltag_ros_msgs:srv/GetAprilTagDetections.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace apriltag_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetAprilTagDetections_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) apriltag_ros_msgs::srv::GetAprilTagDetections_Request(_init);
}

void GetAprilTagDetections_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<apriltag_ros_msgs::srv::GetAprilTagDetections_Request *>(message_memory);
  typed_message->~GetAprilTagDetections_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetAprilTagDetections_Request_message_member_array[3] = {
  {
    "camera_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::CameraInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros_msgs::srv::GetAprilTagDetections_Request, camera_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::Image>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros_msgs::srv::GetAprilTagDetections_Request, image),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "apriltag_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros_msgs::srv::GetAprilTagDetections_Request, apriltag_size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetAprilTagDetections_Request_message_members = {
  "apriltag_ros_msgs::srv",  // message namespace
  "GetAprilTagDetections_Request",  // message name
  3,  // number of fields
  sizeof(apriltag_ros_msgs::srv::GetAprilTagDetections_Request),
  GetAprilTagDetections_Request_message_member_array,  // message members
  GetAprilTagDetections_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAprilTagDetections_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetAprilTagDetections_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetAprilTagDetections_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace apriltag_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<apriltag_ros_msgs::srv::GetAprilTagDetections_Request>()
{
  return &::apriltag_ros_msgs::srv::rosidl_typesupport_introspection_cpp::GetAprilTagDetections_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, apriltag_ros_msgs, srv, GetAprilTagDetections_Request)() {
  return &::apriltag_ros_msgs::srv::rosidl_typesupport_introspection_cpp::GetAprilTagDetections_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace apriltag_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetAprilTagDetections_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) apriltag_ros_msgs::srv::GetAprilTagDetections_Response(_init);
}

void GetAprilTagDetections_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<apriltag_ros_msgs::srv::GetAprilTagDetections_Response *>(message_memory);
  typed_message->~GetAprilTagDetections_Response();
}

size_t size_function__GetAprilTagDetections_Response__detections(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<apriltag_ros_msgs::msg::Detection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetAprilTagDetections_Response__detections(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<apriltag_ros_msgs::msg::Detection> *>(untyped_member);
  return &member[index];
}

void * get_function__GetAprilTagDetections_Response__detections(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<apriltag_ros_msgs::msg::Detection> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetAprilTagDetections_Response__detections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const apriltag_ros_msgs::msg::Detection *>(
    get_const_function__GetAprilTagDetections_Response__detections(untyped_member, index));
  auto & value = *reinterpret_cast<apriltag_ros_msgs::msg::Detection *>(untyped_value);
  value = item;
}

void assign_function__GetAprilTagDetections_Response__detections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<apriltag_ros_msgs::msg::Detection *>(
    get_function__GetAprilTagDetections_Response__detections(untyped_member, index));
  const auto & value = *reinterpret_cast<const apriltag_ros_msgs::msg::Detection *>(untyped_value);
  item = value;
}

void resize_function__GetAprilTagDetections_Response__detections(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<apriltag_ros_msgs::msg::Detection> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetAprilTagDetections_Response_message_member_array[1] = {
  {
    "detections",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<apriltag_ros_msgs::msg::Detection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(apriltag_ros_msgs::srv::GetAprilTagDetections_Response, detections),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetAprilTagDetections_Response__detections,  // size() function pointer
    get_const_function__GetAprilTagDetections_Response__detections,  // get_const(index) function pointer
    get_function__GetAprilTagDetections_Response__detections,  // get(index) function pointer
    fetch_function__GetAprilTagDetections_Response__detections,  // fetch(index, &value) function pointer
    assign_function__GetAprilTagDetections_Response__detections,  // assign(index, value) function pointer
    resize_function__GetAprilTagDetections_Response__detections  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetAprilTagDetections_Response_message_members = {
  "apriltag_ros_msgs::srv",  // message namespace
  "GetAprilTagDetections_Response",  // message name
  1,  // number of fields
  sizeof(apriltag_ros_msgs::srv::GetAprilTagDetections_Response),
  GetAprilTagDetections_Response_message_member_array,  // message members
  GetAprilTagDetections_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetAprilTagDetections_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetAprilTagDetections_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetAprilTagDetections_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace apriltag_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<apriltag_ros_msgs::srv::GetAprilTagDetections_Response>()
{
  return &::apriltag_ros_msgs::srv::rosidl_typesupport_introspection_cpp::GetAprilTagDetections_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, apriltag_ros_msgs, srv, GetAprilTagDetections_Response)() {
  return &::apriltag_ros_msgs::srv::rosidl_typesupport_introspection_cpp::GetAprilTagDetections_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "apriltag_ros_msgs/srv/detail/get_april_tag_detections__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace apriltag_ros_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetAprilTagDetections_service_members = {
  "apriltag_ros_msgs::srv",  // service namespace
  "GetAprilTagDetections",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<apriltag_ros_msgs::srv::GetAprilTagDetections>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetAprilTagDetections_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetAprilTagDetections_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace apriltag_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<apriltag_ros_msgs::srv::GetAprilTagDetections>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::apriltag_ros_msgs::srv::rosidl_typesupport_introspection_cpp::GetAprilTagDetections_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::apriltag_ros_msgs::srv::GetAprilTagDetections_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::apriltag_ros_msgs::srv::GetAprilTagDetections_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, apriltag_ros_msgs, srv, GetAprilTagDetections)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<apriltag_ros_msgs::srv::GetAprilTagDetections>();
}

#ifdef __cplusplus
}
#endif
