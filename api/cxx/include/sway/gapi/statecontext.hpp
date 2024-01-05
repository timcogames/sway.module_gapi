#ifndef SWAY_GAPI_STATECONTEXT_HPP
#define SWAY_GAPI_STATECONTEXT_HPP

#include <sway/core.hpp>
#include <sway/gapi/blendfunctions.hpp>
#include <sway/gapi/comparefunctions.hpp>
#include <sway/gapi/statecapabilities.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class StateContext {
public:
  DFLT_DTOR_VIRTUAL(StateContext);

  PURE_VIRTUAL(void setCapabilityEnable(StateCapability cap, bool enable));

  PURE_VIRTUAL(void setDepthEnable(bool enable));

  PURE_VIRTUAL(void setDepthMask(bool enable));

  PURE_VIRTUAL(void setDepthFunc(BlendFn func));

  PURE_VIRTUAL(void setStencilEnable(bool enable));

  PURE_VIRTUAL(void setStencilMask(u32_t mask));

  PURE_VIRTUAL(void setStencilFunc(CompareFn func, s32_t ref, u32_t mask));
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_STATECONTEXT_HPP
