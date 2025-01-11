#ifndef SWAY_GAPI_DRAWCALL_HPP
#define SWAY_GAPI_DRAWCALL_HPP

#include <sway/core.hpp>
#include <sway/gapi/bufferset.hpp>
#include <sway/gapi/topologytypes.hpp>
#include <sway/gapi/typedefs.hpp>

namespace sway::gapi {

class DrawCall {
public:
#pragma region "Ctors/Dtor"

  DrawCall() = default;

  DTOR_VIRTUAL_DEFAULT(DrawCall);

#pragma endregion

  /**
   * \~russian @brief Выполняет отрисовку примитива.
   *
   * @param[in] topology Топология примитива.
   * @param[in] bufset Набор буферных объектов.
   * @param[in] type Тип значений в индексах.
   */
  PURE_VIRTUAL(void execute(TopologyType::Enum topology, BufferSet bufset, core::ValueDataType::Enum type));
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_DRAWCALL_HPP
