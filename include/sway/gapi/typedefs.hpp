#ifndef SWAY_GAPI_TYPEDEFS_HPP
#define SWAY_GAPI_TYPEDEFS_HPP

#include <sway/math/vector4.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

#include <functional>  // std::function
#include <initializer_list>  // std::initializer_list
#include <memory>  // std::shared_ptr
#include <set>  // std::set
#include <string.h>  // std::string
#include <unordered_map>  // std::unordered_map
#include <utility>  // std::pair

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

typedef std::set<u32_t> ShaderObjectIdSet_t;
typedef std::initializer_list<std::pair<lpcstr_t, lpcstr_t>> ExtensionInitList_t;

typedef std::shared_ptr<class ICapabilityBase> CapabilityRef_t;
typedef std::shared_ptr<class AShaderBase> ShaderRef_t;
typedef std::shared_ptr<class AShaderProgramBase> ShaderProgramRef_t;
typedef std::shared_ptr<class ATextureBase> TextureRef_t;
typedef std::shared_ptr<class ABufferBase> BufferRef_t;
typedef std::shared_ptr<class IVertexLayoutBase> VertexLayoutRef_t;
typedef std::shared_ptr<class IViewportBase> ViewportRef_t;
typedef std::shared_ptr<class IDrawCallBase> DrawCallRef_t;

typedef std::function<void(BufferRef_t)> DrawCbFunc_t;

typedef std::unordered_map<std::string, math::vec4f_t> UniformVec4fUmap_t;
typedef std::unordered_map<std::string, struct VertexAttributeDescriptor> VertexAttribDescUmap_t;

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TYPEDEFS_HPP
