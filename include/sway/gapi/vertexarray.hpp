#ifndef SWAY_GAPI_VERTEXARRAY_HPP
#define SWAY_GAPI_VERTEXARRAY_HPP

#include <sway/gapi/vertexattribdescriptor.hpp>
#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class VertexArray {
public:
  PURE_VIRTUAL(void bind());

  PURE_VIRTUAL(void unbind());
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_VERTEXARRAY_HPP
