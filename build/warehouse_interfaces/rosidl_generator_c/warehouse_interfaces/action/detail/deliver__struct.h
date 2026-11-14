// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from warehouse_interfaces:action/Deliver.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_interfaces/action/deliver.h"


#ifndef WAREHOUSE_INTERFACES__ACTION__DETAIL__DELIVER__STRUCT_H_
#define WAREHOUSE_INTERFACES__ACTION__DETAIL__DELIVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'destination'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Deliver in the package warehouse_interfaces.
typedef struct warehouse_interfaces__action__Deliver_Goal
{
  rosidl_runtime_c__String destination;
  float distance;
  float speed;
} warehouse_interfaces__action__Deliver_Goal;

// Struct for a sequence of warehouse_interfaces__action__Deliver_Goal.
typedef struct warehouse_interfaces__action__Deliver_Goal__Sequence
{
  warehouse_interfaces__action__Deliver_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_interfaces__action__Deliver_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/Deliver in the package warehouse_interfaces.
typedef struct warehouse_interfaces__action__Deliver_Result
{
  bool success;
  float time_taken;
} warehouse_interfaces__action__Deliver_Result;

// Struct for a sequence of warehouse_interfaces__action__Deliver_Result.
typedef struct warehouse_interfaces__action__Deliver_Result__Sequence
{
  warehouse_interfaces__action__Deliver_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_interfaces__action__Deliver_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/Deliver in the package warehouse_interfaces.
typedef struct warehouse_interfaces__action__Deliver_Feedback
{
  float remaining_distance;
  float percent;
} warehouse_interfaces__action__Deliver_Feedback;

// Struct for a sequence of warehouse_interfaces__action__Deliver_Feedback.
typedef struct warehouse_interfaces__action__Deliver_Feedback__Sequence
{
  warehouse_interfaces__action__Deliver_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_interfaces__action__Deliver_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "warehouse_interfaces/action/detail/deliver__struct.h"

/// Struct defined in action/Deliver in the package warehouse_interfaces.
typedef struct warehouse_interfaces__action__Deliver_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  warehouse_interfaces__action__Deliver_Goal goal;
} warehouse_interfaces__action__Deliver_SendGoal_Request;

// Struct for a sequence of warehouse_interfaces__action__Deliver_SendGoal_Request.
typedef struct warehouse_interfaces__action__Deliver_SendGoal_Request__Sequence
{
  warehouse_interfaces__action__Deliver_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_interfaces__action__Deliver_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Deliver in the package warehouse_interfaces.
typedef struct warehouse_interfaces__action__Deliver_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} warehouse_interfaces__action__Deliver_SendGoal_Response;

// Struct for a sequence of warehouse_interfaces__action__Deliver_SendGoal_Response.
typedef struct warehouse_interfaces__action__Deliver_SendGoal_Response__Sequence
{
  warehouse_interfaces__action__Deliver_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_interfaces__action__Deliver_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  warehouse_interfaces__action__Deliver_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  warehouse_interfaces__action__Deliver_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Deliver in the package warehouse_interfaces.
typedef struct warehouse_interfaces__action__Deliver_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  warehouse_interfaces__action__Deliver_SendGoal_Request__Sequence request;
  warehouse_interfaces__action__Deliver_SendGoal_Response__Sequence response;
} warehouse_interfaces__action__Deliver_SendGoal_Event;

// Struct for a sequence of warehouse_interfaces__action__Deliver_SendGoal_Event.
typedef struct warehouse_interfaces__action__Deliver_SendGoal_Event__Sequence
{
  warehouse_interfaces__action__Deliver_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_interfaces__action__Deliver_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Deliver in the package warehouse_interfaces.
typedef struct warehouse_interfaces__action__Deliver_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} warehouse_interfaces__action__Deliver_GetResult_Request;

// Struct for a sequence of warehouse_interfaces__action__Deliver_GetResult_Request.
typedef struct warehouse_interfaces__action__Deliver_GetResult_Request__Sequence
{
  warehouse_interfaces__action__Deliver_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_interfaces__action__Deliver_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "warehouse_interfaces/action/detail/deliver__struct.h"

/// Struct defined in action/Deliver in the package warehouse_interfaces.
typedef struct warehouse_interfaces__action__Deliver_GetResult_Response
{
  int8_t status;
  warehouse_interfaces__action__Deliver_Result result;
} warehouse_interfaces__action__Deliver_GetResult_Response;

// Struct for a sequence of warehouse_interfaces__action__Deliver_GetResult_Response.
typedef struct warehouse_interfaces__action__Deliver_GetResult_Response__Sequence
{
  warehouse_interfaces__action__Deliver_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_interfaces__action__Deliver_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  warehouse_interfaces__action__Deliver_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  warehouse_interfaces__action__Deliver_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Deliver in the package warehouse_interfaces.
typedef struct warehouse_interfaces__action__Deliver_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  warehouse_interfaces__action__Deliver_GetResult_Request__Sequence request;
  warehouse_interfaces__action__Deliver_GetResult_Response__Sequence response;
} warehouse_interfaces__action__Deliver_GetResult_Event;

// Struct for a sequence of warehouse_interfaces__action__Deliver_GetResult_Event.
typedef struct warehouse_interfaces__action__Deliver_GetResult_Event__Sequence
{
  warehouse_interfaces__action__Deliver_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_interfaces__action__Deliver_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "warehouse_interfaces/action/detail/deliver__struct.h"

/// Struct defined in action/Deliver in the package warehouse_interfaces.
typedef struct warehouse_interfaces__action__Deliver_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  warehouse_interfaces__action__Deliver_Feedback feedback;
} warehouse_interfaces__action__Deliver_FeedbackMessage;

// Struct for a sequence of warehouse_interfaces__action__Deliver_FeedbackMessage.
typedef struct warehouse_interfaces__action__Deliver_FeedbackMessage__Sequence
{
  warehouse_interfaces__action__Deliver_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_interfaces__action__Deliver_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAREHOUSE_INTERFACES__ACTION__DETAIL__DELIVER__STRUCT_H_
