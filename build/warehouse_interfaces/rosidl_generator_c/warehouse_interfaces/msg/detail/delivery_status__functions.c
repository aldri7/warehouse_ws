// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from warehouse_interfaces:msg/DeliveryStatus.idl
// generated code does not contain a copyright notice
#include "warehouse_interfaces/msg/detail/delivery_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_id`
#include "rosidl_runtime_c/string_functions.h"

bool
warehouse_interfaces__msg__DeliveryStatus__init(warehouse_interfaces__msg__DeliveryStatus * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__init(&msg->robot_id)) {
    warehouse_interfaces__msg__DeliveryStatus__fini(msg);
    return false;
  }
  // package_count
  // battery
  // state
  return true;
}

void
warehouse_interfaces__msg__DeliveryStatus__fini(warehouse_interfaces__msg__DeliveryStatus * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  rosidl_runtime_c__String__fini(&msg->robot_id);
  // package_count
  // battery
  // state
}

bool
warehouse_interfaces__msg__DeliveryStatus__are_equal(const warehouse_interfaces__msg__DeliveryStatus * lhs, const warehouse_interfaces__msg__DeliveryStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_id), &(rhs->robot_id)))
  {
    return false;
  }
  // package_count
  if (lhs->package_count != rhs->package_count) {
    return false;
  }
  // battery
  if (lhs->battery != rhs->battery) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
warehouse_interfaces__msg__DeliveryStatus__copy(
  const warehouse_interfaces__msg__DeliveryStatus * input,
  warehouse_interfaces__msg__DeliveryStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_id), &(output->robot_id)))
  {
    return false;
  }
  // package_count
  output->package_count = input->package_count;
  // battery
  output->battery = input->battery;
  // state
  output->state = input->state;
  return true;
}

warehouse_interfaces__msg__DeliveryStatus *
warehouse_interfaces__msg__DeliveryStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_interfaces__msg__DeliveryStatus * msg = (warehouse_interfaces__msg__DeliveryStatus *)allocator.allocate(sizeof(warehouse_interfaces__msg__DeliveryStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(warehouse_interfaces__msg__DeliveryStatus));
  bool success = warehouse_interfaces__msg__DeliveryStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
warehouse_interfaces__msg__DeliveryStatus__destroy(warehouse_interfaces__msg__DeliveryStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    warehouse_interfaces__msg__DeliveryStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
warehouse_interfaces__msg__DeliveryStatus__Sequence__init(warehouse_interfaces__msg__DeliveryStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_interfaces__msg__DeliveryStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(warehouse_interfaces__msg__DeliveryStatus)) {
      return false;
    }
    data = (warehouse_interfaces__msg__DeliveryStatus *)allocator.zero_allocate(size, sizeof(warehouse_interfaces__msg__DeliveryStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = warehouse_interfaces__msg__DeliveryStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        warehouse_interfaces__msg__DeliveryStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
warehouse_interfaces__msg__DeliveryStatus__Sequence__fini(warehouse_interfaces__msg__DeliveryStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      warehouse_interfaces__msg__DeliveryStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

warehouse_interfaces__msg__DeliveryStatus__Sequence *
warehouse_interfaces__msg__DeliveryStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  warehouse_interfaces__msg__DeliveryStatus__Sequence * array = (warehouse_interfaces__msg__DeliveryStatus__Sequence *)allocator.allocate(sizeof(warehouse_interfaces__msg__DeliveryStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = warehouse_interfaces__msg__DeliveryStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
warehouse_interfaces__msg__DeliveryStatus__Sequence__destroy(warehouse_interfaces__msg__DeliveryStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    warehouse_interfaces__msg__DeliveryStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
warehouse_interfaces__msg__DeliveryStatus__Sequence__are_equal(const warehouse_interfaces__msg__DeliveryStatus__Sequence * lhs, const warehouse_interfaces__msg__DeliveryStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!warehouse_interfaces__msg__DeliveryStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
warehouse_interfaces__msg__DeliveryStatus__Sequence__copy(
  const warehouse_interfaces__msg__DeliveryStatus__Sequence * input,
  warehouse_interfaces__msg__DeliveryStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(warehouse_interfaces__msg__DeliveryStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(warehouse_interfaces__msg__DeliveryStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    warehouse_interfaces__msg__DeliveryStatus * data =
      (warehouse_interfaces__msg__DeliveryStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!warehouse_interfaces__msg__DeliveryStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          warehouse_interfaces__msg__DeliveryStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!warehouse_interfaces__msg__DeliveryStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
