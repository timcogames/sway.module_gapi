#ifndef SWAY_GAPI_BUFFERDESCRIPTION_H
#define SWAY_GAPI_BUFFERDESCRIPTION_H

#include <sway/gapi/buffertargets.h>
#include <sway/gapi/bufferusages.h>
#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct BufferDescription {
	BufferTarget_t target;
	BufferUsage_t usage;
	s32_t byteStride;
	s32_t capacity; /*!< Количество элементов в массиве. */
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_BUFFERDESCRIPTION_H
