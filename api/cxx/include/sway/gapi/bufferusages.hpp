#ifndef SWAY_GAPI_BUFFERUSAGES_HPP
#define SWAY_GAPI_BUFFERUSAGES_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

DECLARE_ENUM(BufferUsage, STATIC, DYNAMIC, STREAM);

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_BUFFERUSAGES_HPP
