/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002016E0
 * Mangled: ._ZN5Caver19CachesDirectoryPathEv
 * Demangled: Caver::CachesDirectoryPath(void)
 *
 * Callers: 1
 *   0x00000000004B532C  Caver::PathForCachesDirectory(std::string const&,bool)
 *
 * Callees: 1
 *   0x00000000004B4670  Caver::CachesDirectoryPath(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002016E8 string=0x00000000002016EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CachesDirectoryPath(Caver *this)
{
  return _ZN5Caver19CachesDirectoryPathEv(this);
}

