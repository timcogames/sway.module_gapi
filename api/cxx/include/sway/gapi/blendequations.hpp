#ifndef SWAY_GAPI_BLENDEQUATIONS_HPP
#define SWAY_GAPI_BLENDEQUATIONS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

// clang-format off
enum class BlendEquation : u32_t {
  UNDEF,
  ADD,
  SUBTRACT,
  REVERSE_SUBTRACT,
  MIN,
  MAX
};
// clang-format on

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BLENDEQUATIONS_HPP
