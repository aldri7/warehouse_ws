// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from warehouse_interfaces:msg/DeliveryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_interfaces/msg/delivery_status.hpp"


#ifndef WAREHOUSE_INTERFACES__MSG__DETAIL__DELIVERY_STATUS__BUILDER_HPP_
#define WAREHOUSE_INTERFACES__MSG__DETAIL__DELIVERY_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "warehouse_interfaces/msg/detail/delivery_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace warehouse_interfaces
{

namespace msg
{

namespace builder
{

class Init_DeliveryStatus_state
{
public:
  explicit Init_DeliveryStatus_state(::warehouse_interfaces::msg::DeliveryStatus & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::msg::DeliveryStatus state(::warehouse_interfaces::msg::DeliveryStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::msg::DeliveryStatus msg_;
};

class Init_DeliveryStatus_battery
{
public:
  explicit Init_DeliveryStatus_battery(::warehouse_interfaces::msg::DeliveryStatus & msg)
  : msg_(msg)
  {}
  Init_DeliveryStatus_state battery(::warehouse_interfaces::msg::DeliveryStatus::_battery_type arg)
  {
    msg_.battery = std::move(arg);
    return Init_DeliveryStatus_state(msg_);
  }

private:
  ::warehouse_interfaces::msg::DeliveryStatus msg_;
};

class Init_DeliveryStatus_package_count
{
public:
  explicit Init_DeliveryStatus_package_count(::warehouse_interfaces::msg::DeliveryStatus & msg)
  : msg_(msg)
  {}
  Init_DeliveryStatus_battery package_count(::warehouse_interfaces::msg::DeliveryStatus::_package_count_type arg)
  {
    msg_.package_count = std::move(arg);
    return Init_DeliveryStatus_battery(msg_);
  }

private:
  ::warehouse_interfaces::msg::DeliveryStatus msg_;
};

class Init_DeliveryStatus_robot_id
{
public:
  Init_DeliveryStatus_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryStatus_package_count robot_id(::warehouse_interfaces::msg::DeliveryStatus::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_DeliveryStatus_package_count(msg_);
  }

private:
  ::warehouse_interfaces::msg::DeliveryStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::msg::DeliveryStatus>()
{
  return warehouse_interfaces::msg::builder::Init_DeliveryStatus_robot_id();
}

}  // namespace warehouse_interfaces

#endif  // WAREHOUSE_INTERFACES__MSG__DETAIL__DELIVERY_STATUS__BUILDER_HPP_
