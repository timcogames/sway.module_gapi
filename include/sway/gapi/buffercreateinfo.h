#ifndef SWAY_GAPI_BUFFERCREATEINFO_H
#define SWAY_GAPI_BUFFERCREATEINFO_H

#include <sway/gapi/bufferdescription.h>
#include <sway/namespacemacros.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct BufferCreateInfo {
	BufferDescription desc;
	const void * data; /*!< Первоначальный данные. */
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_BUFFERCREATEINFO_H
