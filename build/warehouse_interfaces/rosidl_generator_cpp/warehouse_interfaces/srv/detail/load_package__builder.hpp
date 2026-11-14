// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from warehouse_interfaces:srv/LoadPackage.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_interfaces/srv/load_package.hpp"


#ifndef WAREHOUSE_INTERFACES__SRV__DETAIL__LOAD_PACKAGE__BUILDER_HPP_
#define WAREHOUSE_INTERFACES__SRV__DETAIL__LOAD_PACKAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "warehouse_interfaces/srv/detail/load_package__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace warehouse_interfaces
{

namespace srv
{

namespace builder
{

class Init_LoadPackage_Request_weight
{
public:
  explicit Init_LoadPackage_Request_weight(::warehouse_interfaces::srv::LoadPackage_Request & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::srv::LoadPackage_Request weight(::warehouse_interfaces::srv::LoadPackage_Request::_weight_type arg)
  {
    msg_.weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::srv::LoadPackage_Request msg_;
};

class Init_LoadPackage_Request_package_id
{
public:
  Init_LoadPackage_Request_package_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadPackage_Request_weight package_id(::warehouse_interfaces::srv::LoadPackage_Request::_package_id_type arg)
  {
    msg_.package_id = std::move(arg);
    return Init_LoadPackage_Request_weight(msg_);
  }

private:
  ::warehouse_interfaces::srv::LoadPackage_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::srv::LoadPackage_Request>()
{
  return warehouse_interfaces::srv::builder::Init_LoadPackage_Request_package_id();
}

}  // namespace warehouse_interfaces


namespace warehouse_interfaces
{

namespace srv
{

namespace builder
{

class Init_LoadPackage_Response_total_packages
{
public:
  explicit Init_LoadPackage_Response_total_packages(::warehouse_interfaces::srv::LoadPackage_Response & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::srv::LoadPackage_Response total_packages(::warehouse_interfaces::srv::LoadPackage_Response::_total_packages_type arg)
  {
    msg_.total_packages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::srv::LoadPackage_Response msg_;
};

class Init_LoadPackage_Response_message
{
public:
  explicit Init_LoadPackage_Response_message(::warehouse_interfaces::srv::LoadPackage_Response & msg)
  : msg_(msg)
  {}
  Init_LoadPackage_Response_total_packages message(::warehouse_interfaces::srv::LoadPackage_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_LoadPackage_Response_total_packages(msg_);
  }

private:
  ::warehouse_interfaces::srv::LoadPackage_Response msg_;
};

class Init_LoadPackage_Response_accepted
{
public:
  Init_LoadPackage_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadPackage_Response_message accepted(::warehouse_interfaces::srv::LoadPackage_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LoadPackage_Response_message(msg_);
  }

private:
  ::warehouse_interfaces::srv::LoadPackage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::srv::LoadPackage_Response>()
{
  return warehouse_interfaces::srv::builder::Init_LoadPackage_Response_accepted();
}

}  // namespace warehouse_interfaces


namespace warehouse_interfaces
{

namespace srv
{

namespace builder
{

class Init_LoadPackage_Event_response
{
public:
  explicit Init_LoadPackage_Event_response(::warehouse_interfaces::srv::LoadPackage_Event & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::srv::LoadPackage_Event response(::warehouse_interfaces::srv::LoadPackage_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::srv::LoadPackage_Event msg_;
};

class Init_LoadPackage_Event_request
{
public:
  explicit Init_LoadPackage_Event_request(::warehouse_interfaces::srv::LoadPackage_Event & msg)
  : msg_(msg)
  {}
  Init_LoadPackage_Event_response request(::warehouse_interfaces::srv::LoadPackage_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LoadPackage_Event_response(msg_);
  }

private:
  ::warehouse_interfaces::srv::LoadPackage_Event msg_;
};

class Init_LoadPackage_Event_info
{
public:
  Init_LoadPackage_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadPackage_Event_request info(::warehouse_interfaces::srv::LoadPackage_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LoadPackage_Event_request(msg_);
  }

private:
  ::warehouse_interfaces::srv::LoadPackage_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::srv::LoadPackage_Event>()
{
  return warehouse_interfaces::srv::builder::Init_LoadPackage_Event_info();
}

}  // namespace warehouse_interfaces

#endif  // WAREHOUSE_INTERFACES__SRV__DETAIL__LOAD_PACKAGE__BUILDER_HPP_
