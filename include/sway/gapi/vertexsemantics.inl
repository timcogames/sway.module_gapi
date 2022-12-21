#include <sway/gapi/vertexsemantics.hpp>

#include <string>

template <typename Type = char, typename Traits = std::char_traits<Type>>
inline std::basic_ostream<Type, Traits> &operator<<(
    std::basic_ostream<Type, Traits> &stream, sway::gapi::VertexSemantic value) {
  switch (value) {
    case sway::gapi::VertexSemantic::POS:
      return stream << "attrib_pos";
    case sway::gapi::VertexSemantic::COL:
      return stream << "attrib_col";
    case sway::gapi::VertexSemantic::TEX_COORD_0:
      return stream << "attrib_tex_coord_0";
    case sway::gapi::VertexSemantic::TEX_COORD_1:
      return stream << "attrib_tex_coord_1";
    case sway::gapi::VertexSemantic::TEX_COORD_2:
      return stream << "attrib_tex_coord_2";
    case sway::gapi::VertexSemantic::TEX_COORD_3:
      return stream << "attrib_tex_coord_3";
    case sway::gapi::VertexSemantic::TEX_COORD_4:
      return stream << "attrib_tex_coord_4";
    case sway::gapi::VertexSemantic::TEX_COORD_5:
      return stream << "attrib_tex_coord_5";
    case sway::gapi::VertexSemantic::TEX_COORD_6:
      return stream << "attrib_tex_coord_6";
    case sway::gapi::VertexSemantic::TEX_COORD_7:
      return stream << "attrib_tex_coord_7";
    case sway::gapi::VertexSemantic::NORMAL:
      return stream << "attrib_normal";
    case sway::gapi::VertexSemantic::TANGENT:
      return stream << "attrib_tangent";
    case sway::gapi::VertexSemantic::BINORM:
      return stream << "attrib_binorm";
    case sway::gapi::VertexSemantic::BLEND_WEIGHTS:
      return stream << "attrib_blend_weights";
    case sway::gapi::VertexSemantic::BLEND_INDICES:
      return stream << "attrib_blend_indices";
    default:
      return stream << "unknown";
  }
}

template <typename Type = char, typename Traits = std::char_traits<Type>, typename Alloc = std::allocator<Type>>
inline std::basic_string<Type, Traits, Alloc> stringize(sway::gapi::VertexSemantic value) {
  switch (value) {
    case sway::gapi::VertexSemantic::POS:
      return "attrib_pos";
    case sway::gapi::VertexSemantic::COL:
      return "attrib_col";
    case sway::gapi::VertexSemantic::TEX_COORD_0:
      return "attrib_tex_coord_0";
    case sway::gapi::VertexSemantic::TEX_COORD_1:
      return "attrib_tex_coord_1";
    case sway::gapi::VertexSemantic::TEX_COORD_2:
      return "attrib_tex_coord_2";
    case sway::gapi::VertexSemantic::TEX_COORD_3:
      return "attrib_tex_coord_3";
    case sway::gapi::VertexSemantic::TEX_COORD_4:
      return "attrib_tex_coord_4";
    case sway::gapi::VertexSemantic::TEX_COORD_5:
      return "attrib_tex_coord_5";
    case sway::gapi::VertexSemantic::TEX_COORD_6:
      return "attrib_tex_coord_6";
    case sway::gapi::VertexSemantic::TEX_COORD_7:
      return "attrib_tex_coord_7";
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
