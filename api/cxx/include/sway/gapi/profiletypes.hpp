#ifndef SWAY_GAPI_PROFILETYPES_HPP
#define SWAY_GAPI_PROFILETYPES_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

// clang-format off
enum class ProfileType : u32_t {
  UNDEF,
  CORE,
  COMPATIBILITY
};
// clang-format on

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_PROFILETYPES_HPP
