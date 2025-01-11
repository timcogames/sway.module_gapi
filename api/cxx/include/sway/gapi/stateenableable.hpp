#ifndef SWAY_GAPI_STATEENABLEABLE_HPP
#define SWAY_GAPI_STATEENABLEABLE_HPP

#include <sway/core.hpp>
#include <sway/gapi/statecapabilities.hpp>

namespace sway::gapi {

class StateContext;

struct StateDescriptorBase {};

template <StateCapability::Enum CAP>
struct StateDescriptor : StateDescriptorBase {};

template <>
struct StateDescriptor<StateCapability::Enum::RASTERIZER> : StateDescriptorBase {};

template <typename CONCRETE_DATA>
class StateEnableable {
public:
  PURE_VIRTUAL(auto capture() -> CONCRETE_DATA);

  PURE_VIRTUAL(void apply(StateContext *state, const CONCRETE_DATA &data));
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_STATEENABLEABLE_HPP
