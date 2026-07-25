/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8040
 * Mangled: ._ZN5Caver32PathForResourceOfTypeInDirectoryERKSsS1_S1_
 * Demangled: Caver::PathForResourceOfTypeInDirectory(std::string const&,std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *
 * Callees: 1
 *   0x00000000004B3318  Caver::PathForResourceOfType(std::string const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8048 string=0x00000000001F804C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::PathForResourceOfTypeInDirectory()
{
  JUMPOUT(0x4B3464);
}

