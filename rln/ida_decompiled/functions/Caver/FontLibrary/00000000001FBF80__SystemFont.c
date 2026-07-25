/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBF80
 * Mangled: ._ZN5Caver11FontLibrary10SystemFontEv
 * Demangled: Caver::FontLibrary::SystemFont(void)
 *
 * Callers: 1
 *   0x00000000004C25C8  Caver::Font::SystemFont(void)
 *
 * Callees: 1
 *   0x00000000004C40DC  Caver::FontLibrary::SystemFont(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBF88 string=0x00000000001FBF8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FontLibrary::SystemFont(Caver::FontLibrary *this)
{
  return _ZN5Caver11FontLibrary10SystemFontEv(this);
}

