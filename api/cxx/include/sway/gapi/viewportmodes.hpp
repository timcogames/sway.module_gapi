#ifndef SWAY_GAPI_VIEWPORTMODES_HPP
#define SWAY_GAPI_VIEWPORTMODES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

/**
 * @enum ViewportMode::Enum
 * \~russian @brief Перечисление поведения окна просмотра.
 */

// clang-format off
#define VIEWPORT_MODE_LIST(ITEM) \
  ITEM(ENABLED, 1) \
  ITEM(DISABLED, 2) \
  ITEM(RENDER_TO_TEXTURE, 3)
// clang-format on

DECLARE_ENUM_U32(ViewportMode, VIEWPORT_MODE_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_VIEWPORTMODES_HPP
