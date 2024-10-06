#ifndef SWAY_GAPI_BUFFERTARGETS_HPP
#define SWAY_GAPI_BUFFERTARGETS_HPP

#include <sway/core.hpp>

NS_BEGIN_SWAY()
NS_BEGIN(gapi)

DECLARE_ENUM(BufferTarget, ARRAY, ELEMENT_ARRAY, UNIFORM, TEXTURE);

NS_END()  // namespace gapi
NS_END()  // namespace sway

#endif  // SWAY_GAPI_BUFFERTARGETS_HPP
