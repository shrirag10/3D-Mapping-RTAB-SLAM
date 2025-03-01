// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rtabmap_msgs:srv/GetMap2.idl
// generated code does not contain a copyright notice

#ifndef RTABMAP_MSGS__SRV__DETAIL__GET_MAP2__TRAITS_HPP_
#define RTABMAP_MSGS__SRV__DETAIL__GET_MAP2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rtabmap_msgs/srv/detail/get_map2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMap2_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: global_map
  {
    out << "global_map: ";
    rosidl_generator_traits::value_to_yaml(msg.global_map, out);
    out << ", ";
  }

  // member: optimized
  {
    out << "optimized: ";
    rosidl_generator_traits::value_to_yaml(msg.optimized, out);
    out << ", ";
  }

  // member: with_images
  {
    out << "with_images: ";
    rosidl_generator_traits::value_to_yaml(msg.with_images, out);
    out << ", ";
  }

  // member: with_scans
  {
    out << "with_scans: ";
    rosidl_generator_traits::value_to_yaml(msg.with_scans, out);
    out << ", ";
  }

  // member: with_user_data
  {
    out << "with_user_data: ";
    rosidl_generator_traits::value_to_yaml(msg.with_user_data, out);
    out << ", ";
  }

  // member: with_grids
  {
    out << "with_grids: ";
    rosidl_generator_traits::value_to_yaml(msg.with_grids, out);
    out << ", ";
  }

  // member: with_words
  {
    out << "with_words: ";
    rosidl_generator_traits::value_to_yaml(msg.with_words, out);
    out << ", ";
  }

  // member: with_global_descriptors
  {
    out << "with_global_descriptors: ";
    rosidl_generator_traits::value_to_yaml(msg.with_global_descriptors, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMap2_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: global_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_map: ";
    rosidl_generator_traits::value_to_yaml(msg.global_map, out);
    out << "\n";
  }

  // member: optimized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optimized: ";
    rosidl_generator_traits::value_to_yaml(msg.optimized, out);
    out << "\n";
  }

  // member: with_images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "with_images: ";
    rosidl_generator_traits::value_to_yaml(msg.with_images, out);
    out << "\n";
  }

  // member: with_scans
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "with_scans: ";
    rosidl_generator_traits::value_to_yaml(msg.with_scans, out);
    out << "\n";
  }

  // member: with_user_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "with_user_data: ";
    rosidl_generator_traits::value_to_yaml(msg.with_user_data, out);
    out << "\n";
  }

  // member: with_grids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "with_grids: ";
    rosidl_generator_traits::value_to_yaml(msg.with_grids, out);
    out << "\n";
  }

  // member: with_words
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "with_words: ";
    rosidl_generator_traits::value_to_yaml(msg.with_words, out);
    out << "\n";
  }

  // member: with_global_descriptors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "with_global_descriptors: ";
    rosidl_generator_traits::value_to_yaml(msg.with_global_descriptors, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMap2_Request & msg, bool use_flow_style = false)
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

}  // namespace rtabmap_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rtabmap_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rtabmap_msgs::srv::GetMap2_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::GetMap2_Request & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::GetMap2_Request>()
{
  return "rtabmap_msgs::srv::GetMap2_Request";
}

template<>
inline const char * name<rtabmap_msgs::srv::GetMap2_Request>()
{
  return "rtabmap_msgs/srv/GetMap2_Request";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::GetMap2_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::GetMap2_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rtabmap_msgs::srv::GetMap2_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'data'
#include "rtabmap_msgs/msg/detail/map_data__traits.hpp"

namespace rtabmap_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMap2_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMap2_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMap2_Response & msg, bool use_flow_style = false)
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

}  // namespace rtabmap_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rtabmap_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rtabmap_msgs::srv::GetMap2_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rtabmap_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rtabmap_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rtabmap_msgs::srv::GetMap2_Response & msg)
{
  return rtabmap_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rtabmap_msgs::srv::GetMap2_Response>()
{
  return "rtabmap_msgs::srv::GetMap2_Response";
}

template<>
inline const char * name<rtabmap_msgs::srv::GetMap2_Response>()
{
  return "rtabmap_msgs/srv/GetMap2_Response";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::GetMap2_Response>
  : std::integral_constant<bool, has_fixed_size<rtabmap_msgs::msg::MapData>::value> {};

template<>
struct has_bounded_size<rtabmap_msgs::srv::GetMap2_Response>
  : std::integral_constant<bool, has_bounded_size<rtabmap_msgs::msg::MapData>::value> {};

template<>
struct is_message<rtabmap_msgs::srv::GetMap2_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rtabmap_msgs::srv::GetMap2>()
{
  return "rtabmap_msgs::srv::GetMap2";
}

template<>
inline const char * name<rtabmap_msgs::srv::GetMap2>()
{
  return "rtabmap_msgs/srv/GetMap2";
}

template<>
struct has_fixed_size<rtabmap_msgs::srv::GetMap2>
  : std::integral_constant<
    bool,
    has_fixed_size<rtabmap_msgs::srv::GetMap2_Request>::value &&
    has_fixed_size<rtabmap_msgs::srv::GetMap2_Response>::value
  >
{
};

template<>
struct has_bounded_size<rtabmap_msgs::srv::GetMap2>
  : std::integral_constant<
    bool,
    has_bounded_size<rtabmap_msgs::srv::GetMap2_Request>::value &&
    has_bounded_size<rtabmap_msgs::srv::GetMap2_Response>::value
  >
{
};

template<>
struct is_service<rtabmap_msgs::srv::GetMap2>
  : std::true_type
{
};

template<>
struct is_service_request<rtabmap_msgs::srv::GetMap2_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rtabmap_msgs::srv::GetMap2_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RTABMAP_MSGS__SRV__DETAIL__GET_MAP2__TRAITS_HPP_
