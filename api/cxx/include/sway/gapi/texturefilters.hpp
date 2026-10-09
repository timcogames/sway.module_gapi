#ifndef SWAY_GAPI_TEXTUREFILTERS_HPP
#define SWAY_GAPI_TEXTUREFILTERS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define TEXTURE_FILTER_LIST(ITEM) \
  ITEM(NEAREST, 1) \
  ITEM(NEAREST_MIPMAP_NEAREST, 2) \
  ITEM(NEAREST_MIPMAP_LINEAR, 3) \
  ITEM(LINEAR, 4) \
  ITEM(LINEAR_MIPMAP_NEAREST, 5) \
  ITEM(LINEAR_MIPMAP_LINEAR, 6)
// clang-format on

DECLARE_ENUM_U32(TextureFilter, TEXTURE_FILTER_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_TEXTUREFILTERS_HPP
