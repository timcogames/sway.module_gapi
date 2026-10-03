#ifndef SWAY_GAPI_PLUGIN_CONCRETEPLUGINFUNCTIONSET_HPP
#define SWAY_GAPI_PLUGIN_CONCRETEPLUGINFUNCTIONSET_HPP

#include <sway/gapi/plugin/_typedefs.hpp>
#include <sway/gapi/plugin/pluginfunctionsetinterface.hpp>

namespace sway::gapi {

struct ConcretePluginFunctionSet : public PluginFunctionSetInterface {
  CreateCapabilityFunc_t createCapability_;
  CreateShaderFunc_t createShader_;
  CreateShaderProgramFunc_t createShaderProgram_;
  CreateShaderPreprocessorFunc_t createShaderPreprocessor_;
  CreateBufferIdGeneratorFunc_t createBufferIdGenerator_;
  CreateBufferFunc_t createBuffer_;
  CreateFrameBufferIdGeneratorFunc_t createFrameBufferIdGenerator_;
  CreateFrameBufferFunc_t createFrameBuffer_;
  CreateRenderBufferFunc_t createRenderBuffer_;
  CreateVertexArrayFunc_t createVertexArray_;
  CreateVertexAttribLayoutFunc_t createVertexAttribLayout_;
  CreateTextureIdGeneratorFunc_t createTextureIdGenerator_;
  CreateTextureFunc_t createTexture_;
  CreateTextureSamplerFunc_t createTextureSampler_;
  CreateDrawCallFunc_t createDrawCall_;
  CreateViewportFunc_t createViewport_;
  CreateStateContextFunc_t createStateContext_;
  CreateRasterizerStateFunc_t createRasterizerState_;

  auto createCapability() -> typedefs::CapabilityPtr_t override {
    return createCapability_ ? createCapability_() : nullptr;
  }

  auto createShader(const ShaderCreateInfo &info) -> typedefs::ShaderPtr_t override {
    return createShader_ ? createShader_(info) : nullptr;
  }

  auto createShaderProgram() -> typedefs::ShaderProgramPtr_t override {
    return createShaderProgram_ ? createShaderProgram_() : nullptr;
  }

  auto createShaderPreprocessor(u32_t id, lpcstr_t source) -> typedefs::ShaderPreprocessorPtr_t override {
    return createShaderPreprocessor_ ? createShaderPreprocessor_(id, source) : nullptr;
  }

  auto createBufferIdGenerator() -> typedefs::IdGeneratorPtr_t override {
    return createBufferIdGenerator_ ? createBufferIdGenerator_() : nullptr;
  }

  auto createBuffer(typedefs::IdGeneratorPtr_t idGen, const BufferCreateInfo &info) -> typedefs::BufferPtr_t override {
    return createBuffer_ ? createBuffer_(idGen, info) : nullptr;
  }

  auto createFrameBufferIdGenerator() -> typedefs::IdGeneratorPtr_t override {
    return createFrameBufferIdGenerator_ ? createFrameBufferIdGenerator_() : nullptr;
  }

  auto createFrameBuffer(typedefs::IdGeneratorPtr_t idGen) -> typedefs::FrameBufferPtr_t override {
    return createFrameBuffer_ ? createFrameBuffer_(idGen) : nullptr;
  }

  auto createRenderBuffer() -> typedefs::RenderBufferPtr_t override {
    return createRenderBuffer_ ? createRenderBuffer_() : nullptr;
  }

  auto createVertexArray() -> typedefs::VertexArrayPtr_t override {
    return createVertexArray_ ? createVertexArray_() : nullptr;
  }

  auto createVertexAttribLayout(typedefs::ShaderProgramPtr_t program) -> typedefs::VertexAttribLayoutPtr_t override {
    return createVertexAttribLayout_ ? createVertexAttribLayout_(program) : nullptr;
  }

  auto createTextureIdGenerator() -> typedefs::IdGeneratorPtr_t override {
    return createTextureIdGenerator_ ? createTextureIdGenerator_() : nullptr;
  }

  auto createTexture(typedefs::IdGeneratorPtr_t idGen, const TextureCreateInfo &info)
      -> typedefs::TexturePtr_t override {
    return createTexture_ ? createTexture_(idGen, info) : nullptr;
  }

  auto createTextureSampler(typedefs::TexturePtr_t texture) -> typedefs::TextureSamplerPtr_t override {
    return createTextureSampler_ ? createTextureSampler_(texture) : nullptr;
  }

  auto createDrawCall() -> typedefs::DrawCallPtr_t override { return createDrawCall_ ? createDrawCall_() : nullptr; }

  auto createViewport() -> typedefs::ViewportPtr_t override { return createViewport_ ? createViewport_() : nullptr; }

  auto createStateContext() -> typedefs::StateContextPtr_t override {
    return createStateContext_ ? createStateContext_() : nullptr;
  }

  auto createRasterizerState() -> StateEnableable<RasterizerDescriptor> * override {
    return createRasterizerState_ ? createRasterizerState_() : nullptr;
  }
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_PLUGIN_CONCRETEPLUGINFUNCTIONSET_HPP
