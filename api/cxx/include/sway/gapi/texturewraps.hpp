#ifndef SWAY_GAPI_TEXTUREWRAPS_HPP
#define SWAY_GAPI_TEXTUREWRAPS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define TEXTURE_WRAP_LIST(ITEM) \
  ITEM(REPEAT, 1) \
  ITEM(CLAMP, 2)
// clang-format on

DECLARE_ENUM_U32(TextureWrap, TEXTURE_WRAP_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_TEXTUREWRAPS_HPP
