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
DECLARE_ENUM(TopologyType,
  POINT_LIST,  
  LINE_LIST, LINE_STRIP,
  TRIANGLE_LIST, TRIANGLE_STRIP, TRIANGLE_FAN
);
// clang-format on

}  // namespace sway::gapi

#endif  // SWAY_GAPI_TOPOLOGYTYPES_HPP
