#ifndef SWAY_GAPI_BUFFERUSAGES_H
#define SWAY_GAPI_BUFFERUSAGES_H

#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class BufferUsage_t : u8_t {
	kNone,
	kStatic,
	kDynamic,
	kStream
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_BUFFERUSAGES_H
