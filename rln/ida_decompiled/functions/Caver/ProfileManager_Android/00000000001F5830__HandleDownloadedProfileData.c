/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5830
 * Mangled: ._ZN5Caver22ProfileManager_Android27HandleDownloadedProfileDataERKSs
 * Demangled: Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callers: 1
 *   0x00000000004BBDCC  Caver::ProfileManager_Android::HandleSnapshotLoaded(std::string const&,std::string const&)
 *
 * Callees: 1
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5838 string=0x00000000001F583C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ProfileManager_Android::HandleDownloadedProfileData()
{
  return _ZN5Caver22ProfileManager_Android27HandleDownloadedProfileDataERKSs();
}

