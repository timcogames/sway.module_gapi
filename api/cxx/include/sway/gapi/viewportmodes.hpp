#ifndef SWAY_GAPI_VIEWPORTMODES_HPP
#define SWAY_GAPI_VIEWPORTMODES_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

/**
 * @enum ViewportMode::Enum
 * @brief Перечисление поведения окна просмотра.
 */

DECLARE_ENUM(ViewportMode, ENABLED, DISABLED, RENDER_TO_TEXTURE);

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_VIEWPORTMODES_HPP
