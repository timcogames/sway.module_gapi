#ifndef SWAY_GAPI_BUFFERUSAGES_HPP
#define SWAY_GAPI_BUFFERUSAGES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define BUFFER_USAGE_LIST(ITEM) \
  ITEM(STATIC, 1) \
  ITEM(DYNAMIC, 2) \
  ITEM(STREAM, 3)
// clang-format on

DECLARE_ENUM_U32(BufferUsage, BUFFER_USAGE_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_BUFFERUSAGES_HPP
