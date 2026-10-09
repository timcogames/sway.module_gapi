#ifndef SWAY_GAPI_PIXELSTORAGEMODES_HPP
#define SWAY_GAPI_PIXELSTORAGEMODES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define PIXEL_STORAGE_MODE_LIST(ITEM) \
  ITEM(UNPACK_ALIGNMENT, 1) \
  ITEM(UNPACK_ROW_LENGTH, 2)
// clang-format on

DECLARE_ENUM_U32(PixelStorageMode, PIXEL_STORAGE_MODE_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_PIXELSTORAGEMODES_HPP
