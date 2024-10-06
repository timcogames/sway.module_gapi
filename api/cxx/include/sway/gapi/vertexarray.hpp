#ifndef SWAY_GAPI_VERTEXARRAY_HPP
#define SWAY_GAPI_VERTEXARRAY_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/gapi/vertexattribdescriptor.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class VertexArray {
  DECLARE_CLASS_POINTER_ALIASES(VertexArray)

public:
  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_VERTEXARRAY_HPP
