#ifndef SWAY_GAPI_VERTEXATTRIBUTE_HPP
#define SWAY_GAPI_VERTEXATTRIBUTE_HPP

#include <sway/gapi/vertexattributedescriptor.hpp>
#include <sway/gapi/vertexsemantics.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class VertexAttribute {
public:
  template <typename TYPE>
  static VertexAttributeDescriptor merge(VertexSemantic_t semantic, bool normalized = false, bool enabled = true) {
    VertexAttributeDescriptor attrib;
    attrib.semantic = semantic;
    attrib.format = core::detail::DataTypeToEnum<typename TYPE::type_t>::value;
    attrib.numComponents = TYPE::size;
    attrib.stride = sizeof(typename TYPE::type_t) * TYPE::size;
    attrib.normalized = normalized;
    attrib.enabled = enabled;
    return attrib;
  }
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
