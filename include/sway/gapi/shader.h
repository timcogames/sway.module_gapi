#ifndef SWAY_GAPI_SHADER_H
#define SWAY_GAPI_SHADER_H

#include <sway/gapi/resource.h>
#include <sway/gapi/shadertypes.h>
#include <sway/gapi/shadercreateinfo.h>
#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

/*!
 * \brief
 *    Представление шейдера.
 */
class AShader : public Resource {
public:
	/*!
	 * \brief
	 *    Конструктор класса.
	 * 
	 * \param[in] type
	 *    Тип создаваемого шейдера.
	 */
	AShader(ShaderType_t type) {
		// Empty
	}

	/*!
	 * \brief
	 *    Деструктор класса.
	 */
	virtual ~AShader() {
		// Empty
	}

	/*!
	 * \brief
	 *    Выполняет компиляцию шейдерного объекта.
	 * 
	 * \param[in] source
	 *    Исходный код шейдера.
	 */
	virtual void compile(lpcstr_t source) = 0;

	/*!
	 * \brief
	 *    Возвращает статус компиляции.
	 * 
	 * \return
	 *    Если компиляция прошла успешно 'true', иначе 'false'.
	 */
	virtual bool isCompiled() const = 0;

	/*!
	 * \brief
	 *    Получает тип шейдера.
	 * 
	 * \return
	 *    Тип шейдера.
	 */
	virtual ShaderType_t getType() const = 0;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_SHADER_H
