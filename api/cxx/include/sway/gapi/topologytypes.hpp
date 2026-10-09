#ifndef SWAY_GAPI_TOPOLOGYTYPES_HPP
#define SWAY_GAPI_TOPOLOGYTYPES_HPP

#include <sway/core.hpp>

namespace sway::gapi {

/**
 * @enum TopologyType::Enum
 * \~russian @brief Перечисление внутренних типов отрисовки примитивов.
 */

/**
 * @var TopologyType::Enum::POINT_LIST
 * \~russian @brief Список точек.
 */

/**
 * @var TopologyType::Enum::LINE_LIST
 * \~russian @brief Список линий.
 */

/**
 * @var TopologyType::Enum::TRIANGLE_LIST
 * \~russian @brief Список треугольников.
 */

// clang-format off
#define TOPOLOGY_TYPE_LIST(ITEM) \
  ITEM(POINT_LIST, 1) \
  ITEM(LINE_LIST, 2) \
  ITEM(LINE_STRIP, 3) \
  ITEM(TRIANGLE_LIST, 4) \
  ITEM(TRIANGLE_STRIP, 5) \
  ITEM(TRIANGLE_FAN, 6)
// clang-format on

DECLARE_ENUM_U32(TopologyType, TOPOLOGY_TYPE_LIST)

}  // namespace sway::gapi

#endif  // SWAY_GAPI_TOPOLOGYTYPES_HPP
