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

using CapabilityRef_t = std::shared_ptr<class Capability>;
using ShaderRef_t = std::shared_ptr<class Shader>;
using ShaderProgramRef_t = std::shared_ptr<class ShaderProgram>;
using TextureRef_t = std::shared_ptr<class Texture>;
using TextureSamplerRef_t = std::shared_ptr<class TextureSampler>;
using IdGeneratorRef_t = std::shared_ptr<class IdGenerator>;
using BufferRef_t = std::shared_ptr<class Buffer>;
using VertexArrayPtr_t = std::shared_ptr<class VertexArray>;
using VertexAttribLayoutPtr_t = std::shared_ptr<class VertexAttribLayout>;
using ViewportRef_t = std::shared_ptr<class Viewport>;
using DrawCallRef_t = std::shared_ptr<class DrawCall>;
using StateRef_t = std::shared_ptr<class State>;
using UniformRef_t = std::shared_ptr<struct Uniform>;

using DrawCbFunc_t = std::function<void(BufferRef_t)>;

using UniformVec4fUmap_t = std::unordered_map<std::string, math::vec4f_t>;
using UniformMat4fUmap_t = std::unordered_map<std::string, math::mat4f_t>;
using Uniform1iUmap_t = std::unordered_map<std::string, s32_t>;
using Uniform1fUmap_t = std::unordered_map<std::string, f32_t>;

using VertexAttribDescUmap_t = std::unordered_map<std::string, struct VertexAttribDescriptor>;

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TYPEDEFS_HPP
