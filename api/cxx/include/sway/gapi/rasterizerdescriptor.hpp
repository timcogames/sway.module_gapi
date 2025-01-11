#ifndef SWAY_GAPI_RASTERIZERDESCRIPTOR_HPP
#define SWAY_GAPI_RASTERIZERDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/cullfaces.hpp>

namespace sway::gapi {

struct RasterizerDescriptor {
  CullFace mode = CullFace::DISABLED;
  bool ccw = false;
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_RASTERIZERDESCRIPTOR_HPP
