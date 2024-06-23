// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from unitree_ocr_interfaces:msg/Detections.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "unitree_ocr_interfaces/msg/detail/detections__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace unitree_ocr_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Detections_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) unitree_ocr_interfaces::msg::Detections(_init);
}

void Detections_fini_function(void * message_memory)
{
  auto typed_message = static_cast<unitree_ocr_interfaces::msg::Detections *>(message_memory);
  typed_message->~Detections();
}

size_t size_function__Detections__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<unitree_ocr_interfaces::msg::Detection> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Detections__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<unitree_ocr_interfaces::msg::Detection> *>(untyped_member);
  return &member[index];
}

void * get_function__Detections__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<unitree_ocr_interfaces::msg::Detection> *>(untyped_member);
  return &member[index];
}

void fetch_function__Detections__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const unitree_ocr_interfaces::msg::Detection *>(
    get_const_function__Detections__data(untyped_member, index));
  auto & value = *reinterpret_cast<unitree_ocr_interfaces::msg::Detection *>(untyped_value);
  value = item;
}

void assign_function__Detections__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<unitree_ocr_interfaces::msg::Detection *>(
    get_function__Detections__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const unitree_ocr_interfaces::msg::Detection *>(untyped_value);
  item = value;
}

void resize_function__Detections__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<unitree_ocr_interfaces::msg::Detection> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Detections_message_member_array[2] = {
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unitree_ocr_interfaces::msg::Detection>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_ocr_interfaces::msg::Detections, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__Detections__data,  // size() function pointer
    get_const_function__Detections__data,  // get_const(index) function pointer
    get_function__Detections__data,  // get(index) function pointer
    fetch_function__Detections__data,  // fetch(index, &value) function pointer
    assign_function__Detections__data,  // assign(index, value) function pointer
    resize_function__Detections__data  // resize(index) function pointer
  },
  {
    "count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unitree_ocr_interfaces::msg::Detections, count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Detections_message_members = {
  "unitree_ocr_interfaces::msg",  // message namespace
  "Detections",  // message name
  2,  // number of fields
  sizeof(unitree_ocr_interfaces::msg::Detections),
  Detections_message_member_array,  // message members
  Detections_init_function,  // function to initialize message memory (memory has to be allocated)
  Detections_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Detections_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Detections_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace unitree_ocr_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<unitree_ocr_interfaces::msg::Detections>()
{
  return &::unitree_ocr_interfaces::msg::rosidl_typesupport_introspection_cpp::Detections_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, unitree_ocr_interfaces, msg, Detections)() {
  return &::unitree_ocr_interfaces::msg::rosidl_typesupport_introspection_cpp::Detections_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
