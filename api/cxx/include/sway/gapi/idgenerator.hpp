#ifndef SWAY_GAPI_IDGENERATOR_HPP
#define SWAY_GAPI_IDGENERATOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class IdGenerator {
  DECLARE_CLASS_POINTER_ALIASES(IdGenerator)

public:
  virtual ~IdGenerator() = default;

  PURE_VIRTUAL(auto getNextUid() -> ObjectUid_t);
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_IDGENERATOR_HPP
