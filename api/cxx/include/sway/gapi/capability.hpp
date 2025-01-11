#ifndef SWAY_GAPI_CAPABILITY_HPP
#define SWAY_GAPI_CAPABILITY_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>

namespace sway::gapi {

class Capability {
public:
#pragma region "Ctors/Dtor"

  Capability() = default;

  DTOR_VIRTUAL_DEFAULT(Capability);

#pragma endregion

  PURE_VIRTUAL(auto getVersion() const -> core::Version);
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_CAPABILITY_HPP
