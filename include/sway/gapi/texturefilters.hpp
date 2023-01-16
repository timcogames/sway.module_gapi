#ifndef SWAY_GAPI_TEXTUREFILTERS_HPP
#define SWAY_GAPI_TEXTUREFILTERS_HPP

#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class TextureFilter : u32_t {
  NEAREST,
  NEAREST_MIPMAP_NEAREST,
  NEAREST_MIPMAP_LINEAR,
  LINEAR,
  LINEAR_MIPMAP_NEAREST,
  LINEAR_MIPMAP_LINEAR
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TEXTUREFILTERS_HPP
