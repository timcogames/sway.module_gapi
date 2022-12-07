#ifndef SWAY_GAPI_HPP
#define SWAY_GAPI_HPP

#include <sway/gapi/bufferaccesses.hpp>
#include <sway/gapi/bufferbase.hpp>
#include <sway/gapi/buffercreateinfo.hpp>
#include <sway/gapi/bufferdescriptor.hpp>
#include <sway/gapi/bufferset.hpp>
#include <sway/gapi/buffertargets.hpp>
#include <sway/gapi/bufferusages.hpp>
#include <sway/gapi/capabilitybase.hpp>
#include <sway/gapi/clearflags.hpp>
#include <sway/gapi/drawcallbase.hpp>
#include <sway/gapi/profiletypes.hpp>
#include <sway/gapi/shaderbase.hpp>
#include <sway/gapi/shadercreateinfo.hpp>
#include <sway/gapi/shaderprogrambase.hpp>
#include <sway/gapi/shadertypes.hpp>
#include <sway/gapi/texturebase.hpp>
#include <sway/gapi/texturelayers.hpp>
#include <sway/gapi/topologytypes.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/gapi/vertexattribute.hpp>
#include <sway/gapi/vertexattributedescriptor.hpp>
#include <sway/gapi/vertexlayoutbase.hpp>
#include <sway/gapi/vertexsemantics.hpp>
#include <sway/gapi/viewportbase.hpp>
#include <sway/gapi/viewportmodes.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

using CreateCapabilityFunc_t = core::binding::TFunction<CapabilityRef_t(void)>;
using CreateShaderFunc_t = core::binding::TFunction<ShaderRef_t(const struct ShaderCreateInfo &)>;
using CreateShaderProgramFunc_t = core::binding::TFunction<ShaderProgramRef_t(void)>;
using CreateBufferIdQueueFunc_t = core::binding::TFunction<BufferIdQueueRef_t()>;
using CreateBufferFunc_t = core::binding::TFunction<BufferRef_t(BufferIdQueueRef_t, const struct BufferCreateInfo &)>;
using CreateVertexLayoutFunc_t = core::binding::TFunction<VertexLayoutRef_t(ShaderProgramRef_t)>;
using CreateDrawCallFunc_t = core::binding::TFunction<DrawCallRef_t(void)>;
using CreateViewportFunc_t = core::binding::TFunction<ViewportRef_t(void)>;

struct ConcreatePluginFunctionSet : public core::PluginFunctionSet {
  CreateCapabilityFunc_t createCapability;
  CreateShaderFunc_t createShader;
  CreateShaderProgramFunc_t createShaderProgram;
  CreateBufferIdQueueFunc_t createBufferIdQueue;
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
DLLAPI_EXPORT void pluginInitialize(core::PluginFunctionSet *functions);

EXTERN_C_END

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_HPP
