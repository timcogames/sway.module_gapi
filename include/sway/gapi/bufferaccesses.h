#ifndef SWAY_GAPI_BUFFERACCESSES_H
#define SWAY_GAPI_BUFFERACCESSES_H

#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

enum class BufferAccess_t : u8_t {
	kNone,
	kRead,
	kWrite,
	kReadWrite
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_BUFFERACCESSES_H
