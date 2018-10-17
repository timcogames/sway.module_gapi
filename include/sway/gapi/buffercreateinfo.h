#ifndef SWAY_GAPI_BUFFERCREATEINFO_H
#define SWAY_GAPI_BUFFERCREATEINFO_H

#include <sway/gapi/bufferdescriptor.h>
#include <sway/namespacemacros.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct BufferCreateInfo {
	BufferDescriptor desc;
	const void * data; /*!< Первоначальный данные. */
};

struct BufferCreateInfoSet {
	BufferCreateInfo vb;
	BufferCreateInfo ib;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_BUFFERCREATEINFO_H
