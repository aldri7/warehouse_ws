// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from warehouse_interfaces:msg/DeliveryStatus.idl
// generated code does not contain a copyright notice

#include "warehouse_interfaces/msg/detail/delivery_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_warehouse_interfaces
const rosidl_type_hash_t *
warehouse_interfaces__msg__DeliveryStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5f, 0x24, 0xa3, 0x06, 0x89, 0x4f, 0xe1, 0xdc,
      0x15, 0x01, 0x73, 0x54, 0xc6, 0xd3, 0xa8, 0x05,
      0x6c, 0x3e, 0x38, 0xbb, 0x1e, 0x06, 0x46, 0xa3,
      0xed, 0x8d, 0xe5, 0xf4, 0xa0, 0x6b, 0xc7, 0x3e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char warehouse_interfaces__msg__DeliveryStatus__TYPE_NAME[] = "warehouse_interfaces/msg/DeliveryStatus";

// Define type names, field names, and default values
static char warehouse_interfaces__msg__DeliveryStatus__FIELD_NAME__robot_id[] = "robot_id";
static char warehouse_interfaces__msg__DeliveryStatus__FIELD_NAME__package_count[] = "package_count";
static char warehouse_interfaces__msg__DeliveryStatus__FIELD_NAME__battery[] = "battery";
static char warehouse_interfaces__msg__DeliveryStatus__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field warehouse_interfaces__msg__DeliveryStatus__FIELDS[] = {
  {
    {warehouse_interfaces__msg__DeliveryStatus__FIELD_NAME__robot_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {warehouse_interfaces__msg__DeliveryStatus__FIELD_NAME__package_count, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {warehouse_interfaces__msg__DeliveryStatus__FIELD_NAME__battery, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {warehouse_interfaces__msg__DeliveryStatus__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
warehouse_interfaces__msg__DeliveryStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {warehouse_interfaces__msg__DeliveryStatus__TYPE_NAME, 39, 39},
      {warehouse_interfaces__msg__DeliveryStatus__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string robot_id\n"
  "uint8 package_count\n"
  "float32 battery\n"
  "uint8 state\n"
  "\n"
  "uint8 STATE_IDLE=0\n"
  "uint8 STATE_MOVING=1\n"
  "uint8 STATE_DELIVERING=2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
warehouse_interfaces__msg__DeliveryStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {warehouse_interfaces__msg__DeliveryStatus__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 130, 130},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
warehouse_interfaces__msg__DeliveryStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *warehouse_interfaces__msg__DeliveryStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
