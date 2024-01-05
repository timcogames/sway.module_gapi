#ifndef SWAY_GAPI_HPP
#define SWAY_GAPI_HPP

#include <sway/gapi/blendequations.hpp>
#include <sway/gapi/blendfunctions.hpp>
#include <sway/gapi/buffer.hpp>
#include <sway/gapi/bufferaccesses.hpp>
#include <sway/gapi/buffercreateinfo.hpp>
#include <sway/gapi/bufferdescriptor.hpp>
#include <sway/gapi/bufferset.hpp>
#include <sway/gapi/buffertargets.hpp>
#include <sway/gapi/bufferusages.hpp>
#include <sway/gapi/capability.hpp>
#include <sway/gapi/clearflags.hpp>
#include <sway/gapi/comparefunctions.hpp>
#include <sway/gapi/cullfaces.hpp>
#include <sway/gapi/drawcall.hpp>
#include <sway/gapi/frontfaces.hpp>
#include <sway/gapi/profiletypes.hpp>
#include <sway/gapi/rasterizerdescriptor.hpp>
#include <sway/gapi/shader.hpp>
#include <sway/gapi/shadercreateinfo.hpp>
#include <sway/gapi/shaderprogram.hpp>
#include <sway/gapi/shadertypes.hpp>
#include <sway/gapi/state.hpp>
#include <sway/gapi/stateenableable.hpp>
#include <sway/gapi/stateenableabledata.hpp>
#include <sway/gapi/statetypes.hpp>
#include <sway/gapi/stenciloperations.hpp>
#include <sway/gapi/texture.hpp>
#include <sway/gapi/texturefilters.hpp>
#include <sway/gapi/texturelayers.hpp>
#include <sway/gapi/texturesampler.hpp>
#include <sway/gapi/texturewraps.hpp>
#include <sway/gapi/topologytypes.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/gapi/uniform.hpp>
#include <sway/gapi/vertexarray.hpp>
#include <sway/gapi/vertexattribdescriptor.hpp>
#include <sway/gapi/vertexattriblayout.hpp>
#include <sway/gapi/vertexsemantics.hpp>
#include <sway/gapi/viewport.hpp>
#include <sway/gapi/viewportmodes.hpp>

#ifdef EMSCRIPTEN_PLATFORM
#  include <emscripten.h>
#endif

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

using CreateCapabilityFunc_t = core::binding::TFunction<CapabilityRef_t(void)>;
using CreateShaderFunc_t = core::binding::TFunction<ShaderRef_t(const struct ShaderCreateInfo &)>;
using CreateShaderProgramFunc_t = core::binding::TFunction<ShaderProgramRef_t(void)>;
using CreateIdGeneratorFunc_t = core::binding::TFunction<IdGeneratorRef_t()>;
using CreateBufferFunc_t = core::binding::TFunction<BufferRef_t(IdGeneratorRef_t, const struct BufferCreateInfo &)>;
using CreateVertexArrayFunc_t = core::binding::TFunction<VertexArrayPtr_t(void)>;
using CreateVertexAttribLayoutFunc_t = core::binding::TFunction<VertexAttribLayoutPtr_t(ShaderProgramRef_t)>;
using CreateTextureFunc_t = core::binding::TFunction<TextureRef_t(void)>;
using CreateTextureSamplerFunc_t = core::binding::TFunction<TextureSamplerRef_t(void)>;
using CreateDrawCallFunc_t = core::binding::TFunction<DrawCallRef_t(void)>;
using CreateViewportFunc_t = core::binding::TFunction<ViewportRef_t(void)>;
using CreateStateFunc_t = core::binding::TFunction<StateRef_t(void)>;

struct ConcreatePluginFunctionSet : public core::PluginFunctionSet {
  CreateCapabilityFunc_t createCapability;
  CreateShaderFunc_t createShader;
  CreateShaderProgramFunc_t createShaderProgram;
  CreateIdGeneratorFunc_t createIdGenerator;
  CreateBufferFunc_t createBuffer;
  CreateVertexArrayFunc_t createVertexArray;
  CreateVertexAttribLayoutFunc_t createVertexAttribLayout;
  CreateTextureFunc_t createTexture;
  CreateTextureSamplerFunc_t createTextureSampler;
  CreateDrawCallFunc_t createDrawCall;
  CreateViewportFunc_t createViewport;
  CreateStateFunc_t createState;

  ConcreatePluginFunctionSet() {
    createCapability = nullptr;
    createShader = nullptr;
    createShaderProgram = nullptr;
    createBuffer = nullptr;
    createVertexArray = nullptr;
    createVertexAttribLayout = nullptr;
    createTexture = nullptr;
    createTextureSampler = nullptr;
    createDrawCall = nullptr;
    createViewport = nullptr;
    createState = nullptr;
  }
};

EXTERN_C_BEGIN

EXPORT_API core::PluginInfo pluginGetInfo();

EXPORT_API void pluginInitialize(core::PluginFunctionSet *functions);

EXTERN_C_END

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_HPP
