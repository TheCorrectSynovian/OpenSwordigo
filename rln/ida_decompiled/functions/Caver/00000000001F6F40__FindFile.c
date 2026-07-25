/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6F40
 * Mangled: ._ZN5Caver8FindFileERKSsS1_
 * Demangled: Caver::FindFile(std::string const&,std::string const&)
 *
 * Callers: 2
 *   0x000000000045AC60  Caver::ObjectLibrary::LibraryWithName(std::string const&)
 *   0x000000000045B78C  Caver::ObjectLibrary::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000004B54E8  Caver::FindFile(std::string const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6F48 string=0x00000000001F6F4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FindFile()
{
  return _ZN5Caver8FindFileERKSsS1_();
}

