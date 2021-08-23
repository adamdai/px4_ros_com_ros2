// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/DebugValue.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DEBUG_VALUE__STRUCT_HPP_
#define PX4_MSGS__MSG__DEBUG_VALUE__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__DebugValue __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__DebugValue __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugValue_
{
  using Type = DebugValue_<ContainerAllocator>;

  explicit DebugValue_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->ind = 0;
      this->value = 0.0f;
    }
  }

  explicit DebugValue_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->ind = 0;
      this->value = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _ind_type =
    int8_t;
  _ind_type ind;
  using _value_type =
    float;
  _value_type value;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__ind(
    const int8_t & _arg)
  {
    this->ind = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::DebugValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::DebugValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::DebugValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::DebugValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DebugValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DebugValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DebugValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DebugValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::DebugValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::DebugValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__DebugValue
    std::shared_ptr<px4_msgs::msg::DebugValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__DebugValue
    std::shared_ptr<px4_msgs::msg::DebugValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugValue_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->ind != other.ind) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugValue_

// alias to use template instance with default allocator
using DebugValue =
  px4_msgs::msg::DebugValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DEBUG_VALUE__STRUCT_HPP_