/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA670
 * Mangled: ._ZN5Caver22ProfileManager_Android20HandleSnapshotLoadedERKSsS2_
 * Demangled: Caver::ProfileManager_Android::HandleSnapshotLoaded(std::string const&,std::string const&)
 *
 * Callers: 1
 *   0x000000000047A834  Java_com_touchfoo_swordigo_Native_snapshotLoaded
 *
 * Callees: 1
 *   0x00000000004BBDCC  Caver::ProfileManager_Android::HandleSnapshotLoaded(std::string const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA678 string=0x00000000001FA67C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProfileManager_Android::HandleSnapshotLoaded()
{
  return _ZN5Caver22ProfileManager_Android20HandleSnapshotLoadedERKSsS2_();
}

