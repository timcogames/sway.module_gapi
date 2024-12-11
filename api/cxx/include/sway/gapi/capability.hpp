#ifndef SWAY_GAPI_CAPABILITY_HPP
#define SWAY_GAPI_CAPABILITY_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class Capability {
  DECLARE_PTR_ALIASES(Capability)

public:
#pragma region "Ctors/Dtor"

  Capability() = default;

  DTOR_VIRTUAL_DEFAULT(Capability);

#pragma endregion

  PURE_VIRTUAL(auto getVersion() const -> core::Version);
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_CAPABILITY_HPP
