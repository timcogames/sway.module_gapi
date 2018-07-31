#ifndef SWAY_GAPI_VERTEXLAYOUTBASE_H
#define SWAY_GAPI_VERTEXLAYOUTBASE_H

#include <sway/gapi/shaderprogrambase.h>
#include <sway/gapi/vertexattributedescriptor.h>
#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class IVertexLayoutBase {
public:
	/*!
	 * \brief
	 *    Конструктор класса.
	 *
	 *    Выполняет инициализацию нового экземпляра класса.
	 * 
	 * \param[in] shader
	 *    Указатель на шейдерную программу.
	 */
	IVertexLayoutBase(IShaderProgramBase * shader) {
		// Empty
	}

	/*!
	 * \brief
	 *    Деструктор класса.
	 *
	 *    Освобождает захваченные ресурсы.
	 */
	virtual ~IVertexLayoutBase() {
		// Empty
	}

	/*!
	 * \brief
	 *    Добавляет вершинный атрибут.
	 * 
	 * \param[in] desc
	 *    Описание вершинного атрибута.
	 */
	virtual void addAttribute(VertexAttributeDescriptor desc) = 0;

	/*!
	 * \brief
	 *    Включает чтение атрибутов.
	 */
	virtual void enable() = 0;

	/*!
	 * \brief
	 *    Отключает чтение атрибутов.
	 */
	virtual void disable() = 0;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_VERTEXLAYOUTBASE_H
