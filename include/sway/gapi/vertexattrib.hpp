#ifndef SWAY_GAPI_VERTEXATTRIB_HPP
#define SWAY_GAPI_VERTEXATTRIB_HPP

#include <sway/gapi/vertexattribdescriptor.hpp>
#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class VertexAttrib {
public:
  PURE_VIRTUAL(void importRawdata(void *data, s32_t offset, s32_t vtx));

  // TODO: temp
  PURE_VIRTUAL(void importRawdata2(void *data, s32_t offset, float *vertices));

  // clang-format off
  PURE_VIRTUAL(auto getComponent(u32_t idx) const -> void *);  // clang-format on

  // clang-format off
  PURE_VIRTUAL(auto getDescriptor() -> VertexAttribDescriptor);  // clang-format on

  PURE_VIRTUAL(void use());

  // clang-format off
  PURE_VIRTUAL(auto getCapacity() -> s32_t);  // clang-format on

  // clang-format off
  PURE_VIRTUAL(auto isEnabled() const -> bool);  // clang-format on
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_VERTEXATTRIB_HPP
