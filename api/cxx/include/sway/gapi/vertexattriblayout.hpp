#ifndef SWAY_GAPI_VERTEXATTRIBLAYOUT_HPP
#define SWAY_GAPI_VERTEXATTRIBLAYOUT_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/gapi/vertexattribdescriptor.hpp>

namespace sway::gapi {

class VertexAttribLayout {
public:
#pragma region "Ctors/Dtor"

  DTOR_VIRTUAL_DEFAULT(VertexAttribLayout);

#pragma endregion

  /**
   * \~russian @brief Добавляет вершинный атрибут.
   *
   * @param[in] desc Описание вершинного атрибута.
   */
  PURE_VIRTUAL(void addAttribute(VertexAttribDescriptor desc));

  /**
   * \~russian @brief Включает чтение атрибутов.
   */
  PURE_VIRTUAL(void enable());

  /**
   * \~russian @brief Отключает чтение атрибутов.
   */
  PURE_VIRTUAL(void disable());
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_VERTEXATTRIBLAYOUT_HPP
