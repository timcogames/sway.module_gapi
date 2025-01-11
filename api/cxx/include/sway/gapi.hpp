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
#include <sway/gapi/idgenerator.hpp>
#include <sway/gapi/idgeneratortypes.hpp>
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

namespace sway::gapi {

using CreateCapabilityFunc_t = core::TFunction<typedefs::CapabilityPtr_t(void)>;
using CreateShaderFunc_t = core::TFunction<typedefs::ShaderPtr_t(const struct ShaderCreateInfo &)>;
using CreateShaderProgramFunc_t = core::TFunction<typedefs::ShaderProgramPtr_t(void)>;
using CreateShaderPreprocessorFunc_t = core::TFunction<typedefs::ShaderPreprocessorPtr_t(u32_t, lpcstr_t)>;
using CreateBufferIdGeneratorFunc_t = core::TFunction<typedefs::IdGeneratorPtr_t()>;
using CreateBufferFunc_t =
    core::TFunction<typedefs::BufferPtr_t(typedefs::IdGeneratorPtr_t, const struct BufferCreateInfo &)>;
using CreateFrameBufferIdGeneratorFunc_t = core::TFunction<typedefs::IdGeneratorPtr_t()>;
using CreateFrameBufferFunc_t = core::TFunction<typedefs::FrameBufferPtr_t(typedefs::IdGeneratorPtr_t)>;
using CreateRenderBufferFunc_t = core::TFunction<typedefs::RenderBufferPtr_t(void)>;
using CreateVertexArrayFunc_t = core::TFunction<typedefs::VertexArrayPtr_t(void)>;
using CreateVertexAttribLayoutFunc_t = core::TFunction<typedefs::VertexAttribLayoutPtr_t(typedefs::ShaderProgramPtr_t)>;
using CreateTextureIdGeneratorFunc_t = core::TFunction<typedefs::IdGeneratorPtr_t()>;
using CreateTextureFunc_t =
    core::TFunction<typedefs::TexturePtr_t(typedefs::IdGeneratorPtr_t, const struct TextureCreateInfo &)>;
using CreateTextureSamplerFunc_t = core::TFunction<typedefs::TextureSamplerPtr_t(typedefs::TexturePtr_t)>;
using CreateDrawCallFunc_t = core::TFunction<typedefs::DrawCallPtr_t(void)>;
using CreateViewportFunc_t = core::TFunction<typedefs::ViewportPtr_t(void)>;
using CreateStateContextFunc_t = core::TFunction<typedefs::StateContextPtr_t(void)>;
using CreateRasterizerStateFunc_t = core::TFunction<StateEnableable<RasterizerDescriptor> *(void)>;

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

struct PluginFunctionSetInterface : public core::PluginFunctionSet {
#pragma region "Ctors/Dtor"

  DTOR_VIRTUAL_DEFAULT(PluginFunctionSetInterface);

#pragma endregion

  PURE_VIRTUAL(auto createCapability() -> typedefs::CapabilityPtr_t);

  PURE_VIRTUAL(auto createShader(const ShaderCreateInfo &) -> typedefs::ShaderPtr_t);

  PURE_VIRTUAL(auto createShaderProgram() -> typedefs::ShaderProgramPtr_t);

  PURE_VIRTUAL(auto createBufferIdGenerator() -> typedefs::IdGeneratorPtr_t);

  PURE_VIRTUAL(auto createBuffer(typedefs::IdGeneratorPtr_t, const BufferCreateInfo &) -> typedefs::BufferPtr_t);

  PURE_VIRTUAL(auto createFrameBufferIdGenerator() -> typedefs::IdGeneratorPtr_t);

  PURE_VIRTUAL(auto createFrameBuffer(typedefs::IdGeneratorPtr_t) -> typedefs::FrameBufferPtr_t);

  PURE_VIRTUAL(auto createRenderBuffer() -> typedefs::RenderBufferPtr_t);

  PURE_VIRTUAL(auto createVertexArray() -> typedefs::VertexArrayPtr_t);

  PURE_VIRTUAL(auto createVertexAttribLayout(typedefs::ShaderProgramPtr_t) -> typedefs::VertexAttribLayoutPtr_t);

  PURE_VIRTUAL(auto createTextureIdGenerator() -> typedefs::IdGeneratorPtr_t);

  PURE_VIRTUAL(auto createTexture(typedefs::IdGeneratorPtr_t, const TextureCreateInfo &) -> typedefs::TexturePtr_t);

  PURE_VIRTUAL(auto createTextureSampler(typedefs::TexturePtr_t) -> typedefs::TextureSamplerPtr_t);

  PURE_VIRTUAL(auto createDrawCall() -> typedefs::DrawCallPtr_t);

  PURE_VIRTUAL(auto createViewport() -> typedefs::ViewportPtr_t);

  PURE_VIRTUAL(auto createStateContext() -> typedefs::StateContextPtr_t);

  PURE_VIRTUAL(auto createShaderPreprocessor(u32_t, lpcstr_t) -> typedefs::ShaderPreprocessorPtr_t);

  PURE_VIRTUAL(auto createRasterizerState() -> StateEnableable<RasterizerDescriptor> *);
};

EXTERN_C_BEGIN

D_MODULE_GAPI_INTERFACE_EXPORT_API core::PluginInfo pluginGetInfo();

D_MODULE_GAPI_INTERFACE_EXPORT_API void pluginInitialize(core::PluginFunctionSet *functions);

EXTERN_C_END

}  // namespace sway::gapi

#endif  // SWAY_GAPI_HPP
