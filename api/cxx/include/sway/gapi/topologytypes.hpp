#ifndef SWAY_GAPI_TOPOLOGYTYPES_HPP
#define SWAY_GAPI_TOPOLOGYTYPES_HPP

#include <sway/core.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/**
 * @brief Перечисление типов топологии.
 */
enum class TopologyType : u32_t {
  UNDEF,
  POINT_LIST,  // Список точек.
  LINE_LIST,  // Список линий.
  LINE_STRIP,
  TRIANGLE_LIST,  // Список треугольников.
  TRIANGLE_STRIP,
  TRIANGLE_FAN
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_TOPOLOGYTYPES_HPP
