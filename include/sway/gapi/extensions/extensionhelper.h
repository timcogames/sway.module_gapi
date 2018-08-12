#ifndef SWAY_GAPI_EXTENSIONS_EXTENSIONHELPER_H
#define SWAY_GAPI_EXTENSIONS_EXTENSIONHELPER_H

#include <sway/namespacemacros.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)
NAMESPACE_BEGIN(extensions)

class IExtensionHelper {
public:
	virtual ~IExtensionHelper() {
		// Empty
	}
};

NAMESPACE_END(extensions)
NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_EXTENSIONS_EXTENSIONHELPER_H
