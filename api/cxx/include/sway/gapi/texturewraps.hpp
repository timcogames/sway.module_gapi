#ifndef SWAY_GAPI_TEXTUREWRAPS_HPP
#define SWAY_GAPI_TEXTUREWRAPS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

// clang-format off
enum class TextureWrap : u32_t {
  REPEAT,
  CLAMP
};
// clang-format on

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTUREWRAPS_HPP
