#ifndef SWAY_GAPI_TYPEDEFS_H
#define SWAY_GAPI_TYPEDEFS_H

#include <sway/math/vector4.h>
#include <sway/namespacemacros.h>
#include <sway/types.h>

#include <string.h> // std::string
#include <set> // std::set
#include <initializer_list> // std::initializer_list
#include <utility> // std::pair

#include <boost/shared_ptr.hpp> // boost::shared_ptr
#include <boost/unordered_map.hpp> // boost::unordered_map

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

typedef std::set<u32_t> ShaderObjectIdSet_t;
typedef std::initializer_list<std::pair<lpcstr_t, lpcstr_t>> ExtensionInitList_t;

typedef boost::shared_ptr<class AShader> ShaderRef_t;
typedef boost::shared_ptr<class AShaderProgram> ShaderProgramRef_t;
typedef boost::shared_ptr<class ABuffer> BufferRef_t;
typedef boost::shared_ptr<class IVertexLayout> VertexLayoutRef_t;

typedef boost::unordered_map<std::string, math::vec4f_t> UniformVec4fUmap_t;
typedef boost::unordered_map<std::string, struct VertexAttributeDescriptor> VertexAttribDescUmap_t;

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_TYPEDEFS_H
