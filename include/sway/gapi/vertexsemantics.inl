#include <sway/gapi/vertexsemantics.hpp>

#include <string>

template <typename Type = char, typename Traits = std::char_traits<Type>, typename Alloc = std::allocator<Type>>
inline auto stringize(sway::gapi::VertexSemantic val) -> std::basic_string<Type, Traits, Alloc> {
  switch (val) {
    case sway::gapi::VertexSemantic::POS:
      return "attrib_pos";
    case sway::gapi::VertexSemantic::COL:
      return "attrib_col";
    case sway::gapi::VertexSemantic::TEXCOORD_0:
      return "attrib_texcoord_0";
    case sway::gapi::VertexSemantic::TEXCOORD_1:
      return "attrib_texcoord_1";
    case sway::gapi::VertexSemantic::TEXCOORD_2:
      return "attrib_texcoord_2";
    case sway::gapi::VertexSemantic::TEXCOORD_3:
      return "attrib_texcoord_3";
    case sway::gapi::VertexSemantic::TEXCOORD_4:
      return "attrib_texcoord_4";
    case sway::gapi::VertexSemantic::TEXCOORD_5:
      return "attrib_texcoord_5";
    case sway::gapi::VertexSemantic::TEXCOORD_6:
      return "attrib_texcoord_6";
    case sway::gapi::VertexSemantic::TEXCOORD_7:
      return "attrib_texcoord_7";
    case sway::gapi::VertexSemantic::NORMAL:
      return "attrib_normal";
    case sway::gapi::VertexSemantic::TANGENT:
      return "attrib_tangent";
    case sway::gapi::VertexSemantic::BINORM:
      return "attrib_binorm";
    case sway::gapi::VertexSemantic::BLEND_WEIGHTS:
      return "attrib_blend_weights";
    case sway::gapi::VertexSemantic::BLEND_INDICES:
      return "attrib_blend_indices";
    default:
      return "unknown";
  }
}

/**
 * @example std::cout << sway::gapi::VertexSemantic::POS << std::endl;
 */
template <typename Type = char, typename Traits = std::char_traits<Type>>
inline auto operator<<(std::basic_ostream<Type, Traits> &strm, sway::gapi::VertexSemantic val)
    -> std::basic_ostream<Type, Traits> & {
  strm << stringize(val);
  return strm;
}
