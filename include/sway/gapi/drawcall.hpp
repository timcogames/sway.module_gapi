#ifndef SWAY_GAPI_DRAWCALL_HPP
#define SWAY_GAPI_DRAWCALL_HPP

#include <sway/gapi/bufferset.hpp>
#include <sway/gapi/topologytypes.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/keywords.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>
#include <sway/visibilitymacros.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class DrawCall {
public:
  DrawCall() {}

  virtual ~DrawCall() = default;

  /**
   * @brief Выполняет отрисовку примитива.
   *
   * @param[in] topology Топология примитива.
   * @param[in] bufset Набор буферных объектов.
   * @param[in] type Тип значений в индексах.
   */
  PURE_VIRTUAL(void execute(TopologyType topology, BufferSet bufset, core::ValueDataType type));
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_DRAWCALL_HPP
