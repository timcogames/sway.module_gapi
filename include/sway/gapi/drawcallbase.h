#ifndef SWAY_GAPI_DRAWCALLBASE_H
#define SWAY_GAPI_DRAWCALLBASE_H

#include <sway/gapi/bufferbase.h>
#include <sway/gapi/primitivetypes.h>
#include <sway/visibilitymacros.h>
#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class IDrawCallBase {
public:
	/*!
	 * \brief
	 *    Конструктор класса.
	 *
	 *    Выполняет инициализацию нового экземпляра класса.
	 */
	IDrawCallBase() {
		// Empty
	}

	/*!
	 * \brief
	 *    Деструктор класса.
	 */
	virtual ~IDrawCallBase() {
		// Empty
	}

	/*!
	 * \brief
	 *    Выполняет отрисовку примитива.
	 * 
	 * \param[in] topology
	 *    Топология примитива.
	 * 
	 * \param[in] count
	 *    Количество отображаемых элементов.
	 * 
	 * \param[in] ibo
	 *    Указатель на буфер индексов.
	 * 
	 * \param[in] type
	 *    Тип значений в индексах.
	 */
	virtual void execute(PrimitiveType_t topology, s32_t count, IBufferBase * ibo, Type_t type) = 0;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_DRAWCALLBASE_H
