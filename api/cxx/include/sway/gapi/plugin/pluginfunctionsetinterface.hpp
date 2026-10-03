#ifndef SWAY_GAPI_PLUGIN_PLUGINFUNCTIONSETINTERFACE_HPP
#define SWAY_GAPI_PLUGIN_PLUGINFUNCTIONSETINTERFACE_HPP

#include <sway/core/plugin.hpp>
#include <sway/gapi/buffercreateinfo.hpp>
#include <sway/gapi/rasterizerdescriptor.hpp>
#include <sway/gapi/shadercreateinfo.hpp>
#include <sway/gapi/stateenableable.hpp>
#include <sway/gapi/texturecreateinfo.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/gapimacros.hpp>
#include <sway/types.hpp>

namespace sway::gapi {

struct PluginFunctionSetInterface : public core::PluginFunctionSetBase {
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

}  // namespace sway::gapi

#endif  // SWAY_GAPI_PLUGIN_PLUGINFUNCTIONSETINTERFACE_HPP
