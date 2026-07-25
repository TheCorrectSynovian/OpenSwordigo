/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C2634
 * Mangled: _ZN5Caver4Font16SmallDefaultFontEv
 * Demangled: Caver::Font::SmallDefaultFont(void)
 *
 * Callers: 1
 *   0x00000000001F7E20  Caver::Font::SmallDefaultFont(void)
 *
 * Callees: 2
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x00000000002026D0  Caver::FontLibrary::SmallDefaultFont(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004C2640 string=0x00000000004C2644 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Font::SmallDefaultFont(Caver::Font *this)
{
  Caver::FontLibrary *v1; // x0

  v1 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(this);
  Caver::FontLibrary::SmallDefaultFont(v1);
}

