#ifndef SWAY_GAPI_STENCILDESCRIPTOR_HPP
#define SWAY_GAPI_STENCILDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/stencilfacedescriptor.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct StencilDescriptor {
  bool enabled;
  StencilFaceDescriptor front;
  StencilFaceDescriptor back;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_STENCILDESCRIPTOR_HPP
