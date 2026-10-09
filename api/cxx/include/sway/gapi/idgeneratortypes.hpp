#ifndef SWAY_GAPI_IDGENERATORTYPES_HPP
#define SWAY_GAPI_IDGENERATORTYPES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

// clang-format off
#define ID_GENERATOR_TYPE_LIST(ITEM) \
  ITEM(BUFFER_OBJECT, 0) \
  ITEM(TEXTURE, 1) \
  ITEM(FRAME_BUFFER, 2) \
  ITEM(RENDER_BUFFER, 3)
// clang-format on

DECLARE_ENUM_IDX(IdGeneratorType, ID_GENERATOR_TYPE_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_IDGENERATORTYPES_HPP
