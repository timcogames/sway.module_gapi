#ifndef SWAY_GAPI_TEXTUREFILTERS_HPP
#define SWAY_GAPI_TEXTUREFILTERS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

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

}  // namespace sway::gapi

#endif  // SWAY_GAPI_TEXTUREFILTERS_HPP
