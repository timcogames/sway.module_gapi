#ifndef SWAY_GAPI_VIEWPORTBASE_HPP
#define SWAY_GAPI_VIEWPORTBASE_HPP

#include <sway/keywords.hpp>
#include <sway/math/rect.hpp>
#include <sway/namespacemacros.hpp>
#include <sway/types.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class IViewportBase {
public:
  /*!
   * \brief
   *    Конструктор класса.
   */
  IViewportBase() {
    // Empty
  }

  /*!
   * \brief
   *    Деструктор класса.
   */
  virtual ~IViewportBase() = default;

  /*!
   * \brief
   *    Устанавливает новые значения прямоугольной области.
   *
   * \param[in] x
   *    Значение координаты по оси X.
   *
   * \param[in] y
   *    Значение координаты по оси Y.
   *
   * \param[in] w
   *    Значение ширины.
   *
   * \param[in] h
   *    Значение высоты.
   */
  PURE_VIRTUAL(void set(s32_t x, s32_t y, s32_t w, s32_t h));

  /*!
   * \brief
   *    Устанавливает размер прямоугольной области.
   *
   * \param[in] w
   *    Значение ширины.
   *
   * \param[in] h
   *    Значение высоты.
   */
  PURE_VIRTUAL(void set(s32_t w, s32_t h));

  /*!
   * \brief
   *    Получает размер прямоугольной области.
   */
  PURE_VIRTUAL(math::rect4i_t get() const);

  /*!
   * \brief
   *    Получает соотношение сторон.
   */
  PURE_VIRTUAL(f32_t aspect() const);
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif
