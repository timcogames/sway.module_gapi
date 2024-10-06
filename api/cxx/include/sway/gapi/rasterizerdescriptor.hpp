#ifndef SWAY_GAPI_RASTERIZERDESCRIPTOR_HPP
#define SWAY_GAPI_RASTERIZERDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/cullfaces.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

struct RasterizerDescriptor {
  CullFace mode = CullFace::DISABLED;
  bool ccw = false;
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_RASTERIZERDESCRIPTOR_HPP
