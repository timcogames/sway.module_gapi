#ifndef SWAY_GAPI_CAPABILITYBASE_HPP
#define SWAY_GAPI_CAPABILITYBASE_HPP

#include <sway/core/version.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class ICapabilityBase {
public:
  ICapabilityBase() {
    // Empty
  }

  virtual ~ICapabilityBase() {
    // Empty
  }

  /*!
   * \brief
   *    Возвращает версию OpenGL.
   */
  virtual core::Version getVersion() const = 0;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
