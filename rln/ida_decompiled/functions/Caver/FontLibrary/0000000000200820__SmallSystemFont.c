/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200820
 * Mangled: ._ZN5Caver11FontLibrary15SmallSystemFontEv
 * Demangled: Caver::FontLibrary::SmallSystemFont(void)
 *
 * Callers: 1
 *   0x00000000004C25EC  Caver::Font::SmallSystemFont(void)
 *
 * Callees: 1
 *   0x00000000004C40DC  Caver::FontLibrary::SystemFont(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200828 string=0x000000000020082C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::FontLibrary::SmallSystemFont(Caver::FontLibrary *this)
{
  JUMPOUT(0x4C4220);
}

