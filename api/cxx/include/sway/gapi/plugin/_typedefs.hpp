#ifndef SWAY_GAPI_PLUGIN_TYPEDEFS_HPP
#define SWAY_GAPI_PLUGIN_TYPEDEFS_HPP

#include <sway/core/binding/function.hpp>
#include <sway/gapi/buffercreateinfo.hpp>
#include <sway/gapi/rasterizerdescriptor.hpp>
#include <sway/gapi/shadercreateinfo.hpp>
#include <sway/gapi/stateenableable.hpp>
#include <sway/gapi/texturecreateinfo.hpp>
#include <sway/gapi/typedefs.hpp>
#include <sway/types.hpp>

namespace sway::gapi {

using CreateCapabilityFunc_t = core::TFunctionPointer<typedefs::CapabilityPtr_t(void)>;
using CreateShaderFunc_t = core::TFunctionPointer<typedefs::ShaderPtr_t(const struct ShaderCreateInfo &)>;
using CreateShaderProgramFunc_t = core::TFunctionPointer<typedefs::ShaderProgramPtr_t(void)>;
using CreateShaderPreprocessorFunc_t = core::TFunctionPointer<typedefs::ShaderPreprocessorPtr_t(u32_t, lpcstr_t)>;
using CreateBufferIdGeneratorFunc_t = core::TFunctionPointer<typedefs::IdGeneratorPtr_t()>;
using CreateBufferFunc_t =
    core::TFunctionPointer<typedefs::BufferPtr_t(typedefs::IdGeneratorPtr_t, const struct BufferCreateInfo &)>;
using CreateFrameBufferIdGeneratorFunc_t = core::TFunctionPointer<typedefs::IdGeneratorPtr_t()>;
using CreateFrameBufferFunc_t = core::TFunctionPointer<typedefs::FrameBufferPtr_t(typedefs::IdGeneratorPtr_t)>;
using CreateRenderBufferFunc_t = core::TFunctionPointer<typedefs::RenderBufferPtr_t(void)>;
using CreateVertexArrayFunc_t = core::TFunctionPointer<typedefs::VertexArrayPtr_t(void)>;
using CreateVertexAttribLayoutFunc_t =
    core::TFunctionPointer<typedefs::VertexAttribLayoutPtr_t(typedefs::ShaderProgramPtr_t)>;
using CreateTextureIdGeneratorFunc_t = core::TFunctionPointer<typedefs::IdGeneratorPtr_t()>;
using CreateTextureFunc_t =
    core::TFunctionPointer<typedefs::TexturePtr_t(typedefs::IdGeneratorPtr_t, const struct TextureCreateInfo &)>;
using CreateTextureSamplerFunc_t = core::TFunctionPointer<typedefs::TextureSamplerPtr_t(typedefs::TexturePtr_t)>;
using CreateDrawCallFunc_t = core::TFunctionPointer<typedefs::DrawCallPtr_t(void)>;
using CreateViewportFunc_t = core::TFunctionPointer<typedefs::ViewportPtr_t(void)>;
using CreateStateContextFunc_t = core::TFunctionPointer<typedefs::StateContextPtr_t(void)>;
using CreateRasterizerStateFunc_t = core::TFunctionPointer<StateEnableable<RasterizerDescriptor> *(void)>;

}  // namespace sway::gapi

#endif  // SWAY_GAPI_PLUGIN_TYPEDEFS_HPP
