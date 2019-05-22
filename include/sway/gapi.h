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
#include <sway/gapi/bufferset.h>
#include <sway/gapi/vertexsemantics.h>
#include <sway/gapi/vertexattributedescriptor.h>
#include <sway/gapi/vertexattribute.h>
#include <sway/gapi/vertexlayoutbase.h>
#include <sway/gapi/topologytypes.h>
#include <sway/gapi/drawcallbase.h>
#include <sway/gapi/viewportmodes.h>
#include <sway/gapi/viewportbase.h>
#include <sway/gapi/clearflags.h>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

typedef core::binding::TFunction<CapabilityRef_t (void)> CreateCapabilityFunc_t;
typedef core::binding::TFunction<ShaderRef_t (const struct ShaderCreateInfo &)> CreateShaderFunc_t;
typedef core::binding::TFunction<ShaderProgramRef_t (void)> CreateShaderProgramFunc_t;
typedef core::binding::TFunction<BufferRef_t (const struct BufferCreateInfo &)> CreateBufferFunc_t;
typedef core::binding::TFunction<VertexLayoutRef_t (ShaderProgramRef_t)> CreateVertexLayoutFunc_t;
typedef core::binding::TFunction<DrawCallRef_t (void)> CreateDrawCallFunc_t;
typedef core::binding::TFunction<ViewportRef_t (void)> CreateViewportFunc_t;

struct ConcreatePluginFunctionSet : public core::PluginFunctionSet {
	CreateCapabilityFunc_t createCapability;
	CreateShaderFunc_t createShader;
	CreateShaderProgramFunc_t createShaderProgram;
	CreateBufferFunc_t createBuffer;
	CreateVertexLayoutFunc_t createVertexLayout;
	CreateDrawCallFunc_t createDrawCall;
	CreateViewportFunc_t createViewport;

	ConcreatePluginFunctionSet() {
		createCapability = nullptr;
		createShader = nullptr;
		createShaderProgram = nullptr;
		createBuffer = nullptr;
		createVertexLayout = nullptr;
		createDrawCall = nullptr;
		createViewport = nullptr;
	}
};

EXTERN_C_BEGIN

DLLAPI_EXPORT core::PluginInfo pluginGetInfo();
DLLAPI_EXPORT void pluginInitialize(core::PluginFunctionSet * functions);

EXTERN_C_END

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif // SWAY_GAPI_H
