// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_ocr_interfaces:msg/Detection.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_
#define UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "unitree_ocr_interfaces/msg/detail/detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace unitree_ocr_interfaces
{

namespace msg
{

namespace builder
{

class Init_Detection_count
{
public:
  explicit Init_Detection_count(::unitree_ocr_interfaces::msg::Detection & msg)
  : msg_(msg)
  {}
  ::unitree_ocr_interfaces::msg::Detection count(::unitree_ocr_interfaces::msg::Detection::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_ocr_interfaces::msg::Detection msg_;
};

class Init_Detection_text
{
public:
  Init_Detection_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Detection_count text(::unitree_ocr_interfaces::msg::Detection::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_Detection_count(msg_);
  }

private:
  ::unitree_ocr_interfaces::msg::Detection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_ocr_interfaces::msg::Detection>()
{
  return unitree_ocr_interfaces::msg::builder::Init_Detection_text();
}

}  // namespace unitree_ocr_interfaces

#endif  // UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTION__BUILDER_HPP_
