/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCB90
 * Mangled: ._ZN5Caver13ObjectLibrary10SaveToFileERKSs
 * Demangled: Caver::ObjectLibrary::SaveToFile(std::string const&)
 *
 * Callers: 1
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCB98 string=0x00000000001FCB9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ObjectLibrary::SaveToFile()
{
  JUMPOUT(0x45BFE4);
}

