#ifndef SWAY_GAPI_BUFFERSET_HPP
#define SWAY_GAPI_BUFFERSET_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

struct BufferSet {
  VertexArrayPtr_t vao;
  BufferPtr_t vbo;
  BufferPtr_t ebo;
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_BUFFERSET_HPP
