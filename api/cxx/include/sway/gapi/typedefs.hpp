#ifndef SWAY_GAPI_TYPEDEFS_HPP
#define SWAY_GAPI_TYPEDEFS_HPP

#include <sway/core.hpp>
#include <sway/math.hpp>

#include <functional>  // std::function
#include <initializer_list>
#include <optional>
#include <queue>
#include <set>
#include <string.h>
#include <unordered_map>
#include <utility>  // std::pair
#include <vector>

namespace sway::gapi {

using ExtensionInitList_t = std::initializer_list<std::pair<lpcstr_t, lpcstr_t>>;

class Capability;
class Shader;
class ShaderProgram;
class ShaderPreprocessor;
class Texture;
class TextureSampler;
class RenderBuffer;
class FrameBuffer;
class IdGenerator;
class Buffer;
class VertexArray;
class VertexAttribLayout;
class Viewport;
class DrawCall;
class StateContext;
class Uniform;

namespace typedefs {
using CapabilityPtr_t = Capability *;
using ShaderPtr_t = Shader *;
using ShaderProgramPtr_t = ShaderProgram *;
using ShaderPreprocessorPtr_t = ShaderPreprocessor *;
using TexturePtr_t = Texture *;
using TextureSamplerPtr_t = TextureSampler *;
using RenderBufferPtr_t = RenderBuffer *;
using FrameBufferPtr_t = FrameBuffer *;
using IdGeneratorPtr_t = IdGenerator *;
using BufferPtr_t = Buffer *;
using VertexArrayPtr_t = VertexArray *;
using VertexAttribLayoutPtr_t = VertexAttribLayout *;
using ViewportPtr_t = Viewport *;
using DrawCallPtr_t = DrawCall *;
using StateContextPtr_t = StateContext *;
using UniformPtr_t = Uniform *;
}  // namespace typedefs

using ObjectUid_t = u32_t;
using ObjectUidOpt_t = std::optional<ObjectUid_t>;
using ObjectUidVec_t = std::vector<ObjectUid_t>;
using ObjectUidDeque_t = std::deque<ObjectUid_t>;
using ObjectUidQueue_t = std::queue<ObjectUid_t, ObjectUidDeque_t>;

using DrawCbFunc_t = std::function<void(typedefs::BufferPtr_t)>;

using UniformVec4fUmap_t = std::unordered_map<std::string, math::vec4f_t>;
using UniformMat4fUmap_t = std::unordered_map<std::string, math::mat4f_t>;
using Uniform1iUmap_t = std::unordered_map<std::string, i32_t>;
using Uniform1fUmap_t = std::unordered_map<std::string, f32_t>;

using VertexAttribDescUmap_t = std::unordered_map<std::string, struct VertexAttribDescriptor>;

}  // namespace sway::gapi

#endif  // SWAY_GAPI_TYPEDEFS_HPP
