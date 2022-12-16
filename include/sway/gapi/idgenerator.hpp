#ifndef SWAY_GAPI_IDGENERATOR_HPP
#define SWAY_GAPI_IDGENERATOR_HPP

#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class IdGenerator {
public:
  // clang-format off
  PURE_VIRTUAL(auto newGuid() -> u32_t);  // clang-format on
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_IDGENERATOR_HPP
