#ifndef SWAY_GAPI_STATE_HPP
#define SWAY_GAPI_STATE_HPP

#include <sway/core.hpp>
#include <sway/gapi/rasterizerdescriptor.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class State {
public:
  DFLT_DTOR_VIRTUAL(State);

  PURE_VIRTUAL(void bindRasterizerState(const RasterizerDescriptor &desc));
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_STATE_HPP
