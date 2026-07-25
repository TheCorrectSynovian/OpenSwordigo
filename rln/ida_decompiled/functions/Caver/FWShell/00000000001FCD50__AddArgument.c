/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCD50
 * Mangled: ._ZN5Caver7FWShell11AddArgumentERKSs
 * Demangled: Caver::FWShell::AddArgument(std::string const&)
 *
 * Callers: 1
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *
 * Callees: 1
 *   0x000000000047DA4C  Caver::FWShell::AddArgument(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCD58 string=0x00000000001FCD5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FWShell::AddArgument()
{
  return _ZN5Caver7FWShell11AddArgumentERKSs();
}

