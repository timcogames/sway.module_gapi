#ifndef SWAY_GAPI_VIEWPORTMODES_HPP
#define SWAY_GAPI_VIEWPORTMODES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

/**
 * @enum ViewportMode::Enum
 * \~russian @brief Перечисление поведения окна просмотра.
 */

DECLARE_ENUM(ViewportMode, ENABLED, DISABLED, RENDER_TO_TEXTURE);

}  // namespace sway::gapi

#endif  // SWAY_GAPI_VIEWPORTMODES_HPP
