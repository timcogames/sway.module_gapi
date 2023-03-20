#ifndef SWAY_GAPI_STATE_HPP
#define SWAY_GAPI_STATE_HPP

#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class State {
public:
  State() {}

  virtual ~State() = default;

  PURE_VIRTUAL(void apply());
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_STATE_HPP
