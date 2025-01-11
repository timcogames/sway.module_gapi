#ifndef SWAY_GAPI_STENCILFACEDESCRIPTOR_HPP
#define SWAY_GAPI_STENCILFACEDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/comparefunctions.hpp>
#include <sway/gapi/stenciloperations.hpp>

namespace sway::gapi {

struct StencilFaceDescriptor {
  gapi::CompareFn::Enum func;
  gapi::StencilOp::Enum fail;
  gapi::StencilOp::Enum depthFail;
  gapi::StencilOp::Enum depthPass;
  u32_t reference;
  u32_t rmask;
  u32_t wmask;
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_STENCILFACEDESCRIPTOR_HPP
