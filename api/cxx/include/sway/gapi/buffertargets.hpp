#ifndef SWAY_GAPI_BUFFERTARGETS_HPP
#define SWAY_GAPI_BUFFERTARGETS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

// clang-format off
enum class BufferTarget : u32_t {
  ARRAY,
  ELEMENT_ARRAY,
  UNIFORM,
  TEXTURE
};
// clang-format on

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERTARGETS_HPP
