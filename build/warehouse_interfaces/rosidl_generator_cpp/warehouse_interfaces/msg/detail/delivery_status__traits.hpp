// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from warehouse_interfaces:msg/DeliveryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_interfaces/msg/delivery_status.hpp"


#ifndef WAREHOUSE_INTERFACES__MSG__DETAIL__DELIVERY_STATUS__TRAITS_HPP_
#define WAREHOUSE_INTERFACES__MSG__DETAIL__DELIVERY_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "warehouse_interfaces/msg/detail/delivery_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace warehouse_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeliveryStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: package_count
  {
    out << "package_count: ";
    rosidl_generator_traits::value_to_yaml(msg.package_count, out);
    out << ", ";
  }

  // member: battery
  {
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeliveryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: package_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "package_count: ";
    rosidl_generator_traits::value_to_yaml(msg.package_count, out);
    out << "\n";
  }

  // member: battery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery: ";
    rosidl_generator_traits::value_to_yaml(msg.battery, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeliveryStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace warehouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_interfaces::msg::DeliveryStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_interfaces::msg::DeliveryStatus & msg)
{
  return warehouse_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_interfaces::msg::DeliveryStatus>()
{
  return "warehouse_interfaces::msg::DeliveryStatus";
}

template<>
inline const char * name<warehouse_interfaces::msg::DeliveryStatus>()
{
  return "warehouse_interfaces/msg/DeliveryStatus";
}

template<>
struct has_fixed_size<warehouse_interfaces::msg::DeliveryStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<warehouse_interfaces::msg::DeliveryStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<warehouse_interfaces::msg::DeliveryStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // WAREHOUSE_INTERFACES__MSG__DETAIL__DELIVERY_STATUS__TRAITS_HPP_
