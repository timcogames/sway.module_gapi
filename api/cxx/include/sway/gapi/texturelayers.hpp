#ifndef SWAY_GAPI_TEXTURELAYERS_HPP
#define SWAY_GAPI_TEXTURELAYERS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

// clang-format off
enum class TextureLayer : u32_t {
  DIFFUSE,
  SPECULAR,
  EMISSIVE,
  NORMAL,
  LATEST
};
// clang-format on

#define TEXTURE_LAYER_COUNT (core::detail::toUnderlying(TextureLayer::LATEST))

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTURELAYERS_HPP
