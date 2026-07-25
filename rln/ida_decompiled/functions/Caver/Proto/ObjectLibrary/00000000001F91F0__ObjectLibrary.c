/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F91F0
 * Mangled: ._ZN5Caver5Proto13ObjectLibraryC2Ev
 * Demangled: Caver::Proto::ObjectLibrary::ObjectLibrary(void)
 *
 * Callers: 3
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002FC8F8  Caver::Proto::ObjectTemplate::GetTypeName(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F91F4 string=0x00000000002FC950 "H"
 *   insn=0x00000000001F91F8 string=0x00000000001F91FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary *this)
{
  JUMPOUT(0x2FC950);
}

