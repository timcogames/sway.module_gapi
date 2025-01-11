#ifndef SWAY_GAPI_TEXTURETARGETS_HPP
#define SWAY_GAPI_TEXTURETARGETS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

DECLARE_ENUM(TextureTarget, TEX_2D, TEX_2D_ARRAY, MULTISAMPLE, MULTISAMPLE_ARRAY, RECT, CUBE_MAP);

}  // namespace sway::gapi

#endif  // SWAY_GAPI_TEXTURETARGETS_HPP
