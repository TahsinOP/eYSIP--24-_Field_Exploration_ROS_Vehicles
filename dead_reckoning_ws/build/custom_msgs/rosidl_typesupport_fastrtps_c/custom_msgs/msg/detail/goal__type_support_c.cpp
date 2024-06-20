// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/Goal.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/goal__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/goal__struct.h"
#include "custom_msgs/msg/detail/goal__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // x_coordinates, y_coordinates
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // x_coordinates, y_coordinates

// forward declare type support functions


using _Goal__ros_msg_type = custom_msgs__msg__Goal;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
bool cdr_serialize_custom_msgs__msg__Goal(
  const custom_msgs__msg__Goal * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: x_coordinates
  {
    size_t size = ros_message->x_coordinates.size;
    auto array_ptr = ros_message->x_coordinates.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: y_coordinates
  {
    size_t size = ros_message->y_coordinates.size;
    auto array_ptr = ros_message->y_coordinates.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
bool cdr_deserialize_custom_msgs__msg__Goal(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs__msg__Goal * ros_message)
{
  // Field name: x_coordinates
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_coordinates.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->x_coordinates);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->x_coordinates, size)) {
      fprintf(stderr, "failed to create array for field 'x_coordinates'");
      return false;
    }
    auto array_ptr = ros_message->x_coordinates.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: y_coordinates
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y_coordinates.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->y_coordinates);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->y_coordinates, size)) {
      fprintf(stderr, "failed to create array for field 'y_coordinates'");
      return false;
    }
    auto array_ptr = ros_message->y_coordinates.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Goal__ros_msg_type * ros_message = static_cast<const _Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: x_coordinates
  {
    size_t array_size = ros_message->x_coordinates.size;
    auto array_ptr = ros_message->x_coordinates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: y_coordinates
  {
    size_t array_size = ros_message->y_coordinates.size;
    auto array_ptr = ros_message->y_coordinates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__Goal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: x_coordinates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: y_coordinates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = custom_msgs__msg__Goal;
    is_plain =
      (
      offsetof(DataType, y_coordinates) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
bool cdr_serialize_key_custom_msgs__msg__Goal(
  const custom_msgs__msg__Goal * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: x_coordinates
  {
    size_t size = ros_message->x_coordinates.size;
    auto array_ptr = ros_message->x_coordinates.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: y_coordinates
  {
    size_t size = ros_message->y_coordinates.size;
    auto array_ptr = ros_message->y_coordinates.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_key_custom_msgs__msg__Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Goal__ros_msg_type * ros_message = static_cast<const _Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: x_coordinates
  {
    size_t array_size = ros_message->x_coordinates.size;
    auto array_ptr = ros_message->x_coordinates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: y_coordinates
  {
    size_t array_size = ros_message->y_coordinates.size;
    auto array_ptr = ros_message->y_coordinates.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_key_custom_msgs__msg__Goal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: x_coordinates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: y_coordinates
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = custom_msgs__msg__Goal;
    is_plain =
      (
      offsetof(DataType, y_coordinates) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const custom_msgs__msg__Goal * ros_message = static_cast<const custom_msgs__msg__Goal *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_custom_msgs__msg__Goal(ros_message, cdr);
}

static bool _Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  custom_msgs__msg__Goal * ros_message = static_cast<custom_msgs__msg__Goal *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_custom_msgs__msg__Goal(cdr, ros_message);
}

static uint32_t _Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__Goal(
      untyped_ros_message, 0));
}

static size_t _Goal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_custom_msgs__msg__Goal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Goal = {
  "custom_msgs::msg",
  "Goal",
  _Goal__cdr_serialize,
  _Goal__cdr_deserialize,
  _Goal__get_serialized_size,
  _Goal__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Goal,
  get_message_typesupport_handle_function,
  &custom_msgs__msg__Goal__get_type_hash,
  &custom_msgs__msg__Goal__get_type_description,
  &custom_msgs__msg__Goal__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, Goal)() {
  return &_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif
