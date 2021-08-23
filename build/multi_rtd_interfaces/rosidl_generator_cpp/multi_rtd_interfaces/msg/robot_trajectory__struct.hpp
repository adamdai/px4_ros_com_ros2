// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from multi_rtd_interfaces:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__STRUCT_HPP_
#define MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__multi_rtd_interfaces__msg__RobotTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__multi_rtd_interfaces__msg__RobotTrajectory __declspec(deprecated)
#endif

namespace multi_rtd_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotTrajectory_
{
  using Type = RobotTrajectory_<ContainerAllocator>;

  explicit RobotTrajectory_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
    }
  }

  explicit RobotTrajectory_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : robot_name(_alloc),
    trajectory(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_name = "";
    }
  }

  // field types and members
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _robot_name_type robot_name;
  using _trajectory_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _trajectory_type trajectory;

  // setters for named parameter idiom
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }
  Type & set__trajectory(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    multi_rtd_interfaces::msg::RobotTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const multi_rtd_interfaces::msg::RobotTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<multi_rtd_interfaces::msg::RobotTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<multi_rtd_interfaces::msg::RobotTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      multi_rtd_interfaces::msg::RobotTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<multi_rtd_interfaces::msg::RobotTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      multi_rtd_interfaces::msg::RobotTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<multi_rtd_interfaces::msg::RobotTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<multi_rtd_interfaces::msg::RobotTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<multi_rtd_interfaces::msg::RobotTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__multi_rtd_interfaces__msg__RobotTrajectory
    std::shared_ptr<multi_rtd_interfaces::msg::RobotTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__multi_rtd_interfaces__msg__RobotTrajectory
    std::shared_ptr<multi_rtd_interfaces::msg::RobotTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotTrajectory_ & other) const
  {
    if (this->robot_name != other.robot_name) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotTrajectory_

// alias to use template instance with default allocator
using RobotTrajectory =
  multi_rtd_interfaces::msg::RobotTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace multi_rtd_interfaces

#endif  // MULTI_RTD_INTERFACES__MSG__ROBOT_TRAJECTORY__STRUCT_HPP_
