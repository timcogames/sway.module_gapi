#ifndef SWAY_GAPI_CAPABILITYBASE_HPP
#define SWAY_GAPI_CAPABILITYBASE_HPP

#include <sway/core/version.hpp>
#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class ICapabilityBase {
public:
  ICapabilityBase() {
    // Empty
  }

  virtual ~ICapabilityBase() = default;

  /*!
   * \brief
   *    Возвращает версию OpenGL.
   */
  PURE_VIRTUAL(core::Version getVersion() const);
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
