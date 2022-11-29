#ifndef SWAY_GAPI_BUFFERSET_HPP
#define SWAY_GAPI_BUFFERSET_HPP

#include <sway/gapi/typedefs.hpp>
#include <sway/namespacemacros.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct BufferSet {
  BufferRef_t vbo; /*!< Буфер вершин. */
  BufferRef_t ibo; /*!< Буфер индексов. */
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERSET_HPP
