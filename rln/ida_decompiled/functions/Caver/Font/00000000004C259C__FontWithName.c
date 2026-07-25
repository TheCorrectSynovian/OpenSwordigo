/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C259C
 * Mangled: _ZN5Caver4Font12FontWithNameERKSs
 * Demangled: Caver::Font::FontWithName(std::string const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7850  Caver::FontLibrary::FontWithName(std::string const&)
 *   0x00000000001FEC20  Caver::FontLibrary::sharedLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004C25C4 string=0x00000000001F7850 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Font::FontWithName(Caver::FontLibrary *a1)
{
  Caver::FontLibrary::sharedLibrary(a1);
  return Caver::FontLibrary::FontWithName();
}

