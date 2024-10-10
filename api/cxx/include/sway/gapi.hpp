#ifndef SWAY_GAPI_HPP
#define SWAY_GAPI_HPP

#include <sway/gapi/blendequations.hpp>
#include <sway/gapi/blendfunctions.hpp>
#include <sway/gapi/buffer.hpp>
#include <sway/gapi/buffercreateinfo.hpp>
#include <sway/gapi/bufferdescriptor.hpp>
#include <sway/gapi/buffermapaccesses.hpp>
#include <sway/gapi/buffermaprangeaccesses.hpp>
#include <sway/gapi/bufferset.hpp>
#include <sway/gapi/buffersubdatadescriptor.hpp>
#include <sway/gapi/buffertargets.hpp>
#include <sway/gapi/bufferusages.hpp>
#include <sway/gapi/capability.hpp>
#include <sway/gapi/clearflags.hpp>
#include <sway/gapi/comparefunctions.hpp>
#include <sway/gapi/cullfaces.hpp>
#include <sway/gapi/depthdescriptor.hpp>
#include <sway/gapi/drawcall.hpp>
#include <sway/gapi/framebuffer.hpp>
#include <sway/gapi/framebufferattachments.hpp>
#include <sway/gapi/frontfaces.hpp>
#include <sway/gapi/pixelformats.hpp>
#include <sway/gapi/pixelstoragemodes.hpp>
#include <sway/gapi/polygonmodes.hpp>
#include <sway/gapi/precisionqualifiers.hpp>
#include <sway/gapi/profiletypes.hpp>
#include <sway/gapi/rasterizerdescriptor.hpp>
#include <sway/gapi/renderbuffer.hpp>
#include <sway/gapi/shader.hpp>
#include <sway/gapi/shadercreateinfo.hpp>
#include <sway/gapi/shaderpreprocessor.hpp>
#include <sway/gapi/shaderprogram.hpp>
#include <sway/gapi/shadertypes.hpp>
#include <sway/gapi/statecapabilities.hpp>
#include <sway/gapi/statecontext.hpp>
#include <sway/gapi/stateenableable.hpp>
#include <sway/gapi/stateenableabledata.hpp>
#include <sway/gapi/stencildescriptor.hpp>
#include <sway/gapi/stencilfacedescriptor.hpp>
#include <sway/gapi/stenciloperations.hpp>
#include <sway/gapi/texture.hpp>
#include <sway/gapi/texturecreateinfo.hpp>
#include <sway/gapi/texturefilters.hpp>
#include <sway/gapi/texturelayers.hpp>
#include <sway/gapi/texturesampler.hpp>
#include <sway/gapi/texturesubdatadescriptor.hpp>
#include <sway/gapi/texturetargets.hpp>
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
#include <sway/gapimacros.hpp>

#ifdef EMSCRIPTEN_PLATFORM
#  include <emscripten.h>
#endif

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

using CreateCapabilityFunc_t = core::binding::TFunction<CapabilityPtr_t(void)>;
using CreateShaderFunc_t = core::binding::TFunction<ShaderPtr_t(const struct ShaderCreateInfo &)>;
using CreateShaderProgramFunc_t = core::binding::TFunction<ShaderProgramPtr_t(void)>;
using CreateShaderPreprocessorFunc_t = core::binding::TFunction<ShaderPreprocessor::Ptr_t(u32_t, lpcstr_t)>;
using CreateBufferIdGeneratorFunc_t = core::binding::TFunction<IdGeneratorPtr_t()>;
using CreateBufferFunc_t = core::binding::TFunction<BufferPtr_t(IdGeneratorPtr_t, const struct BufferCreateInfo &)>;
using CreateFrameBufferIdGeneratorFunc_t = core::binding::TFunction<IdGeneratorPtr_t()>;
using CreateFrameBufferFunc_t = core::binding::TFunction<FrameBufferPtr_t(IdGeneratorPtr_t)>;
using CreateRenderBufferFunc_t = core::binding::TFunction<RenderBufferPtr_t(void)>;
using CreateVertexArrayFunc_t = core::binding::TFunction<VertexArrayPtr_t(void)>;
using CreateVertexAttribLayoutFunc_t = core::binding::TFunction<VertexAttribLayoutPtr_t(ShaderProgramPtr_t)>;
using CreateTextureIdGeneratorFunc_t = core::binding::TFunction<IdGeneratorPtr_t()>;
using CreateTextureFunc_t = core::binding::TFunction<TexturePtr_t(IdGeneratorPtr_t, const struct TextureCreateInfo &)>;
using CreateTextureSamplerFunc_t = core::binding::TFunction<TextureSamplerPtr_t(TexturePtr_t)>;
using CreateDrawCallFunc_t = core::binding::TFunction<DrawCallPtr_t(void)>;
using CreateViewportFunc_t = core::binding::TFunction<ViewportPtr_t(void)>;
using CreateStateContextFunc_t = core::binding::TFunction<StateContextPtr_t(void)>;
using CreateRasterizerStateFunc_t = core::binding::TFunction<StateEnableable<RasterizerDescriptor> *(void)>;

struct ConcreatePluginFunctionSet : public core::PluginFunctionSet {
  CreateCapabilityFunc_t createCapability;
  CreateShaderFunc_t createShader;
  CreateShaderProgramFunc_t createShaderProgram;
  CreateShaderPreprocessorFunc_t createShaderPreprocessor;
  CreateBufferIdGeneratorFunc_t createBufferIdGenerator;
  CreateBufferFunc_t createBuffer;
  CreateFrameBufferIdGeneratorFunc_t createFrameBufferIdGenerator;
  CreateFrameBufferFunc_t createFrameBuffer;
  CreateRenderBufferFunc_t createRenderBuffer;
  CreateVertexArrayFunc_t createVertexArray;
  CreateVertexAttribLayoutFunc_t createVertexAttribLayout;
  CreateTextureIdGeneratorFunc_t createTextureIdGenerator;
  CreateTextureFunc_t createTexture;
  CreateTextureSamplerFunc_t createTextureSampler;
  CreateDrawCallFunc_t createDrawCall;
  CreateViewportFunc_t createViewport;
  CreateStateContextFunc_t createStateContext;
  CreateRasterizerStateFunc_t createRasterizerState;

  ConcreatePluginFunctionSet() {
    createCapability = nullptr;
    createShader = nullptr;
    createShaderProgram = nullptr;
    createShaderPreprocessor = nullptr;
    createBufferIdGenerator = nullptr;
    createBuffer = nullptr;
    createFrameBufferIdGenerator = nullptr;
    createFrameBuffer = nullptr;
    createRenderBuffer = nullptr;
    createVertexArray = nullptr;
    createVertexAttribLayout = nullptr;
    createTextureIdGenerator = nullptr;
    createTexture = nullptr;
    createTextureSampler = nullptr;
    createDrawCall = nullptr;
    createViewport = nullptr;
    createStateContext = nullptr;
    createRasterizerState = nullptr;
  }
};

EXTERN_C_BEGIN

D_MODULE_GAPI_INTERFACE_EXPORT_API core::PluginInfo pluginGetInfo();

D_MODULE_GAPI_INTERFACE_EXPORT_API void pluginInitialize(core::PluginFunctionSet *functions);

EXTERN_C_END

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_HPP
