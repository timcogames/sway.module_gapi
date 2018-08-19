#ifndef SWAY_GAPI_CAPABILITYBASE_H
#define SWAY_GAPI_CAPABILITYBASE_H

#include <sway/core/version.h>
#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class ICapabilityBase {
public:
	/*!
	 * \brief
	 *    Конструктор класса.
	 */
	ICapabilityBase() {
		// Empty
	}

	/*!
	 * \brief
	 *    Деструктор класса.
	 */
	virtual ~ICapabilityBase() {
		// Empty
	}

	/*!
	 * \brief
	 *    Возвращает версию OpenGL.
	 */
	virtual core::Version getVersion() const = 0;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_CAPABILITYBASE_H
