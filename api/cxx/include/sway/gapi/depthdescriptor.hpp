#ifndef SWAY_GAPI_DEPTHDESCRIPTOR_HPP
#define SWAY_GAPI_DEPTHDESCRIPTOR_HPP

#include <sway/core.hpp>
#include <sway/gapi/comparefunctions.hpp>

namespace sway::gapi {

struct DepthDescriptor {
  bool enabled;
  CompareFn::Enum func;
  bool mask;
  f64_t near;
  f64_t far;
};

}  // namespace sway::gapi

#endif  // SWAY_GAPI_DEPTHDESCRIPTOR_HPP
