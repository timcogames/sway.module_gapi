#ifndef SWAY_GAPI_BUFFERUSAGES_HPP
#define SWAY_GAPI_BUFFERUSAGES_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

// clang-format off
enum class BufferUsage : u32_t {
  STATIC,
  DYNAMIC,
  STREAM
};
// clang-format on

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERUSAGES_HPP
