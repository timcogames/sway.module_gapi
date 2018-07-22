#ifndef SWAY_GAPI_VERTEXATTRIBUTE_H
#define SWAY_GAPI_VERTEXATTRIBUTE_H

#include <sway/gapi/vertexattributedescriptor.h>
#include <sway/gapi/vertexsemantics.h>
#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class VertexAttribute {
public:
	template<typename TYPE>
	static VertexAttributeDescriptor merge(VertexSemantic_t semantic, bool normalized = false, bool enabled = true) {
		VertexAttributeDescriptor attrib;
		attrib.semantic = semantic;
		attrib.format = core::detail::TypeToEnum<typename TYPE::rawtype_t>::value;
		attrib.numComponents = TYPE::size();
		attrib.stride = sizeof(typename TYPE::rawtype_t) * TYPE::size();
		attrib.normalized = normalized;
		attrib.enabled = enabled;
		return attrib;
	}
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_VERTEXATTRIBUTE_H
