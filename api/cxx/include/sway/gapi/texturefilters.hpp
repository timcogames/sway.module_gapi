#ifndef SWAY_GAPI_TEXTUREFILTERS_HPP
#define SWAY_GAPI_TEXTUREFILTERS_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

// clang-format off
DECLARE_ENUM(TextureFilter,
  NEAREST,
  NEAREST_MIPMAP_NEAREST,
  NEAREST_MIPMAP_LINEAR,
  LINEAR,
  LINEAR_MIPMAP_NEAREST,
  LINEAR_MIPMAP_LINEAR
);
// clang-format on

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_TEXTUREFILTERS_HPP
