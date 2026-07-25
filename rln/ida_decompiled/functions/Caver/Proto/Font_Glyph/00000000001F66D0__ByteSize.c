/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F66D0
 * Mangled: ._ZNK5Caver5Proto10Font_Glyph8ByteSizeEv
 * Demangled: Caver::Proto::Font_Glyph::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000002D5124  Caver::Proto::Font::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002D3F44  Caver::Proto::Font_Glyph::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F66D8 string=0x00000000001F66DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Font_Glyph::ByteSize(Caver::Proto::Font_Glyph *this)
{
  return _ZNK5Caver5Proto10Font_Glyph8ByteSizeEv(this);
}

