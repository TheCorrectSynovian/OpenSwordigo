/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5F20
 * Mangled: ._ZN5Caver19AndroidLoadSnapshotERKSsd
 * Demangled: Caver::AndroidLoadSnapshot(std::string const&,double)
 *
 * Callers: 1
 *   0x00000000004BB720  Caver::ProfileManager_Android::~ProfileManager_Android()
 *
 * Callees: 1
 *   0x000000000047B2EC  Caver::AndroidLoadSnapshot(std::string const&,double)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5F28 string=0x00000000001F5F2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AndroidLoadSnapshot()
{
  return _ZN5Caver19AndroidLoadSnapshotERKSsd();
}

