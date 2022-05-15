#ifndef SWAY_GAPI_VIEWPORTMODES_HPP
#define SWAY_GAPI_VIEWPORTMODES_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/*!
 * \brief
 *    Перечисление поведения окна просмотра.
 */
enum class ViewportMode_t : u32_t { kEnabled, kDisabled, kRenderToTexture };

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
