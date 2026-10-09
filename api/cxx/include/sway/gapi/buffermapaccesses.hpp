#ifndef SWAY_GAPI_BUFFERMAPACCESSES_HPP
#define SWAY_GAPI_BUFFERMAPACCESSES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define BUFFER_MAP_ACCESS_LIST(ITEM) \
  ITEM(READ, 1) \
  ITEM(WRITE, 2) \
  ITEM(READ_WRITE, 3)
// clang-format on

DECLARE_ENUM_U32(BufferMapAccess, BUFFER_MAP_ACCESS_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_BUFFERMAPACCESSES_HPP
