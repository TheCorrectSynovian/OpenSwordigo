/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C25C8
 * Mangled: _ZN5Caver4Font10SystemFontEv
 * Demangled: Caver::Font::SystemFont(void)
 *
 * Callers: 1
 *   0x0000000000200F60  Caver::Font::SystemFont(void)
 *
 * Callees: 2
 *   0x00000000001FBF80  Caver::FontLibrary::SystemFont(void)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000004C25E4 string=0x00000000004C25E8 "f"
 *   insn=0x00000000004C25E8 string=0x00000000001FBF80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Font::SystemFont(Caver::Font *this)
{
  Caver::FontLibrary *v1; // x0

  v1 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(this);
  return Caver::FontLibrary::SystemFont(v1);
}

