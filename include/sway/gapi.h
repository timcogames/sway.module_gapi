#ifndef SWAY_GAPI_H
#define SWAY_GAPI_H

#include <sway/gapi/extensions/extensionhelper.h>
#include <sway/gapi/shadertypes.h>
#include <sway/gapi/shadercreateinfo.h>
#include <sway/gapi/shader.h>
#include <sway/gapi/shaderprogram.h>
#include <sway/gapi/buffertargets.h>
#include <sway/gapi/bufferusages.h>
#include <sway/gapi/bufferaccesses.h>
#include <sway/gapi/bufferdescriptor.h>
#include <sway/gapi/buffercreateinfo.h>
#include <sway/gapi/buffer.h>
#include <sway/gapi/vertexsemantics.h>
#include <sway/gapi/vertexattributedescriptor.h>
#include <sway/gapi/vertexattribute.h>
#include <sway/gapi/vertexlayout.h>
#include <sway/gapi/primitivetypes.h>
#include <sway/gapi/drawcallbase.h>
#include <sway/gapi/viewportmodes.h>
#include <sway/gapi/clearflags.h>
#include <sway/gapi/context.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

EXTERN_C IContext * createContext();
EXTERN_C IDrawCallBase * createDrawCall();

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_H
