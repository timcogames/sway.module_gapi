#ifndef SWAY_GAPI_BUFFERTARGETS_H
#define SWAY_GAPI_BUFFERTARGETS_H

#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class BufferTarget_t : u32_t {
	kNone,
	kArray,
	kElementArray,
	kUniform,
	kTexture
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_BUFFERTARGETS_H
