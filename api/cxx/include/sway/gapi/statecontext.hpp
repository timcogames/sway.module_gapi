#ifndef SWAY_GAPI_STATECONTEXT_HPP
#define SWAY_GAPI_STATECONTEXT_HPP

#include <sway/core.hpp>
#include <sway/gapi/blendfunctions.hpp>
#include <sway/gapi/comparefunctions.hpp>
#include <sway/gapi/polygonmodes.hpp>
#include <sway/gapi/statecapabilities.hpp>
#include <sway/gapi/stenciloperations.hpp>
#include <sway/gapi/typedefs.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class StateContext {
  DECLARE_CLASS_POINTER_ALIASES(StateContext)

public:
  virtual ~StateContext() = default;

  PURE_VIRTUAL(void setCapabilityEnable(StateCapability cap, bool enable));

  PURE_VIRTUAL(void setBlendEnable(bool enable));

  PURE_VIRTUAL(void setBlendFn(BlendFn src, BlendFn dst));

  PURE_VIRTUAL(void setDepthEnable(bool enable));

  PURE_VIRTUAL(void setDepthFn(CompareFn func));

  PURE_VIRTUAL(void setDepthMask(bool flag));

  PURE_VIRTUAL(void setColorMask(bool red, bool green, bool blue, bool alpha));

  PURE_VIRTUAL(void setStencilEnable(bool enable));

  PURE_VIRTUAL(void setStencilMask(u32_t mask));

  PURE_VIRTUAL(void setStencilFn(CompareFn func, i32_t ref, u32_t mask));

  PURE_VIRTUAL(void setStencilOp(StencilOp fail, StencilOp depthFail, StencilOp depthPass));

  PURE_VIRTUAL(void setPolygonMode(PolygonMode mode));
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_STATECONTEXT_HPP
