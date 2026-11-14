// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from warehouse_interfaces:msg/DeliveryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_interfaces/msg/delivery_status.hpp"


#ifndef WAREHOUSE_INTERFACES__MSG__DETAIL__DELIVERY_STATUS__STRUCT_HPP_
#define WAREHOUSE_INTERFACES__MSG__DETAIL__DELIVERY_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__warehouse_interfaces__msg__DeliveryStatus __attribute__((deprecated))
#else
# define DEPRECATED__warehouse_interfaces__msg__DeliveryStatus __declspec(deprecated)
#endif

namespace warehouse_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DeliveryStatus_
{
  using Type = DeliveryStatus_<ContainerAllocator>;

  explicit DeliveryStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->package_count = 0;
      this->battery = 0.0f;
      this->state = 0;
    }
  }

  explicit DeliveryStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : robot_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->package_count = 0;
      this->battery = 0.0f;
      this->state = 0;
    }
  }

  // field types and members
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _package_count_type =
    uint8_t;
  _package_count_type package_count;
  using _battery_type =
    float;
  _battery_type battery;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__package_count(
    const uint8_t & _arg)
  {
    this->package_count = _arg;
    return *this;
  }
  Type & set__battery(
    const float & _arg)
  {
    this->battery = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_IDLE =
    0u;
  static constexpr uint8_t STATE_MOVING =
    1u;
  static constexpr uint8_t STATE_DELIVERING =
    2u;

  // pointer types
  using RawPtr =
    warehouse_interfaces::msg::DeliveryStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const warehouse_interfaces::msg::DeliveryStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<warehouse_interfaces::msg::DeliveryStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<warehouse_interfaces::msg::DeliveryStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      warehouse_interfaces::msg::DeliveryStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<warehouse_interfaces::msg::DeliveryStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      warehouse_interfaces::msg::DeliveryStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<warehouse_interfaces::msg::DeliveryStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<warehouse_interfaces::msg::DeliveryStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<warehouse_interfaces::msg::DeliveryStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__warehouse_interfaces__msg__DeliveryStatus
    std::shared_ptr<warehouse_interfaces::msg::DeliveryStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__warehouse_interfaces__msg__DeliveryStatus
    std::shared_ptr<warehouse_interfaces::msg::DeliveryStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DeliveryStatus_ & other) const
  {
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->package_count != other.package_count) {
      return false;
    }
    if (this->battery != other.battery) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const DeliveryStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DeliveryStatus_

// alias to use template instance with default allocator
using DeliveryStatus =
  warehouse_interfaces::msg::DeliveryStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeliveryStatus_<ContainerAllocator>::STATE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeliveryStatus_<ContainerAllocator>::STATE_MOVING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DeliveryStatus_<ContainerAllocator>::STATE_DELIVERING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace warehouse_interfaces

#endif  // WAREHOUSE_INTERFACES__MSG__DETAIL__DELIVERY_STATUS__STRUCT_HPP_
