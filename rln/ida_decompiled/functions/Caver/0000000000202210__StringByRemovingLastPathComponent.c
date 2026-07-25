/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202210
 * Mangled: ._ZN5Caver33StringByRemovingLastPathComponentERKSs
 * Demangled: Caver::StringByRemovingLastPathComponent(std::string const&)
 *
 * Callers: 1
 *   0x000000000047D2A0  Caver::FindFileFromParentDirectories(std::string const&,std::string)
 *
 * Callees: 1
 *   0x00000000004B50F0  Caver::StringByRemovingLastPathComponent(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202218 string=0x000000000020221C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StringByRemovingLastPathComponent()
{
  return _ZN5Caver33StringByRemovingLastPathComponentERKSs();
}

