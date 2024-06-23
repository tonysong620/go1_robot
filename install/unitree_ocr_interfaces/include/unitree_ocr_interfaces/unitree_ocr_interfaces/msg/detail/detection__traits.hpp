// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_ocr_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTION__TRAITS_HPP_
#define UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_ocr_interfaces/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace unitree_ocr_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detection & msg,
  std::ostream & out)
{
  out << "{";
  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Detection & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace unitree_ocr_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use unitree_ocr_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const unitree_ocr_interfaces::msg::Detection & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_ocr_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_ocr_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const unitree_ocr_interfaces::msg::Detection & msg)
{
  return unitree_ocr_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_ocr_interfaces::msg::Detection>()
{
  return "unitree_ocr_interfaces::msg::Detection";
}

template<>
inline const char * name<unitree_ocr_interfaces::msg::Detection>()
{
  return "unitree_ocr_interfaces/msg/Detection";
}

template<>
struct has_fixed_size<unitree_ocr_interfaces::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unitree_ocr_interfaces::msg::Detection>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unitree_ocr_interfaces::msg::Detection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTION__TRAITS_HPP_
