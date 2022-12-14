#ifndef SWAY_GAPI_TYPEDEFS_HPP
#define SWAY_GAPI_TYPEDEFS_HPP

#include <sway/math/matrix4.hpp>
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

using ShaderObjectIdSet_t = std::set<u32_t>;
using ExtensionInitList_t = std::initializer_list<std::pair<lpcstr_t, lpcstr_t>>;

using CapabilityRef_t = std::shared_ptr<class ICapabilityBase>;
using ShaderRef_t = std::shared_ptr<class Shader>;
using ShaderProgramRef_t = std::shared_ptr<class ShaderProgramBase>;
using TextureRef_t = std::shared_ptr<class TextureBase>;
using BufferIdQueueRef_t = std::shared_ptr<class BufferIdQueue>;
using BufferRef_t = std::shared_ptr<class Buffer>;
using VertexAttribLayoutPtr_t = std::shared_ptr<class VertexAttribLayout>;
using ViewportRef_t = std::shared_ptr<class IViewportBase>;
using DrawCallRef_t = std::shared_ptr<class IDrawCallBase>;

using DrawCbFunc_t = std::function<void(BufferRef_t)>;

using UniformVec4fUmap_t = std::unordered_map<std::string, math::vec4f_t>;
using UniformMat4fUmap_t = std::unordered_map<std::string, math::mat4f_t>;
using VertexAttribDescUmap_t = std::unordered_map<std::string, struct VertexAttributeDescriptor>;

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TYPEDEFS_HPP
