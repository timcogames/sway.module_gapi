#ifndef SWAY_GAPI_VERTEXARRAY_HPP
#define SWAY_GAPI_VERTEXARRAY_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/gapi/vertexattribdescriptor.hpp>

namespace sway::gapi {

class VertexArray {
public:
  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_VERTEXARRAY_HPP
