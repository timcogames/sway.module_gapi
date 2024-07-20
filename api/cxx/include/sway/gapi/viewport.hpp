#ifndef SWAY_GAPI_VIEWPORT_HPP
#define SWAY_GAPI_VIEWPORT_HPP

#include <sway/core.hpp>
#include <sway/math.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class Viewport {
public:
  Viewport() {}

  virtual ~Viewport() = default;

  /**
   * @brief Устанавливает новые значения прямоугольной области.
   *
   * @param[in] x Значение координаты по оси X.
   * @param[in] y Значение координаты по оси Y.
   * @param[in] w Значение ширины.
   * @param[in] h Значение высоты.
   */
  PURE_VIRTUAL(void set(i32_t x, i32_t y, i32_t w, i32_t h));

  /**
   * @brief Устанавливает размер прямоугольной области.
   *
   * @param[in] w Значение ширины.
   * @param[in] h Значение высоты.
   */
  PURE_VIRTUAL(void set(i32_t w, i32_t h));

  /**
   * @brief Получает размер прямоугольной области.
   */
  // clang-format off
  PURE_VIRTUAL(auto get() const -> math::rect4i_t);  // clang-format on

  /**
   * @brief Получает соотношение сторон.
   */
  // clang-format off
  PURE_VIRTUAL(auto aspect() const -> f32_t);  // clang-format on

  PURE_VIRTUAL(void clear());
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_VIEWPORT_HPP
