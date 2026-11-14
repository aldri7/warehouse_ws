// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from warehouse_interfaces:action/Deliver.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_interfaces/action/deliver.hpp"


#ifndef WAREHOUSE_INTERFACES__ACTION__DETAIL__DELIVER__TRAITS_HPP_
#define WAREHOUSE_INTERFACES__ACTION__DETAIL__DELIVER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "warehouse_interfaces/action/detail/deliver__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace warehouse_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Deliver_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: destination
  {
    out << "destination: ";
    rosidl_generator_traits::value_to_yaml(msg.destination, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Deliver_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: destination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination: ";
    rosidl_generator_traits::value_to_yaml(msg.destination, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Deliver_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace warehouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_interfaces::action::Deliver_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_interfaces::action::Deliver_Goal & msg)
{
  return warehouse_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_interfaces::action::Deliver_Goal>()
{
  return "warehouse_interfaces::action::Deliver_Goal";
}

template<>
inline const char * name<warehouse_interfaces::action::Deliver_Goal>()
{
  return "warehouse_interfaces/action/Deliver_Goal";
}

template<>
struct has_fixed_size<warehouse_interfaces::action::Deliver_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<warehouse_interfaces::action::Deliver_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<warehouse_interfaces::action::Deliver_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace warehouse_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Deliver_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: time_taken
  {
    out << "time_taken: ";
    rosidl_generator_traits::value_to_yaml(msg.time_taken, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Deliver_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: time_taken
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_taken: ";
    rosidl_generator_traits::value_to_yaml(msg.time_taken, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Deliver_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace warehouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_interfaces::action::Deliver_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_interfaces::action::Deliver_Result & msg)
{
  return warehouse_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_interfaces::action::Deliver_Result>()
{
  return "warehouse_interfaces::action::Deliver_Result";
}

template<>
inline const char * name<warehouse_interfaces::action::Deliver_Result>()
{
  return "warehouse_interfaces/action/Deliver_Result";
}

template<>
struct has_fixed_size<warehouse_interfaces::action::Deliver_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<warehouse_interfaces::action::Deliver_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<warehouse_interfaces::action::Deliver_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace warehouse_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Deliver_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: remaining_distance
  {
    out << "remaining_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_distance, out);
    out << ", ";
  }

  // member: percent
  {
    out << "percent: ";
    rosidl_generator_traits::value_to_yaml(msg.percent, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Deliver_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: remaining_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_distance, out);
    out << "\n";
  }

  // member: percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percent: ";
    rosidl_generator_traits::value_to_yaml(msg.percent, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Deliver_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace warehouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_interfaces::action::Deliver_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_interfaces::action::Deliver_Feedback & msg)
{
  return warehouse_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_interfaces::action::Deliver_Feedback>()
{
  return "warehouse_interfaces::action::Deliver_Feedback";
}

template<>
inline const char * name<warehouse_interfaces::action::Deliver_Feedback>()
{
  return "warehouse_interfaces/action/Deliver_Feedback";
}

template<>
struct has_fixed_size<warehouse_interfaces::action::Deliver_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<warehouse_interfaces::action::Deliver_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<warehouse_interfaces::action::Deliver_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "warehouse_interfaces/action/detail/deliver__traits.hpp"

namespace warehouse_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Deliver_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Deliver_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Deliver_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace warehouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_interfaces::action::Deliver_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_interfaces::action::Deliver_SendGoal_Request & msg)
{
  return warehouse_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_interfaces::action::Deliver_SendGoal_Request>()
{
  return "warehouse_interfaces::action::Deliver_SendGoal_Request";
}

template<>
inline const char * name<warehouse_interfaces::action::Deliver_SendGoal_Request>()
{
  return "warehouse_interfaces/action/Deliver_SendGoal_Request";
}

template<>
struct has_fixed_size<warehouse_interfaces::action::Deliver_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<warehouse_interfaces::action::Deliver_Goal>::value> {};

template<>
struct has_bounded_size<warehouse_interfaces::action::Deliver_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<warehouse_interfaces::action::Deliver_Goal>::value> {};

template<>
struct is_message<warehouse_interfaces::action::Deliver_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace warehouse_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Deliver_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Deliver_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Deliver_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace warehouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_interfaces::action::Deliver_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_interfaces::action::Deliver_SendGoal_Response & msg)
{
  return warehouse_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_interfaces::action::Deliver_SendGoal_Response>()
{
  return "warehouse_interfaces::action::Deliver_SendGoal_Response";
}

template<>
inline const char * name<warehouse_interfaces::action::Deliver_SendGoal_Response>()
{
  return "warehouse_interfaces/action/Deliver_SendGoal_Response";
}

template<>
struct has_fixed_size<warehouse_interfaces::action::Deliver_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<warehouse_interfaces::action::Deliver_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<warehouse_interfaces::action::Deliver_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace warehouse_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Deliver_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Deliver_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Deliver_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace warehouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_interfaces::action::Deliver_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_interfaces::action::Deliver_SendGoal_Event & msg)
{
  return warehouse_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_interfaces::action::Deliver_SendGoal_Event>()
{
  return "warehouse_interfaces::action::Deliver_SendGoal_Event";
}

template<>
inline const char * name<warehouse_interfaces::action::Deliver_SendGoal_Event>()
{
  return "warehouse_interfaces/action/Deliver_SendGoal_Event";
}

template<>
struct has_fixed_size<warehouse_interfaces::action::Deliver_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<warehouse_interfaces::action::Deliver_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<warehouse_interfaces::action::Deliver_SendGoal_Request>::value && has_bounded_size<warehouse_interfaces::action::Deliver_SendGoal_Response>::value> {};

template<>
struct is_message<warehouse_interfaces::action::Deliver_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<warehouse_interfaces::action::Deliver_SendGoal>()
{
  return "warehouse_interfaces::action::Deliver_SendGoal";
}

template<>
inline const char * name<warehouse_interfaces::action::Deliver_SendGoal>()
{
  return "warehouse_interfaces/action/Deliver_SendGoal";
}

template<>
struct has_fixed_size<warehouse_interfaces::action::Deliver_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<warehouse_interfaces::action::Deliver_SendGoal_Request>::value &&
    has_fixed_size<warehouse_interfaces::action::Deliver_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<warehouse_interfaces::action::Deliver_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<warehouse_interfaces::action::Deliver_SendGoal_Request>::value &&
    has_bounded_size<warehouse_interfaces::action::Deliver_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<warehouse_interfaces::action::Deliver_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<warehouse_interfaces::action::Deliver_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<warehouse_interfaces::action::Deliver_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace warehouse_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Deliver_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Deliver_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Deliver_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace warehouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_interfaces::action::Deliver_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_interfaces::action::Deliver_GetResult_Request & msg)
{
  return warehouse_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_interfaces::action::Deliver_GetResult_Request>()
{
  return "warehouse_interfaces::action::Deliver_GetResult_Request";
}

template<>
inline const char * name<warehouse_interfaces::action::Deliver_GetResult_Request>()
{
  return "warehouse_interfaces/action/Deliver_GetResult_Request";
}

template<>
struct has_fixed_size<warehouse_interfaces::action::Deliver_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<warehouse_interfaces::action::Deliver_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<warehouse_interfaces::action::Deliver_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "warehouse_interfaces/action/detail/deliver__traits.hpp"

namespace warehouse_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Deliver_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Deliver_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Deliver_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace warehouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_interfaces::action::Deliver_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_interfaces::action::Deliver_GetResult_Response & msg)
{
  return warehouse_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_interfaces::action::Deliver_GetResult_Response>()
{
  return "warehouse_interfaces::action::Deliver_GetResult_Response";
}

template<>
inline const char * name<warehouse_interfaces::action::Deliver_GetResult_Response>()
{
  return "warehouse_interfaces/action/Deliver_GetResult_Response";
}

template<>
struct has_fixed_size<warehouse_interfaces::action::Deliver_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<warehouse_interfaces::action::Deliver_Result>::value> {};

template<>
struct has_bounded_size<warehouse_interfaces::action::Deliver_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<warehouse_interfaces::action::Deliver_Result>::value> {};

template<>
struct is_message<warehouse_interfaces::action::Deliver_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace warehouse_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Deliver_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Deliver_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Deliver_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace warehouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_interfaces::action::Deliver_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_interfaces::action::Deliver_GetResult_Event & msg)
{
  return warehouse_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_interfaces::action::Deliver_GetResult_Event>()
{
  return "warehouse_interfaces::action::Deliver_GetResult_Event";
}

template<>
inline const char * name<warehouse_interfaces::action::Deliver_GetResult_Event>()
{
  return "warehouse_interfaces/action/Deliver_GetResult_Event";
}

template<>
struct has_fixed_size<warehouse_interfaces::action::Deliver_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<warehouse_interfaces::action::Deliver_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<warehouse_interfaces::action::Deliver_GetResult_Request>::value && has_bounded_size<warehouse_interfaces::action::Deliver_GetResult_Response>::value> {};

template<>
struct is_message<warehouse_interfaces::action::Deliver_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<warehouse_interfaces::action::Deliver_GetResult>()
{
  return "warehouse_interfaces::action::Deliver_GetResult";
}

template<>
inline const char * name<warehouse_interfaces::action::Deliver_GetResult>()
{
  return "warehouse_interfaces/action/Deliver_GetResult";
}

template<>
struct has_fixed_size<warehouse_interfaces::action::Deliver_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<warehouse_interfaces::action::Deliver_GetResult_Request>::value &&
    has_fixed_size<warehouse_interfaces::action::Deliver_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<warehouse_interfaces::action::Deliver_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<warehouse_interfaces::action::Deliver_GetResult_Request>::value &&
    has_bounded_size<warehouse_interfaces::action::Deliver_GetResult_Response>::value
  >
{
};

template<>
struct is_service<warehouse_interfaces::action::Deliver_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<warehouse_interfaces::action::Deliver_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<warehouse_interfaces::action::Deliver_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "warehouse_interfaces/action/detail/deliver__traits.hpp"

namespace warehouse_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const Deliver_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Deliver_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Deliver_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace warehouse_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use warehouse_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const warehouse_interfaces::action::Deliver_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  warehouse_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use warehouse_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const warehouse_interfaces::action::Deliver_FeedbackMessage & msg)
{
  return warehouse_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<warehouse_interfaces::action::Deliver_FeedbackMessage>()
{
  return "warehouse_interfaces::action::Deliver_FeedbackMessage";
}

template<>
inline const char * name<warehouse_interfaces::action::Deliver_FeedbackMessage>()
{
  return "warehouse_interfaces/action/Deliver_FeedbackMessage";
}

template<>
struct has_fixed_size<warehouse_interfaces::action::Deliver_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<warehouse_interfaces::action::Deliver_Feedback>::value> {};

template<>
struct has_bounded_size<warehouse_interfaces::action::Deliver_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<warehouse_interfaces::action::Deliver_Feedback>::value> {};

template<>
struct is_message<warehouse_interfaces::action::Deliver_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<warehouse_interfaces::action::Deliver>
  : std::true_type
{
};

template<>
struct is_action_goal<warehouse_interfaces::action::Deliver_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<warehouse_interfaces::action::Deliver_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<warehouse_interfaces::action::Deliver_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // WAREHOUSE_INTERFACES__ACTION__DETAIL__DELIVER__TRAITS_HPP_
