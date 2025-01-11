#ifndef SWAY_GAPI_BUFFERSET_HPP
#define SWAY_GAPI_BUFFERSET_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>

namespace sway::gapi {

struct BufferSet {
  typedefs::VertexArrayPtr_t vao;
  typedefs::BufferPtr_t vbo;
  typedefs::BufferPtr_t ebo;
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_BUFFERSET_HPP
