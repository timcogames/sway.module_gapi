#ifndef SWAY_GAPI_TEXTURETARGETS_HPP
#define SWAY_GAPI_TEXTURETARGETS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define TEXTURE_TARGET_LIST(ITEM) \
  ITEM(TEX_2D, 1) \
  ITEM(TEX_2D_ARRAY, 2) \
  ITEM(MULTISAMPLE, 3) \
  ITEM(MULTISAMPLE_ARRAY, 4) \
  ITEM(RECT, 5) \
  ITEM(CUBE_MAP, 6)
// clang-format on

DECLARE_ENUM_U32(TextureTarget, TEXTURE_TARGET_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_TEXTURETARGETS_HPP
