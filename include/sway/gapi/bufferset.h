#ifndef SWAY_GAPI_BUFFERSET_H
#define SWAY_GAPI_BUFFERSET_H

#include <sway/gapi/typedefs.h>
#include <sway/namespacemacros.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct BufferSet {
	BufferRef_t vbo; /*!< Буфер вершин. */
	BufferRef_t ibo; /*!< Буфер индексов. */
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_BUFFERSET_H
