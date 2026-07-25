/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDE50
 * Mangled: ._ZN5Caver4Font8AddGlyphERKNS0_5GlyphE
 * Demangled: Caver::Font::AddGlyph(Caver::Font::Glyph const&)
 *
 * Callers: 1
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004C2DDC  Caver::Font::AddGlyph(Caver::Font::Glyph const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDE58 string=0x00000000001FDE5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Font::AddGlyph(Caver::Font *this, const Glyph *a2)
{
  return _ZN5Caver4Font8AddGlyphERKNS0_5GlyphE(this, a2);
}

