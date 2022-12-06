#ifndef SWAY_GAPI_TOPOLOGYTYPES_HPP
#define SWAY_GAPI_TOPOLOGYTYPES_HPP

#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Перечисление типов топологии.
 */
enum class TopologyType_t : u32_t {
  None,
  PointList,  // Список точек.
  LineList,  // Список линий.
  LineStrip,
  TriangleList,  // Список треугольников.
  TriangleStrip,
  TriangleFan
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TOPOLOGYTYPES_HPP
