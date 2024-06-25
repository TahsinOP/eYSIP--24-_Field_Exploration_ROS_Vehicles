// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/Goal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_msgs/msg/detail/goal__functions.h"
#include "custom_msgs/msg/detail/goal__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace custom_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_msgs::msg::Goal(_init);
}

void Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_msgs::msg::Goal *>(message_memory);
  typed_message->~Goal();
}

size_t size_function__Goal__x_coordinates(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Goal__x_coordinates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Goal__x_coordinates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Goal__x_coordinates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Goal__x_coordinates(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Goal__x_coordinates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Goal__x_coordinates(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Goal__x_coordinates(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Goal__y_coordinates(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Goal__y_coordinates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Goal__y_coordinates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Goal__y_coordinates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Goal__y_coordinates(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Goal__y_coordinates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Goal__y_coordinates(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Goal__y_coordinates(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Goal_message_member_array[2] = {
  {
    "x_coordinates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::Goal, x_coordinates),  // bytes offset in struct
    nullptr,  // default value
    size_function__Goal__x_coordinates,  // size() function pointer
    get_const_function__Goal__x_coordinates,  // get_const(index) function pointer
    get_function__Goal__x_coordinates,  // get(index) function pointer
    fetch_function__Goal__x_coordinates,  // fetch(index, &value) function pointer
    assign_function__Goal__x_coordinates,  // assign(index, value) function pointer
    resize_function__Goal__x_coordinates  // resize(index) function pointer
  },
  {
    "y_coordinates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::Goal, y_coordinates),  // bytes offset in struct
    nullptr,  // default value
    size_function__Goal__y_coordinates,  // size() function pointer
    get_const_function__Goal__y_coordinates,  // get_const(index) function pointer
    get_function__Goal__y_coordinates,  // get(index) function pointer
    fetch_function__Goal__y_coordinates,  // fetch(index, &value) function pointer
    assign_function__Goal__y_coordinates,  // assign(index, value) function pointer
    resize_function__Goal__y_coordinates  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Goal_message_members = {
  "custom_msgs::msg",  // message namespace
  "Goal",  // message name
  2,  // number of fields
  sizeof(custom_msgs::msg::Goal),
  false,  // has_any_key_member_
  Goal_message_member_array,  // message members
  Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Goal_message_members,
  get_message_typesupport_handle_function,
  &custom_msgs__msg__Goal__get_type_hash,
  &custom_msgs__msg__Goal__get_type_description,
  &custom_msgs__msg__Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs::msg::Goal>()
{
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs, msg, Goal)() {
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif