// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_inspection_interfaces:srv/GoToInspectionPoint.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_INSPECTION_INTERFACES__SRV__DETAIL__GO_TO_INSPECTION_POINT__BUILDER_HPP_
#define UNITREE_INSPECTION_INTERFACES__SRV__DETAIL__GO_TO_INSPECTION_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "unitree_inspection_interfaces/srv/detail/go_to_inspection_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace unitree_inspection_interfaces
{

namespace srv
{

namespace builder
{

class Init_GoToInspectionPoint_Request_inspection_point
{
public:
  Init_GoToInspectionPoint_Request_inspection_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::unitree_inspection_interfaces::srv::GoToInspectionPoint_Request inspection_point(::unitree_inspection_interfaces::srv::GoToInspectionPoint_Request::_inspection_point_type arg)
  {
    msg_.inspection_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_inspection_interfaces::srv::GoToInspectionPoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_inspection_interfaces::srv::GoToInspectionPoint_Request>()
{
  return unitree_inspection_interfaces::srv::builder::Init_GoToInspectionPoint_Request_inspection_point();
}

}  // namespace unitree_inspection_interfaces


namespace unitree_inspection_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_inspection_interfaces::srv::GoToInspectionPoint_Response>()
{
  return ::unitree_inspection_interfaces::srv::GoToInspectionPoint_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace unitree_inspection_interfaces

#endif  // UNITREE_INSPECTION_INTERFACES__SRV__DETAIL__GO_TO_INSPECTION_POINT__BUILDER_HPP_
