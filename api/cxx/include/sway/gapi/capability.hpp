#ifndef SWAY_GAPI_CAPABILITY_HPP
#define SWAY_GAPI_CAPABILITY_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class Capability {
  DECLARE_CLASS_POINTER_ALIASES(Capability)

public:
  Capability() = default;

  virtual ~Capability() = default;

  PURE_VIRTUAL(auto getVersion() const -> core::Version);
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_CAPABILITY_HPP
