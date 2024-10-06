#ifndef SWAY_GAPI_DRAWCALL_HPP
#define SWAY_GAPI_DRAWCALL_HPP

#include <sway/core.hpp>
#include <sway/gapi/bufferset.hpp>
#include <sway/gapi/topologytypes.hpp>
#include <sway/gapi/typedefs.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class DrawCall {
  DECLARE_CLASS_POINTER_ALIASES(DrawCall)

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
  PURE_VIRTUAL(void execute(TopologyType::Enum topology, BufferSet bufset, core::ValueDataType::Enum type));
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_DRAWCALL_HPP
