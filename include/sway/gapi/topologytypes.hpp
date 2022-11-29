#ifndef SWAY_GAPI_TOPOLOGYTYPES_HPP
#define SWAY_GAPI_TOPOLOGYTYPES_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Перечисление типов топологии.
 *
 */
enum class TopologyType_t : u32_t {
  kNone,
  kPointList, /*!< Список точек. */
  kLineList, /*!< Список линий. */
  kLineStrip,
  kTriangleList, /*!< Список треугольников. */
  kTriangleStrip,
  kTriangleFan
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TOPOLOGYTYPES_HPP
