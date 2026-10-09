#ifndef SWAY_GAPI_BUFFERTARGETS_HPP
#define SWAY_GAPI_BUFFERTARGETS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define BUFFER_TARGET_LIST(ITEM) \
  ITEM(ARRAY, 1) \
  ITEM(ELEMENT_ARRAY, 2) \
  ITEM(UNIFORM, 3) \
  ITEM(TEXTURE, 4)
// clang-format on

DECLARE_ENUM_U32(BufferTarget, BUFFER_TARGET_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_BUFFERTARGETS_HPP
