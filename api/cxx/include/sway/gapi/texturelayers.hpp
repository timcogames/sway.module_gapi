#ifndef SWAY_GAPI_TEXTURELAYERS_HPP
#define SWAY_GAPI_TEXTURELAYERS_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

// clang-format off
enum class TextureLayer : u32_t {
  UNDEF,
  DIFFUSE,
  SPECULAR,
  EMISSIVE,
  NORMAL,
  Latest
};
// clang-format on

#define NUM_TEXTURE_LAYERS (core::detail::toUnderlying(TextureLayer::Latest))

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTURELAYERS_HPP
