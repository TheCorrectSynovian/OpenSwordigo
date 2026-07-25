/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA920
 * Mangled: ._ZN5Caver21AndroidDeleteSnapshotERKSs
 * Demangled: Caver::AndroidDeleteSnapshot(std::string const&)
 *
 * Callers: 1
 *   0x00000000004BB7B8  Caver::ProfileManager_Android::DeleteProfileWithIdentifier(std::string const&)
 *
 * Callees: 1
 *   0x000000000047B49C  Caver::AndroidDeleteSnapshot(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA928 string=0x00000000001FA92C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AndroidDeleteSnapshot()
{
  return _ZN5Caver21AndroidDeleteSnapshotERKSs();
}

