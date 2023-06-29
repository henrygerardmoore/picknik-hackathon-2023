// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from apriltag_ros_msgs:srv/GetAprilTagDetections.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__STRUCT_HPP_
#define APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'camera_info'
#include "sensor_msgs/msg/detail/camera_info__struct.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__apriltag_ros_msgs__srv__GetAprilTagDetections_Request __attribute__((deprecated))
#else
# define DEPRECATED__apriltag_ros_msgs__srv__GetAprilTagDetections_Request __declspec(deprecated)
#endif

namespace apriltag_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAprilTagDetections_Request_
{
  using Type = GetAprilTagDetections_Request_<ContainerAllocator>;

  explicit GetAprilTagDetections_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_info(_init),
    image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->apriltag_size = 0.0;
    }
  }

  explicit GetAprilTagDetections_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : camera_info(_alloc, _init),
    image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->apriltag_size = 0.0;
    }
  }

  // field types and members
  using _camera_info_type =
    sensor_msgs::msg::CameraInfo_<ContainerAllocator>;
  _camera_info_type camera_info;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _apriltag_size_type =
    double;
  _apriltag_size_type apriltag_size;

  // setters for named parameter idiom
  Type & set__camera_info(
    const sensor_msgs::msg::CameraInfo_<ContainerAllocator> & _arg)
  {
    this->camera_info = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__apriltag_size(
    const double & _arg)
  {
    this->apriltag_size = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__apriltag_ros_msgs__srv__GetAprilTagDetections_Request
    std::shared_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__apriltag_ros_msgs__srv__GetAprilTagDetections_Request
    std::shared_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAprilTagDetections_Request_ & other) const
  {
    if (this->camera_info != other.camera_info) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->apriltag_size != other.apriltag_size) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAprilTagDetections_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAprilTagDetections_Request_

// alias to use template instance with default allocator
using GetAprilTagDetections_Request =
  apriltag_ros_msgs::srv::GetAprilTagDetections_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace apriltag_ros_msgs


// Include directives for member types
// Member 'detections'
#include "apriltag_ros_msgs/msg/detail/detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__apriltag_ros_msgs__srv__GetAprilTagDetections_Response __attribute__((deprecated))
#else
# define DEPRECATED__apriltag_ros_msgs__srv__GetAprilTagDetections_Response __declspec(deprecated)
#endif

namespace apriltag_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetAprilTagDetections_Response_
{
  using Type = GetAprilTagDetections_Response_<ContainerAllocator>;

  explicit GetAprilTagDetections_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetAprilTagDetections_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _detections_type =
    std::vector<apriltag_ros_msgs::msg::Detection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<apriltag_ros_msgs::msg::Detection_<ContainerAllocator>>>;
  _detections_type detections;

  // setters for named parameter idiom
  Type & set__detections(
    const std::vector<apriltag_ros_msgs::msg::Detection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<apriltag_ros_msgs::msg::Detection_<ContainerAllocator>>> & _arg)
  {
    this->detections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__apriltag_ros_msgs__srv__GetAprilTagDetections_Response
    std::shared_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__apriltag_ros_msgs__srv__GetAprilTagDetections_Response
    std::shared_ptr<apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetAprilTagDetections_Response_ & other) const
  {
    if (this->detections != other.detections) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetAprilTagDetections_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetAprilTagDetections_Response_

// alias to use template instance with default allocator
using GetAprilTagDetections_Response =
  apriltag_ros_msgs::srv::GetAprilTagDetections_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace apriltag_ros_msgs

namespace apriltag_ros_msgs
{

namespace srv
{

struct GetAprilTagDetections
{
  using Request = apriltag_ros_msgs::srv::GetAprilTagDetections_Request;
  using Response = apriltag_ros_msgs::srv::GetAprilTagDetections_Response;
};

}  // namespace srv

}  // namespace apriltag_ros_msgs

#endif  // APRILTAG_ROS_MSGS__SRV__DETAIL__GET_APRIL_TAG_DETECTIONS__STRUCT_HPP_
