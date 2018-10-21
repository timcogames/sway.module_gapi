#ifndef SWAY_GAPI_H
#define SWAY_GAPI_H

#include <sway/gapi/typedefs.h>
#include <sway/gapi/capabilitybase.h>
#include <sway/gapi/profiletypes.h>
#include <sway/gapi/shadertypes.h>
#include <sway/gapi/shadercreateinfo.h>
#include <sway/gapi/shaderbase.h>
#include <sway/gapi/shaderprogrambase.h>
#include <sway/gapi/texturelayers.h>
#include <sway/gapi/texturebase.h>
#include <sway/gapi/buffertargets.h>
#include <sway/gapi/bufferusages.h>
#include <sway/gapi/bufferaccesses.h>
#include <sway/gapi/bufferdescriptor.h>
#include <sway/gapi/buffercreateinfo.h>
#include <sway/gapi/bufferbase.h>
#include <sway/gapi/vertexsemantics.h>
#include <sway/gapi/vertexattributedescriptor.h>
#include <sway/gapi/vertexattribute.h>
#include <sway/gapi/vertexlayoutbase.h>
#include <sway/gapi/primitivetypes.h>
#include <sway/gapi/drawcallbase.h>
#include <sway/gapi/viewportmodes.h>
#include <sway/gapi/viewportbase.h>
#include <sway/gapi/clearflags.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

EXTERN_C_BEGIN

DLLAPI_EXPORT CapabilityRef_t createCapability();
DLLAPI_EXPORT ShaderRef_t createShader(const ShaderCreateInfo &);
DLLAPI_EXPORT ShaderProgramRef_t createShaderProgram();
DLLAPI_EXPORT BufferRef_t createBuffer(const BufferCreateInfo &);
DLLAPI_EXPORT VertexLayoutRef_t createVertexLayout(ShaderProgramRef_t);
DLLAPI_EXPORT DrawCallRef_t createDrawCall();
DLLAPI_EXPORT ViewportRef_t createViewport();

EXTERN_C_END

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_H
