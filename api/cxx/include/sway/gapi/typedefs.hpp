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

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

using ExtensionInitList_t = std::initializer_list<std::pair<lpcstr_t, lpcstr_t>>;

DECLARE_CLASS_POINTER_TYPES(Capability)
DECLARE_CLASS_POINTER_TYPES(Shader)
DECLARE_CLASS_POINTER_TYPES(ShaderProgram)
DECLARE_CLASS_POINTER_TYPES(ShaderPreprocessor)
DECLARE_CLASS_POINTER_TYPES(Texture)
DECLARE_CLASS_POINTER_TYPES(TextureSampler)
DECLARE_CLASS_POINTER_TYPES(RenderBuffer)
DECLARE_CLASS_POINTER_TYPES(FrameBuffer)
DECLARE_CLASS_POINTER_TYPES(IdGenerator)
DECLARE_CLASS_POINTER_TYPES(VertexArray)
DECLARE_CLASS_POINTER_TYPES(Buffer)
DECLARE_CLASS_POINTER_TYPES(VertexAttribLayout)
DECLARE_CLASS_POINTER_TYPES(Viewport)
DECLARE_CLASS_POINTER_TYPES(DrawCall)
DECLARE_CLASS_POINTER_TYPES(StateContext)
DECLARE_CLASS_POINTER_TYPES(Uniform)

using ObjectUid_t = u32_t;
using ObjectUidOpt_t = std::optional<ObjectUid_t>;
using ObjectUidVec_t = std::vector<ObjectUid_t>;
using ObjectUidDeque_t = std::deque<ObjectUid_t>;
using ObjectUidQueue_t = std::queue<ObjectUid_t, ObjectUidDeque_t>;

using DrawCbFunc_t = std::function<void(BufferPtr_t)>;

using UniformVec4fUmap_t = std::unordered_map<std::string, math::vec4f_t>;
using UniformMat4fUmap_t = std::unordered_map<std::string, math::mat4f_t>;
using Uniform1iUmap_t = std::unordered_map<std::string, i32_t>;
using Uniform1fUmap_t = std::unordered_map<std::string, f32_t>;

using VertexAttribDescUmap_t = std::unordered_map<std::string, struct VertexAttribDescriptor>;

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_TYPEDEFS_HPP
