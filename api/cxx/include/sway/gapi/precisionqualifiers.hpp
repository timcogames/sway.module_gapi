#ifndef SWAY_GAPI_PRECISIONQUALIFIERS_HPP
#define SWAY_GAPI_PRECISIONQUALIFIERS_HPP

#include <sway/core.hpp>

namespace sway::gapi {

enum class PrecisionQualifier : u32_t {
  LW,  ///< Low
  MD,  ///< Medium
  HI,  ///< Hight
  Latest
};

}  // namespace sway::gapi

#include <sway/gapi/precisionqualifiers.inl>

#endif  // SWAY_GAPI_PRECISIONQUALIFIERS_HPP
