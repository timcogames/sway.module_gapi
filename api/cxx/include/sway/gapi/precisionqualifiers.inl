#include <sway/gapi/precisionqualifiers.hpp>

#include <string>

template <typename Type = char, typename Traits = std::char_traits<Type>, typename Alloc = std::allocator<Type>>
inline auto stringize(sway::gapi::PrecisionQualifier val) -> std::basic_string<Type, Traits, Alloc> {
  switch (val) {
    case sway::gapi::PrecisionQualifier::LW:
      return "lowp";
    case sway::gapi::PrecisionQualifier::MD:
      return "mediump";
    case sway::gapi::PrecisionQualifier::HI:
      return "highp";
    default:
      return "unknown";
  }
}

template <typename Type = char, typename Traits = std::char_traits<Type>>
inline auto operator<<(
    std::basic_ostream<Type, Traits> &strm, sway::gapi::PrecisionQualifier val) -> std::basic_ostream<Type, Traits> & {
  strm << stringize(val);
  return strm;
}
