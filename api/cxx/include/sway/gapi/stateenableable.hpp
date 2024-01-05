#ifndef SWAY_GAPI_STATEENABLEABLE_HPP
#define SWAY_GAPI_STATEENABLEABLE_HPP

#include <sway/core.hpp>
#include <sway/gapi/statecapabilities.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class StateContext;

struct StateDescriptorBase {};

template <StateCapability T>
struct StateDescriptor : StateDescriptorBase {};

template <>
struct StateDescriptor<StateCapability::RASTERIZER> : StateDescriptorBase {};

template <typename TConcreteData>
class StateEnableable {
public:
  // clang-format off
  PURE_VIRTUAL(auto capture() -> TConcreteData);  // clang-format on

  PURE_VIRTUAL(void apply(StateContext *state, const TConcreteData &data));
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_STATEENABLEABLE_HPP
