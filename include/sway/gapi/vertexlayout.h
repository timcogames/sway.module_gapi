#ifndef SWAY_GAPI_VERTEXLAYOUT_H
#define SWAY_GAPI_VERTEXLAYOUT_H

#include <sway/gapi/program.h>
#include <sway/gapi/vertexattributedescriptor.h>
#include <sway/namespacemacros.h>
#include <sway/types.h>

#include <boost/shared_ptr.hpp> // boost::shared_ptr

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

typedef std::shared_ptr<class IVertexLayout> VertexLayoutRef_t;

class IVertexLayout {
public:
	/*!
	 * \brief
	 *    Конструктор класса.
	 * 
	 * \param[in] program
	 *    Указатель на шейдерную программу.
	 */
	IVertexLayout(AProgram * program) {
		// Empty
	}

	/*!
	 * \brief
	 *    Деструктор класса.
	 */
	virtual ~IVertexLayout() {
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

#endif // SWAY_GAPI_VERTEXLAYOUT_H
