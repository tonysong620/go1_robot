// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_ocr_interfaces:msg/Detections.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTIONS__BUILDER_HPP_
#define UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "unitree_ocr_interfaces/msg/detail/detections__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace unitree_ocr_interfaces
{

namespace msg
{

namespace builder
{

class Init_Detections_count
{
public:
  explicit Init_Detections_count(::unitree_ocr_interfaces::msg::Detections & msg)
  : msg_(msg)
  {}
  ::unitree_ocr_interfaces::msg::Detections count(::unitree_ocr_interfaces::msg::Detections::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_ocr_interfaces::msg::Detections msg_;
};

class Init_Detections_data
{
public:
  Init_Detections_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detections_count data(::unitree_ocr_interfaces::msg::Detections::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_Detections_count(msg_);
  }

private:
  ::unitree_ocr_interfaces::msg::Detections msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_ocr_interfaces::msg::Detections>()
{
  return unitree_ocr_interfaces::msg::builder::Init_Detections_data();
}

}  // namespace unitree_ocr_interfaces

#endif  // UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTIONS__BUILDER_HPP_
