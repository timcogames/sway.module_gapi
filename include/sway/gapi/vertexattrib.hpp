#ifndef SWAY_GAPI_VERTEXATTRIB_HPP
#define SWAY_GAPI_VERTEXATTRIB_HPP

#include <sway/gapi/vertexattribdescriptor.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class VertexAttrib {
public:
  // clang-format off
  PURE_VIRTUAL(auto getDescriptor() -> VertexAttribDescriptor);  // clang-format on

  // clang-format off
  PURE_VIRTUAL(auto getData(u32_t idx) const -> void *);  // clang-format on
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_VERTEXATTRIB_HPP
