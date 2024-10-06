#ifndef SWAY_GAPI_STENCILDESCRIPTOR_HPP
#define SWAY_GAPI_STENCILDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/stencilfacedescriptor.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

struct StencilDescriptor {
  bool enabled;
  StencilFaceDescriptor front;
  StencilFaceDescriptor back;
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_STENCILDESCRIPTOR_HPP
