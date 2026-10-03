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

#endif  // SWAY_GAPI_HPP
