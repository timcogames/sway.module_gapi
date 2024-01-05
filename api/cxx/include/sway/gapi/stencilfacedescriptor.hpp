#ifndef SWAY_GAPI_STENCILFACEDESCRIPTOR_HPP
#define SWAY_GAPI_STENCILFACEDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/comparefunctions.hpp>
#include <sway/gapi/stenciloperations.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct StencilFaceDescriptor {
  gapi::CompareFn func;
  gapi::StencilOp fail;
  gapi::StencilOp depthFail;
  gapi::StencilOp depthPass;
  u32_t reference;
  u32_t rmask;
  u32_t wmask;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_STENCILFACEDESCRIPTOR_HPP
