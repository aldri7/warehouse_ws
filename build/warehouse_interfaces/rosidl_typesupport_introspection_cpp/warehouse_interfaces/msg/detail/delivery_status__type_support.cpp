// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from warehouse_interfaces:msg/DeliveryStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "warehouse_interfaces/msg/detail/delivery_status__functions.h"
#include "warehouse_interfaces/msg/detail/delivery_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace warehouse_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DeliveryStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) warehouse_interfaces::msg::DeliveryStatus(_init);
}

void DeliveryStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<warehouse_interfaces::msg::DeliveryStatus *>(message_memory);
  typed_message->~DeliveryStatus();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DeliveryStatus_message_member_array[4] = {
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(warehouse_interfaces::msg::DeliveryStatus, robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "package_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(warehouse_interfaces::msg::DeliveryStatus, package_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "battery",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(warehouse_interfaces::msg::DeliveryStatus, battery),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(warehouse_interfaces::msg::DeliveryStatus, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DeliveryStatus_message_members = {
  "warehouse_interfaces::msg",  // message namespace
  "DeliveryStatus",  // message name
  4,  // number of fields
  sizeof(warehouse_interfaces::msg::DeliveryStatus),
  false,  // has_any_key_member_
  DeliveryStatus_message_member_array,  // message members
  DeliveryStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  DeliveryStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DeliveryStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DeliveryStatus_message_members,
  get_message_typesupport_handle_function,
  &warehouse_interfaces__msg__DeliveryStatus__get_type_hash,
  &warehouse_interfaces__msg__DeliveryStatus__get_type_description,
  &warehouse_interfaces__msg__DeliveryStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace warehouse_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<warehouse_interfaces::msg::DeliveryStatus>()
{
  return &::warehouse_interfaces::msg::rosidl_typesupport_introspection_cpp::DeliveryStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, warehouse_interfaces, msg, DeliveryStatus)() {
  return &::warehouse_interfaces::msg::rosidl_typesupport_introspection_cpp::DeliveryStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
