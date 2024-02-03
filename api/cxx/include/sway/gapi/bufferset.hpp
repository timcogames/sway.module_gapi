#ifndef SWAY_GAPI_BUFFERSET_HPP
#define SWAY_GAPI_BUFFERSET_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct BufferSet {
  VertexArrayPtr_t vao;
  BufferPtr_t vbo;
  BufferPtr_t ebo;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_BUFFERSET_HPP
