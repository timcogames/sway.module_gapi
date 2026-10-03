#ifndef SWAY_GAPIPLUGIN_HPP
#define SWAY_GAPIPLUGIN_HPP

#include <sway/core/plugin.hpp>
#include <sway/gapi/plugin/_typedefs.hpp>
#include <sway/gapi/plugin/concretepluginfunctionset.hpp>
#include <sway/gapi/plugin/pluginfunctionsetinterface.hpp>
#include <sway/gapimacros.hpp>

namespace sway::gapi {

EXTERN_C_BEGIN

D_MODULE_GAPI_INTERFACE_EXPORT_API core::PluginInfo pluginGetInfo();

D_MODULE_GAPI_INTERFACE_EXPORT_API void pluginInitialize(core::PluginFunctionSetBase *functions);

EXTERN_C_END

}  // namespace sway::gapi

#endif  // SWAY_GAPIPLUGIN_HPP
