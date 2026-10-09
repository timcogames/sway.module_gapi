#ifndef SWAY_GAPI_FRONTFACES_HPP
#define SWAY_GAPI_FRONTFACES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define FRONT_FACE_LIST(ITEM) \
  ITEM(CLOCK_WISE, 1) \
  ITEM(COUNTER_CLOCK_WISE, 2)
// clang-format on

DECLARE_ENUM_U32(FrontFace, FRONT_FACE_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_FRONTFACES_HPP
