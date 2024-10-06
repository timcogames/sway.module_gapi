#ifndef SWAY_GAPI_VERTEXATTRIB_HPP
#define SWAY_GAPI_VERTEXATTRIB_HPP

#include <sway/core.hpp>
#include <sway/gapi/vertexattribdescriptor.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class VertexAttrib {
public:
  PURE_VIRTUAL(void importRawdata(void *data, i32_t offset, i32_t vtx));

  // TODO: temp
  PURE_VIRTUAL(void importRawdata2(void *data, i32_t offset, void *vertices));

  // clang-format off
  PURE_VIRTUAL(auto getComponent(u32_t idx) const -> void *);  // clang-format on

  // clang-format off
  PURE_VIRTUAL(auto getDescriptor() -> VertexAttribDescriptor);  // clang-format on

  PURE_VIRTUAL(void use());

  // clang-format off
  PURE_VIRTUAL(auto getCapacity() -> i32_t);  // clang-format on

  // clang-format off
  PURE_VIRTUAL(auto isEnabled() const -> bool);  // clang-format on
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_VERTEXATTRIB_HPP
