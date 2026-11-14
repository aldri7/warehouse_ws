// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from warehouse_interfaces:msg/DeliveryStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "warehouse_interfaces/msg/delivery_status.h"


#ifndef WAREHOUSE_INTERFACES__MSG__DETAIL__DELIVERY_STATUS__STRUCT_H_
#define WAREHOUSE_INTERFACES__MSG__DETAIL__DELIVERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATE_IDLE'.
enum
{
  warehouse_interfaces__msg__DeliveryStatus__STATE_IDLE = 0
};

/// Constant 'STATE_MOVING'.
enum
{
  warehouse_interfaces__msg__DeliveryStatus__STATE_MOVING = 1
};

/// Constant 'STATE_DELIVERING'.
enum
{
  warehouse_interfaces__msg__DeliveryStatus__STATE_DELIVERING = 2
};

// Include directives for member types
// Member 'robot_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DeliveryStatus in the package warehouse_interfaces.
typedef struct warehouse_interfaces__msg__DeliveryStatus
{
  rosidl_runtime_c__String robot_id;
  uint8_t package_count;
  float battery;
  uint8_t state;
} warehouse_interfaces__msg__DeliveryStatus;

// Struct for a sequence of warehouse_interfaces__msg__DeliveryStatus.
typedef struct warehouse_interfaces__msg__DeliveryStatus__Sequence
{
  warehouse_interfaces__msg__DeliveryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} warehouse_interfaces__msg__DeliveryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // WAREHOUSE_INTERFACES__MSG__DETAIL__DELIVERY_STATUS__STRUCT_H_
