// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_inspection_interfaces:srv/GoToInspectionPoint.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INSPECTION_INTERFACES__SRV__DETAIL__GO_TO_INSPECTION_POINT__TRAITS_HPP_
#define UNITREE_INSPECTION_INTERFACES__SRV__DETAIL__GO_TO_INSPECTION_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unitree_inspection_interfaces/srv/detail/go_to_inspection_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace unitree_inspection_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GoToInspectionPoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: inspection_point
  {
    out << "inspection_point: ";
    rosidl_generator_traits::value_to_yaml(msg.inspection_point, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoToInspectionPoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: inspection_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inspection_point: ";
    rosidl_generator_traits::value_to_yaml(msg.inspection_point, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoToInspectionPoint_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace unitree_inspection_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use unitree_inspection_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const unitree_inspection_interfaces::srv::GoToInspectionPoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_inspection_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_inspection_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const unitree_inspection_interfaces::srv::GoToInspectionPoint_Request & msg)
{
  return unitree_inspection_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_inspection_interfaces::srv::GoToInspectionPoint_Request>()
{
  return "unitree_inspection_interfaces::srv::GoToInspectionPoint_Request";
}

template<>
inline const char * name<unitree_inspection_interfaces::srv::GoToInspectionPoint_Request>()
{
  return "unitree_inspection_interfaces/srv/GoToInspectionPoint_Request";
}

template<>
struct has_fixed_size<unitree_inspection_interfaces::srv::GoToInspectionPoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unitree_inspection_interfaces::srv::GoToInspectionPoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unitree_inspection_interfaces::srv::GoToInspectionPoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace unitree_inspection_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GoToInspectionPoint_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GoToInspectionPoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GoToInspectionPoint_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace unitree_inspection_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use unitree_inspection_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const unitree_inspection_interfaces::srv::GoToInspectionPoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  unitree_inspection_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unitree_inspection_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const unitree_inspection_interfaces::srv::GoToInspectionPoint_Response & msg)
{
  return unitree_inspection_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<unitree_inspection_interfaces::srv::GoToInspectionPoint_Response>()
{
  return "unitree_inspection_interfaces::srv::GoToInspectionPoint_Response";
}

template<>
inline const char * name<unitree_inspection_interfaces::srv::GoToInspectionPoint_Response>()
{
  return "unitree_inspection_interfaces/srv/GoToInspectionPoint_Response";
}

template<>
struct has_fixed_size<unitree_inspection_interfaces::srv::GoToInspectionPoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unitree_inspection_interfaces::srv::GoToInspectionPoint_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<unitree_inspection_interfaces::srv::GoToInspectionPoint_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_inspection_interfaces::srv::GoToInspectionPoint>()
{
  return "unitree_inspection_interfaces::srv::GoToInspectionPoint";
}

template<>
inline const char * name<unitree_inspection_interfaces::srv::GoToInspectionPoint>()
{
  return "unitree_inspection_interfaces/srv/GoToInspectionPoint";
}

template<>
struct has_fixed_size<unitree_inspection_interfaces::srv::GoToInspectionPoint>
  : std::integral_constant<
    bool,
    has_fixed_size<unitree_inspection_interfaces::srv::GoToInspectionPoint_Request>::value &&
    has_fixed_size<unitree_inspection_interfaces::srv::GoToInspectionPoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<unitree_inspection_interfaces::srv::GoToInspectionPoint>
  : std::integral_constant<
    bool,
    has_bounded_size<unitree_inspection_interfaces::srv::GoToInspectionPoint_Request>::value &&
    has_bounded_size<unitree_inspection_interfaces::srv::GoToInspectionPoint_Response>::value
  >
{
};

template<>
struct is_service<unitree_inspection_interfaces::srv::GoToInspectionPoint>
  : std::true_type
{
};

template<>
struct is_service_request<unitree_inspection_interfaces::srv::GoToInspectionPoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<unitree_inspection_interfaces::srv::GoToInspectionPoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_INSPECTION_INTERFACES__SRV__DETAIL__GO_TO_INSPECTION_POINT__TRAITS_HPP_
