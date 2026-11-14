// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from warehouse_interfaces:action/Deliver.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_interfaces/action/deliver.hpp"


#ifndef WAREHOUSE_INTERFACES__ACTION__DETAIL__DELIVER__BUILDER_HPP_
#define WAREHOUSE_INTERFACES__ACTION__DETAIL__DELIVER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "warehouse_interfaces/action/detail/deliver__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace warehouse_interfaces
{

namespace action
{

namespace builder
{

class Init_Deliver_Goal_speed
{
public:
  explicit Init_Deliver_Goal_speed(::warehouse_interfaces::action::Deliver_Goal & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::action::Deliver_Goal speed(::warehouse_interfaces::action::Deliver_Goal::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_Goal msg_;
};

class Init_Deliver_Goal_distance
{
public:
  explicit Init_Deliver_Goal_distance(::warehouse_interfaces::action::Deliver_Goal & msg)
  : msg_(msg)
  {}
  Init_Deliver_Goal_speed distance(::warehouse_interfaces::action::Deliver_Goal::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Deliver_Goal_speed(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_Goal msg_;
};

class Init_Deliver_Goal_destination
{
public:
  Init_Deliver_Goal_destination()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deliver_Goal_distance destination(::warehouse_interfaces::action::Deliver_Goal::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_Deliver_Goal_distance(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::action::Deliver_Goal>()
{
  return warehouse_interfaces::action::builder::Init_Deliver_Goal_destination();
}

}  // namespace warehouse_interfaces


namespace warehouse_interfaces
{

namespace action
{

namespace builder
{

class Init_Deliver_Result_time_taken
{
public:
  explicit Init_Deliver_Result_time_taken(::warehouse_interfaces::action::Deliver_Result & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::action::Deliver_Result time_taken(::warehouse_interfaces::action::Deliver_Result::_time_taken_type arg)
  {
    msg_.time_taken = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_Result msg_;
};

class Init_Deliver_Result_success
{
public:
  Init_Deliver_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deliver_Result_time_taken success(::warehouse_interfaces::action::Deliver_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Deliver_Result_time_taken(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::action::Deliver_Result>()
{
  return warehouse_interfaces::action::builder::Init_Deliver_Result_success();
}

}  // namespace warehouse_interfaces


namespace warehouse_interfaces
{

namespace action
{

namespace builder
{

class Init_Deliver_Feedback_percent
{
public:
  explicit Init_Deliver_Feedback_percent(::warehouse_interfaces::action::Deliver_Feedback & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::action::Deliver_Feedback percent(::warehouse_interfaces::action::Deliver_Feedback::_percent_type arg)
  {
    msg_.percent = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_Feedback msg_;
};

class Init_Deliver_Feedback_remaining_distance
{
public:
  Init_Deliver_Feedback_remaining_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deliver_Feedback_percent remaining_distance(::warehouse_interfaces::action::Deliver_Feedback::_remaining_distance_type arg)
  {
    msg_.remaining_distance = std::move(arg);
    return Init_Deliver_Feedback_percent(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::action::Deliver_Feedback>()
{
  return warehouse_interfaces::action::builder::Init_Deliver_Feedback_remaining_distance();
}

}  // namespace warehouse_interfaces


namespace warehouse_interfaces
{

namespace action
{

namespace builder
{

class Init_Deliver_SendGoal_Request_goal
{
public:
  explicit Init_Deliver_SendGoal_Request_goal(::warehouse_interfaces::action::Deliver_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::action::Deliver_SendGoal_Request goal(::warehouse_interfaces::action::Deliver_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_SendGoal_Request msg_;
};

class Init_Deliver_SendGoal_Request_goal_id
{
public:
  Init_Deliver_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deliver_SendGoal_Request_goal goal_id(::warehouse_interfaces::action::Deliver_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Deliver_SendGoal_Request_goal(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::action::Deliver_SendGoal_Request>()
{
  return warehouse_interfaces::action::builder::Init_Deliver_SendGoal_Request_goal_id();
}

}  // namespace warehouse_interfaces


namespace warehouse_interfaces
{

namespace action
{

namespace builder
{

class Init_Deliver_SendGoal_Response_stamp
{
public:
  explicit Init_Deliver_SendGoal_Response_stamp(::warehouse_interfaces::action::Deliver_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::action::Deliver_SendGoal_Response stamp(::warehouse_interfaces::action::Deliver_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_SendGoal_Response msg_;
};

class Init_Deliver_SendGoal_Response_accepted
{
public:
  Init_Deliver_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deliver_SendGoal_Response_stamp accepted(::warehouse_interfaces::action::Deliver_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Deliver_SendGoal_Response_stamp(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::action::Deliver_SendGoal_Response>()
{
  return warehouse_interfaces::action::builder::Init_Deliver_SendGoal_Response_accepted();
}

}  // namespace warehouse_interfaces


namespace warehouse_interfaces
{

namespace action
{

namespace builder
{

class Init_Deliver_SendGoal_Event_response
{
public:
  explicit Init_Deliver_SendGoal_Event_response(::warehouse_interfaces::action::Deliver_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::action::Deliver_SendGoal_Event response(::warehouse_interfaces::action::Deliver_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_SendGoal_Event msg_;
};

class Init_Deliver_SendGoal_Event_request
{
public:
  explicit Init_Deliver_SendGoal_Event_request(::warehouse_interfaces::action::Deliver_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Deliver_SendGoal_Event_response request(::warehouse_interfaces::action::Deliver_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Deliver_SendGoal_Event_response(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_SendGoal_Event msg_;
};

class Init_Deliver_SendGoal_Event_info
{
public:
  Init_Deliver_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deliver_SendGoal_Event_request info(::warehouse_interfaces::action::Deliver_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Deliver_SendGoal_Event_request(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::action::Deliver_SendGoal_Event>()
{
  return warehouse_interfaces::action::builder::Init_Deliver_SendGoal_Event_info();
}

}  // namespace warehouse_interfaces


namespace warehouse_interfaces
{

namespace action
{

namespace builder
{

class Init_Deliver_GetResult_Request_goal_id
{
public:
  Init_Deliver_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::warehouse_interfaces::action::Deliver_GetResult_Request goal_id(::warehouse_interfaces::action::Deliver_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::action::Deliver_GetResult_Request>()
{
  return warehouse_interfaces::action::builder::Init_Deliver_GetResult_Request_goal_id();
}

}  // namespace warehouse_interfaces


namespace warehouse_interfaces
{

namespace action
{

namespace builder
{

class Init_Deliver_GetResult_Response_result
{
public:
  explicit Init_Deliver_GetResult_Response_result(::warehouse_interfaces::action::Deliver_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::action::Deliver_GetResult_Response result(::warehouse_interfaces::action::Deliver_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_GetResult_Response msg_;
};

class Init_Deliver_GetResult_Response_status
{
public:
  Init_Deliver_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deliver_GetResult_Response_result status(::warehouse_interfaces::action::Deliver_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Deliver_GetResult_Response_result(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::action::Deliver_GetResult_Response>()
{
  return warehouse_interfaces::action::builder::Init_Deliver_GetResult_Response_status();
}

}  // namespace warehouse_interfaces


namespace warehouse_interfaces
{

namespace action
{

namespace builder
{

class Init_Deliver_GetResult_Event_response
{
public:
  explicit Init_Deliver_GetResult_Event_response(::warehouse_interfaces::action::Deliver_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::action::Deliver_GetResult_Event response(::warehouse_interfaces::action::Deliver_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_GetResult_Event msg_;
};

class Init_Deliver_GetResult_Event_request
{
public:
  explicit Init_Deliver_GetResult_Event_request(::warehouse_interfaces::action::Deliver_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Deliver_GetResult_Event_response request(::warehouse_interfaces::action::Deliver_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Deliver_GetResult_Event_response(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_GetResult_Event msg_;
};

class Init_Deliver_GetResult_Event_info
{
public:
  Init_Deliver_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deliver_GetResult_Event_request info(::warehouse_interfaces::action::Deliver_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Deliver_GetResult_Event_request(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::action::Deliver_GetResult_Event>()
{
  return warehouse_interfaces::action::builder::Init_Deliver_GetResult_Event_info();
}

}  // namespace warehouse_interfaces


namespace warehouse_interfaces
{

namespace action
{

namespace builder
{

class Init_Deliver_FeedbackMessage_feedback
{
public:
  explicit Init_Deliver_FeedbackMessage_feedback(::warehouse_interfaces::action::Deliver_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::warehouse_interfaces::action::Deliver_FeedbackMessage feedback(::warehouse_interfaces::action::Deliver_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_FeedbackMessage msg_;
};

class Init_Deliver_FeedbackMessage_goal_id
{
public:
  Init_Deliver_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Deliver_FeedbackMessage_feedback goal_id(::warehouse_interfaces::action::Deliver_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Deliver_FeedbackMessage_feedback(msg_);
  }

private:
  ::warehouse_interfaces::action::Deliver_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::warehouse_interfaces::action::Deliver_FeedbackMessage>()
{
  return warehouse_interfaces::action::builder::Init_Deliver_FeedbackMessage_goal_id();
}

}  // namespace warehouse_interfaces

#endif  // WAREHOUSE_INTERFACES__ACTION__DETAIL__DELIVER__BUILDER_HPP_
