#ifndef SWAY_GAPI_CAPABILITY_HPP
#define SWAY_GAPI_CAPABILITY_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class Capability {
  DECLARE_CLASS_POINTER_ALIASES(Capability)

public:
  Capability() = default;

  virtual ~Capability() = default;

  PURE_VIRTUAL(auto getVersion() const -> core::Version);
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_CAPABILITY_HPP
