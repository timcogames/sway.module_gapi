#ifndef SWAY_GAPI_STATECONTEXT_HPP
#define SWAY_GAPI_STATECONTEXT_HPP

#include <sway/core.hpp>
#include <sway/gapi/blendfunctions.hpp>
#include <sway/gapi/comparefunctions.hpp>
#include <sway/gapi/polygonmodes.hpp>
#include <sway/gapi/statecapabilities.hpp>
#include <sway/gapi/stenciloperations.hpp>
#include <sway/gapi/typedefs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class StateContext {
  DECLARE_PTR_ALIASES(StateContext)

public:
#pragma region "Ctors/Dtor"

  DTOR_VIRTUAL_DEFAULT(StateContext);

#pragma endregion

  PURE_VIRTUAL(void setCapabilityEnable(StateCapability::Enum cap, bool enable));

  PURE_VIRTUAL(void setAlphaEnable(bool enable));

  PURE_VIRTUAL(void setAlphaFunc(CompareFn::Enum func, f32_t ref));

  PURE_VIRTUAL(void setBlendEnable(bool enable));

  PURE_VIRTUAL(void setBlendFn(BlendFn::Enum src, BlendFn::Enum dst));

  PURE_VIRTUAL(void setDepthEnable(bool enable));

  PURE_VIRTUAL(void setClearDepth(f64_t depth));

  PURE_VIRTUAL(void setDepthFn(CompareFn::Enum func));

  PURE_VIRTUAL(void setDepthMask(bool flag));

  PURE_VIRTUAL(void setColorMask(bool red, bool green, bool blue, bool alpha));

  PURE_VIRTUAL(void setStencilEnable(bool enable));

  PURE_VIRTUAL(void setClearStencil(i32_t idx));

  PURE_VIRTUAL(void setStencilMask(u32_t mask));

  PURE_VIRTUAL(void setStencilFn(CompareFn::Enum func, i32_t ref, u32_t mask));

  PURE_VIRTUAL(void setStencilOp(StencilOp::Enum fail, StencilOp::Enum depthFail, StencilOp::Enum depthPass));

  PURE_VIRTUAL(void setPolygonMode(PolygonMode::Enum mode));
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_STATECONTEXT_HPP
