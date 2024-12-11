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

  PURE_VIRTUAL(auto getComponent(u32_t idx) const -> void *);

  PURE_VIRTUAL(auto getDescriptor() -> VertexAttribDescriptor);

  PURE_VIRTUAL(void use());

  PURE_VIRTUAL(auto getCapacity() -> i32_t);

  PURE_VIRTUAL(auto isEnabled() const -> bool);
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_VERTEXATTRIB_HPP
