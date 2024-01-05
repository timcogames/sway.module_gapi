#ifndef SWAY_GAPI_RASTERIZERDESCRIPTOR_HPP
#define SWAY_GAPI_RASTERIZERDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/cullfaces.hpp>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(gapi)

struct RasterizerDescriptor {
  CullFace mode = CullFace::DISABLED;
  bool ccw = false;
};

NAMESPACE_END(gapi)
NAMESPACE_END(sway)

#endif  // SWAY_GAPI_RASTERIZERDESCRIPTOR_HPP
