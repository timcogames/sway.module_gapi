#ifndef SWAY_GAPI_H
#define SWAY_GAPI_H

#include <sway/gapi/typedefs.h>
#include <sway/gapi/capabilitybase.h>
#include <sway/gapi/profiletypes.h>
#include <sway/gapi/shadertypes.h>
#include <sway/gapi/shadercreateinfo.h>
#include <sway/gapi/shaderbase.h>
#include <sway/gapi/shaderprogrambase.h>
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

EXTERN_C ICapabilityBase * createCapability();
EXTERN_C AShaderProgramBase * createShaderProgram();
EXTERN_C AShaderBase * createShader(const ShaderCreateInfo &);
EXTERN_C ABufferBase * createBuffer(const BufferCreateInfo & createInfo);
EXTERN_C IVertexLayoutBase * createVertexLayout(AShaderProgramBase *);
EXTERN_C IDrawCallBase * createDrawCall();
EXTERN_C IViewportBase * createViewport();

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_H
