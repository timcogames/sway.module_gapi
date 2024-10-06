#ifndef SWAY_GAPI_VERTEXATTRIBLAYOUT_HPP
#define SWAY_GAPI_VERTEXATTRIBLAYOUT_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/gapi/vertexattribdescriptor.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class VertexAttribLayout {
  DECLARE_CLASS_POINTER_ALIASES(VertexAttribLayout)

public:
  virtual ~VertexAttribLayout() = default;

  /**
   * @brief Добавляет вершинный атрибут.
   *
   * @param[in] desc Описание вершинного атрибута.
   */
  PURE_VIRTUAL(void addAttribute(VertexAttribDescriptor desc));

  /**
   * @brief Включает чтение атрибутов.
   */
  PURE_VIRTUAL(void enable());

  /**
   * @brief Отключает чтение атрибутов.
   */
  PURE_VIRTUAL(void disable());
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_VERTEXATTRIBLAYOUT_HPP
