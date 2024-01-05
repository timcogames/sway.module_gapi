#ifndef SWAY_GAPI_STATEENABLEABLE_HPP
#define SWAY_GAPI_STATEENABLEABLE_HPP

#include <sway/core.hpp>
#include <sway/gapi/statetypes.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class State;

struct StateDescriptorBase {};

template <StateType T>
struct StateDescriptor : StateDescriptorBase {};

template <>
struct StateDescriptor<StateType::RASTERIZER> : StateDescriptorBase {};

template <typename TConcreteData>
class StateEnableable {
public:
  // clang-format off
  PURE_VIRTUAL(auto capture() -> TConcreteData);  // clang-format on

  PURE_VIRTUAL(void apply(State *state, const TConcreteData &data));
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_STATEENABLEABLE_HPP
