#ifndef SWAY_GAPI_VIEWPORTBASE_H
#define SWAY_GAPI_VIEWPORTBASE_H

#include <sway/math/rect.h>
#include <sway/namespacemacros.h>
#include <sway/types.h>

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
	virtual ~IViewportBase() {
		// Empty
	}

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
	virtual void set(s32_t x, s32_t y, s32_t w, s32_t h) = 0;

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
	virtual void set(s32_t w, s32_t h) = 0;

	/*!
	 * \brief
	 *    Получает размер прямоугольной области.
	 */
	virtual math::rect4i_t get() const = 0;

	/*!
	 * \brief
	 *    Получает соотношение сторон.
	 */
	virtual f32_t aspect() const = 0;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_VIEWPORTBASE_H
