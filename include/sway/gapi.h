#ifndef SWAY_GAPI_H
#define SWAY_GAPI_H

#include <sway/gapi/clearflags.h>
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

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

EXTERN_C IShaderProgramBase * createShaderProgram();
EXTERN_C IShaderBase * createShader(const ShaderCreateInfo &);
EXTERN_C IVertexLayoutBase * createVertexLayout(IShaderProgramBase *);
EXTERN_C IBufferBase * createBuffer(const BufferCreateInfo & createInfo);
EXTERN_C IDrawCallBase * createDrawCall();

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_H
