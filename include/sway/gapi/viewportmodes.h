#ifndef SWAY_GAPI_VIEWPORTMODES_H
#define SWAY_GAPI_VIEWPORTMODES_H

#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/*!
 * \brief
 *    Перечисление поведения окна просмотра.
 */
enum class ViewportMode_t : u32_t {
	kEnabled,
	kDisabled,
	kRenderToTexture
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_VIEWPORTMODES_H
