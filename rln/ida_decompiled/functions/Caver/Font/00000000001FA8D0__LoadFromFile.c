/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA8D0
 * Mangled: ._ZN5Caver4Font12LoadFromFileERKSs
 * Demangled: Caver::Font::LoadFromFile(std::string const&)
 *
 * Callers: 1
 *   0x00000000004C3480  Caver::FontLibrary::FontWithName(std::string const&)
 *
 * Callees: 1
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA8D8 string=0x00000000001FA8DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Font::LoadFromFile()
{
  return _ZN5Caver4Font12LoadFromFileERKSs();
}

