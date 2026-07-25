/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C25EC
 * Mangled: _ZN5Caver4Font15SmallSystemFontEv
 * Demangled: Caver::Font::SmallSystemFont(void)
 *
 * Callers: 1
 *   0x00000000001F9930  Caver::Font::SmallSystemFont(void)
 *
 * Callees: 2
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *   0x0000000000200820  Caver::FontLibrary::SmallSystemFont(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Font::SmallSystemFont(Caver::Font *this)
{
  Caver::FontLibrary *v1; // x0

  v1 = (Caver::FontLibrary *)Caver::FontLibrary::sharedLibrary(this);
  Caver::FontLibrary::SmallSystemFont(v1);
}

