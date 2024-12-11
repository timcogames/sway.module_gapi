#ifndef SWAY_GAPI_IDGENERATOR_HPP
#define SWAY_GAPI_IDGENERATOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class IdGenerator {
  DECLARE_PTR_ALIASES(IdGenerator)

public:
#pragma region "Ctors/Dtor"

  DTOR_VIRTUAL_DEFAULT(IdGenerator);

#pragma endregion

  PURE_VIRTUAL(auto getNextUid() -> ObjectUid_t);
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_IDGENERATOR_HPP
