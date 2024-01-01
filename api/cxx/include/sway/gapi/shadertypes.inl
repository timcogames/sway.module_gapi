#include <sway/gapi/shadertypes.hpp>

#include <string>

template <typename Type = char, typename Traits = std::char_traits<Type>>
inline std::basic_ostream<Type, Traits> &operator<<(
    std::basic_ostream<Type, Traits> &stream, sway::gapi::ShaderType value) {
  switch (value) {
    case sway::gapi::ShaderType::VERT:
      return stream << "vertex";
    case sway::gapi::ShaderType::FRAG:
      return stream << "fragment";
    default:
      return stream << "unknown";
  }
}

template <typename Type = char, typename Traits = std::char_traits<Type>, typename Alloc = std::allocator<Type>>
inline std::basic_string<Type, Traits, Alloc> stringize(sway::gapi::ShaderType value) {
  switch (value) {
    case sway::gapi::ShaderType::VERT:
      return "vertex";
    case sway::gapi::ShaderType::FRAG:
      return "fragment";
    default:
      return "unknown";
  }
}
