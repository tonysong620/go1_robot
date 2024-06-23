// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_ocr_interfaces:msg/Detections.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTIONS__TRAITS_HPP_
#define UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_ocr_interfaces/msg/detail/detections__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "unitree_ocr_interfaces/msg/detail/detection__traits.hpp"

namespace unitree_ocr_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Detections & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const Detections & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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

inline std::string to_yaml(const Detections & msg, bool use_flow_style = false)
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
  const unitree_ocr_interfaces::msg::Detections & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_ocr_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_ocr_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const unitree_ocr_interfaces::msg::Detections & msg)
{
  return unitree_ocr_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_ocr_interfaces::msg::Detections>()
{
  return "unitree_ocr_interfaces::msg::Detections";
}

template<>
inline const char * name<unitree_ocr_interfaces::msg::Detections>()
{
  return "unitree_ocr_interfaces/msg/Detections";
}

template<>
struct has_fixed_size<unitree_ocr_interfaces::msg::Detections>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unitree_ocr_interfaces::msg::Detections>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unitree_ocr_interfaces::msg::Detections>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTIONS__TRAITS_HPP_
