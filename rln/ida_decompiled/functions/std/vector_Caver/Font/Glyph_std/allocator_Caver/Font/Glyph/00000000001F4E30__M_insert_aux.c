/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4E30
 * Mangled: ._ZNSt6vectorIN5Caver4Font5GlyphESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Font::Glyph*,std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>>,Caver::Font::Glyph const&)
 *
 * Callers: 1
 *   0x00000000004C2DDC  Caver::Font::AddGlyph(Caver::Font::Glyph const&)
 *
 * Callees: 1
 *   0x00000000004C3174  std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::Font::Glyph*,std::vector<Caver::Font::Glyph,std::allocator<Caver::Font::Glyph>>>,Caver::Font::Glyph const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4E38 string=0x00000000001F4E3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<Caver::Font::Glyph>::_M_insert_aux()
{
  return _ZNSt6vectorIN5Caver4Font5GlyphESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_();
}

