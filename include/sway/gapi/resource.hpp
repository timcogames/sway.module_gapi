#ifndef SWAY_GAPI_RESOURCE_HPP
#define SWAY_GAPI_RESOURCE_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

using ResourceIdType = u32_t;

class Resource {
public:
  /**
   * @brief Получает идентификатор объекта.
   */
  auto getObjectId() const -> ResourceIdType { return objectId_; }

protected:
  ResourceIdType objectId_;  // Идентификатор объекта.
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_RESOURCE_HPP
