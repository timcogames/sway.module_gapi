#ifndef SWAY_GAPI_POLYGONMODES_HPP
#define SWAY_GAPI_POLYGONMODES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define PILYGON_MODE_LIST(ITEM) \
  ITEM(FILL, 1) \
  ITEM(LINE, 2)
// clang-format on

DECLARE_ENUM_U32(PolygonMode, PILYGON_MODE_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_POLYGONMODES_HPP
