// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from apriltag_ros_msgs:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef APRILTAG_ROS_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_
#define APRILTAG_ROS_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__apriltag_ros_msgs__msg__Detection __attribute__((deprecated))
#else
# define DEPRECATED__apriltag_ros_msgs__msg__Detection __declspec(deprecated)
#endif

namespace apriltag_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detection_
{
  using Type = Detection_<ContainerAllocator>;

  explicit Detection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->family = "";
      this->id = 0l;
    }
  }

  explicit Detection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : family(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->family = "";
      this->id = 0l;
    }
  }

  // field types and members
  using _family_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _family_type family;
  using _id_type =
    int32_t;
  _id_type id;
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__family(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->family = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    apriltag_ros_msgs::msg::Detection_<ContainerAllocator> *;
  using ConstRawPtr =
    const apriltag_ros_msgs::msg::Detection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<apriltag_ros_msgs::msg::Detection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<apriltag_ros_msgs::msg::Detection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      apriltag_ros_msgs::msg::Detection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<apriltag_ros_msgs::msg::Detection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      apriltag_ros_msgs::msg::Detection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<apriltag_ros_msgs::msg::Detection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<apriltag_ros_msgs::msg::Detection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<apriltag_ros_msgs::msg::Detection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__apriltag_ros_msgs__msg__Detection
    std::shared_ptr<apriltag_ros_msgs::msg::Detection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__apriltag_ros_msgs__msg__Detection
    std::shared_ptr<apriltag_ros_msgs::msg::Detection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detection_ & other) const
  {
    if (this->family != other.family) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detection_

// alias to use template instance with default allocator
using Detection =
  apriltag_ros_msgs::msg::Detection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace apriltag_ros_msgs

#endif  // APRILTAG_ROS_MSGS__MSG__DETAIL__DETECTION__STRUCT_HPP_
