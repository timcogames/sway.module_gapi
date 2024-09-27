#ifndef SWAY_GAPI_TYPEDEFS_HPP
#define SWAY_GAPI_TYPEDEFS_HPP

#include <sway/core.hpp>
#include <sway/math.hpp>

#include <functional>  // std::function
#include <initializer_list>  // std::initializer_list
#include <memory>  // std::shared_ptr
#include <set>  // std::set
#include <string.h>  // std::string
#include <unordered_map>  // std::unordered_map
#include <utility>  // std::pair

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

using ExtensionInitList_t = std::initializer_list<std::pair<lpcstr_t, lpcstr_t>>;

DECLARE_CLASS_POINTER_TYPES(Capability)
DECLARE_CLASS_POINTER_TYPES(Shader)
DECLARE_CLASS_POINTER_TYPES(ShaderProgram)
DECLARE_CLASS_POINTER_TYPES(Texture)
DECLARE_CLASS_POINTER_TYPES(TextureSampler)
DECLARE_CLASS_POINTER_TYPES(RenderBuffer)
DECLARE_CLASS_POINTER_TYPES(Framebuffer)
DECLARE_CLASS_POINTER_TYPES(IdGenerator)
DECLARE_CLASS_POINTER_TYPES(VertexArray)
DECLARE_CLASS_POINTER_TYPES(Buffer)
DECLARE_CLASS_POINTER_TYPES(VertexAttribLayout)
DECLARE_CLASS_POINTER_TYPES(Viewport)
DECLARE_CLASS_POINTER_TYPES(DrawCall)
DECLARE_CLASS_POINTER_TYPES(StateContext)
DECLARE_CLASS_POINTER_TYPES(Uniform)

using DrawCbFunc_t = std::function<void(BufferPtr_t)>;

using UniformVec4fUmap_t = std::unordered_map<std::string, math::vec4f_t>;
using UniformMat4fUmap_t = std::unordered_map<std::string, math::mat4f_t>;
using Uniform1iUmap_t = std::unordered_map<std::string, i32_t>;
using Uniform1fUmap_t = std::unordered_map<std::string, f32_t>;

using VertexAttribDescUmap_t = std::unordered_map<std::string, struct VertexAttribDescriptor>;

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TYPEDEFS_HPP
