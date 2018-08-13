#ifndef SWAY_GAPI_RESOURCE_H
#define SWAY_GAPI_RESOURCE_H

#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class Resource {
public:
	/*!
	 * \brief
	 *    Получает идентификатор объекта.
	 */
	u32_t getObjectId() const {
		return _objectId;
	}

protected:
	u32_t _objectId; /*!< Идентификатор объекта. */
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_RESOURCE_H
