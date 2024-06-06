// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unitree_ocr_interfaces:msg/Detections.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTIONS__STRUCT_HPP_
#define UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "unitree_ocr_interfaces/msg/detail/detection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__unitree_ocr_interfaces__msg__Detections __attribute__((deprecated))
#else
# define DEPRECATED__unitree_ocr_interfaces__msg__Detections __declspec(deprecated)
#endif

namespace unitree_ocr_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Detections_
{
  using Type = Detections_<ContainerAllocator>;

  explicit Detections_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0;
    }
  }

  explicit Detections_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->count = 0;
    }
  }

  // field types and members
  using _data_type =
    std::vector<unitree_ocr_interfaces::msg::Detection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unitree_ocr_interfaces::msg::Detection_<ContainerAllocator>>>;
  _data_type data;
  using _count_type =
    uint16_t;
  _count_type count;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<unitree_ocr_interfaces::msg::Detection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<unitree_ocr_interfaces::msg::Detection_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__count(
    const uint16_t & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unitree_ocr_interfaces::msg::Detections_<ContainerAllocator> *;
  using ConstRawPtr =
    const unitree_ocr_interfaces::msg::Detections_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unitree_ocr_interfaces::msg::Detections_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unitree_ocr_interfaces::msg::Detections_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unitree_ocr_interfaces::msg::Detections_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unitree_ocr_interfaces::msg::Detections_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unitree_ocr_interfaces::msg::Detections_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unitree_ocr_interfaces::msg::Detections_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unitree_ocr_interfaces::msg::Detections_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unitree_ocr_interfaces::msg::Detections_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unitree_ocr_interfaces__msg__Detections
    std::shared_ptr<unitree_ocr_interfaces::msg::Detections_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unitree_ocr_interfaces__msg__Detections
    std::shared_ptr<unitree_ocr_interfaces::msg::Detections_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Detections_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const Detections_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Detections_

// alias to use template instance with default allocator
using Detections =
  unitree_ocr_interfaces::msg::Detections_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unitree_ocr_interfaces

#endif  // UNITREE_OCR_INTERFACES__MSG__DETAIL__DETECTIONS__STRUCT_HPP_
