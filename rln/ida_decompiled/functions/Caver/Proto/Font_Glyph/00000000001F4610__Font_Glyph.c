/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4610
 * Mangled: ._ZN5Caver5Proto10Font_GlyphC2Ev
 * Demangled: Caver::Proto::Font_Glyph::Font_Glyph(void)
 *
 * Callers: 1
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002D35D4  Caver::Proto::Texture::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4618 string=0x00000000001F461C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Font_Glyph::Font_Glyph(Caver::Proto::Font_Glyph *this)
{
  JUMPOUT(0x2D362C);
}

