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

using CapabilityPtr_t = class Capability *;
using ShaderPtr_t = class Shader *;
using ShaderProgramPtr_t = class ShaderProgram *;
using TexturePtr_t = class Texture *;
using TextureSamplerPtr_t = class TextureSampler *;
using RenderbufferPtr_t = class Renderbuffer *;
using FramebufferPtr_t = class Framebuffer *;
using IdGeneratorPtr_t = class IdGenerator *;
using VertexArrayPtr_t = class VertexArray *;
using BufferPtr_t = class Buffer *;
using VertexAttribLayoutPtr_t = class VertexAttribLayout *;
using ViewportPtr_t = class Viewport *;
using DrawCallPtr_t = class DrawCall *;
using StateContextPtr_t = class StateContext *;
using UniformPtr_t = struct Uniform *;

using DrawCbFunc_t = std::function<void(BufferPtr_t)>;

using UniformVec4fUmap_t = std::unordered_map<std::string, math::vec4f_t>;
using UniformMat4fUmap_t = std::unordered_map<std::string, math::mat4f_t>;
using Uniform1iUmap_t = std::unordered_map<std::string, s32_t>;
using Uniform1fUmap_t = std::unordered_map<std::string, f32_t>;

using VertexAttribDescUmap_t = std::unordered_map<std::string, struct VertexAttribDescriptor>;

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TYPEDEFS_HPP
