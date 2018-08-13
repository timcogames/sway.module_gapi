#ifndef SWAY_GAPI_CONTEXT_H
#define SWAY_GAPI_CONTEXT_H

#include <sway/gapi/shader.h>
#include <sway/gapi/program.h>
#include <sway/gapi/buffer.h>
#include <sway/gapi/vertexlayout.h>
#include <sway/visibilitymacros.h>
#include <sway/namespacemacros.h>
#include <sway/types.h>

#include <boost/shared_ptr.hpp> // boost::shared_ptr

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class IContext {
public:
	/*!
	 * \brief
	 *    Конструктор класса.
	 */
	IContext() {
		// Empty
	}

	/*!
	 * \brief
	 *    Деструктор класса.
	 *
	 *    Освобождает захваченные ресурсы.
	 */
	virtual ~IContext() {
		// Empty
	}

	virtual ShaderRef_t createShader(const ShaderCreateInfo & createInfo) = 0;
	
	virtual ProgramRef_t createProgram() = 0;

	virtual BufferRef_t createBuffer(const BufferCreateInfo & createInfo) = 0;

	virtual VertexLayoutRef_t createVertexLayout(AProgram * program) = 0;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_CONTEXT_H
