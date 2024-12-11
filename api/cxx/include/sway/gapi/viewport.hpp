#ifndef SWAY_GAPI_VIEWPORT_HPP
#define SWAY_GAPI_VIEWPORT_HPP

#include <sway/core.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/math.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

class Viewport {
  DECLARE_PTR_ALIASES(Viewport)

public:
#pragma region "Ctors/Dtor"

  Viewport() = default;

  DTOR_VIRTUAL_DEFAULT(Viewport);

#pragma endregion

  /**
   * \~russian @brief Устанавливает новые значения прямоугольной области.
   *
   * @param[in] x Значение координаты по оси X.
   * @param[in] y Значение координаты по оси Y.
   * @param[in] w Значение ширины.
   * @param[in] h Значение высоты.
   */
  PURE_VIRTUAL(void set(i32_t x, i32_t y, i32_t w, i32_t h));

  /**
   * \~russian @brief Устанавливает размер прямоугольной области.
   *
   * @param[in] w Значение ширины.
   * @param[in] h Значение высоты.
   */
  PURE_VIRTUAL(void set(i32_t w, i32_t h));

  /**
   * \~russian @brief Получает размер прямоугольной области.
   */
  PURE_VIRTUAL(auto get() const -> math::rect4i_t);

  /**
   * \~russian @brief Получает соотношение сторон.
   */
  PURE_VIRTUAL(auto aspect() const -> f32_t);

  PURE_VIRTUAL(void setClearColor(const math::col4f_t &col));

  PURE_VIRTUAL(void clear(ClearFlag flags));
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_VIEWPORT_HPP
