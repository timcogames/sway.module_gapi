#ifndef SWAY_GAPI_TEXTUREBASE_H
#define SWAY_GAPI_TEXTUREBASE_H

#include <sway/gapi/resource.h>
#include <sway/namespacemacros.h>
#include <sway/types.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

class ATextureBase : public Resource {
public:
	/*!
	 * \brief
	 *    Конструктор класса.
	 */
	ATextureBase() {
		// Empty
	}

	/*!
	 * \brief
	 *    Деструктор класса.
	 */
	virtual ~ATextureBase() {
		// Empty
	}
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_TEXTUREBASE_H
