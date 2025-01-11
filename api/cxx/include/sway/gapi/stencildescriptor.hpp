#ifndef SWAY_GAPI_STENCILDESCRIPTOR_HPP
#define SWAY_GAPI_STENCILDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/stencilfacedescriptor.hpp>

namespace sway::gapi {

struct StencilDescriptor {
  bool enabled;
  StencilFaceDescriptor front;
  StencilFaceDescriptor back;
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_STENCILDESCRIPTOR_HPP
