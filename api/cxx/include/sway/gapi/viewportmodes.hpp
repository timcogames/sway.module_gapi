#ifndef SWAY_GAPI_VIEWPORTMODES_HPP
#define SWAY_GAPI_VIEWPORTMODES_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Перечисление поведения окна просмотра.
 */
// clang-format off
enum class ViewportMode : u32_t {
  UNDEF,
  ENABLED,
  DISABLED,
  RENDER_TO_TEXTURE
};
// clang-format on

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_VIEWPORTMODES_HPP
