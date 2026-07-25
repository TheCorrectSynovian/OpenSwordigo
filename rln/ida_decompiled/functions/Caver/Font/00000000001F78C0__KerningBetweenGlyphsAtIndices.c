/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F78C0
 * Mangled: ._ZN5Caver4Font29KerningBetweenGlyphsAtIndicesEii
 * Demangled: Caver::Font::KerningBetweenGlyphsAtIndices(int,int)
 *
 * Callers: 1
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004C2F20  Caver::Font::KerningBetweenGlyphsAtIndices(int,int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F78C4 string=0x00000000004C2F20 " @"
 *   insn=0x00000000001F78C8 string=0x00000000001F78CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Font::KerningBetweenGlyphsAtIndices(Caver::Font *this, int a2, int a3)
{
  return _ZN5Caver4Font29KerningBetweenGlyphsAtIndicesEii(this, a2, a3);
}

