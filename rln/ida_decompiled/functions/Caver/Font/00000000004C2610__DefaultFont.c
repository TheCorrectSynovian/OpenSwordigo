/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C2610
 * Mangled: _ZN5Caver4Font11DefaultFontEv
 * Demangled: Caver::Font::DefaultFont(void)
 *
 * Callers: 1
 *   0x00000000001FD740  Caver::Font::DefaultFont(void)
 *
 * Callees: 2
 *   0x00000000001FD9B0  Caver::FontLibrary::DefaultFont(void)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004C2630 string=0x00000000001FD9B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Font::DefaultFont(Caver::Font *this)
{
  Caver::FontLibrary *v1; // x0

  v1 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(this);
  Caver::FontLibrary::DefaultFont(v1);
}

