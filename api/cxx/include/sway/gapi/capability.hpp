#ifndef SWAY_GAPI_CAPABILITY_HPP
#define SWAY_GAPI_CAPABILITY_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class Capability {
public:
  Capability() = default;

  virtual ~Capability() = default;

  // clang-format off
  PURE_VIRTUAL(auto getVersion() const -> core::Version);  // clang-format on
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_CAPABILITY_HPP
