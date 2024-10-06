#ifndef SWAY_GAPI_DEPTHDESCRIPTOR_HPP
#define SWAY_GAPI_DEPTHDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/comparefunctions.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

struct DepthDescriptor {
  bool enabled;
  CompareFn::Enum func;
  bool mask;
  f64_t near;
  f64_t far;
};

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_DEPTHDESCRIPTOR_HPP
