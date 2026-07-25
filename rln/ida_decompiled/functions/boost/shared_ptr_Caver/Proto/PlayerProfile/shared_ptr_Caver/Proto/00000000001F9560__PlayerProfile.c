/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9560
 * Mangled: ._ZN5boost10shared_ptrIN5Caver5Proto13PlayerProfileEEC2IS3_EEPT_
 * Demangled: boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>(Caver::Proto::PlayerProfile *)
 *
 * Callers: 2
 *   0x00000000004BB8D0  Caver::ProfileManager_Android::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 1
 *   0x00000000004BBB00  boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>(Caver::Proto::PlayerProfile *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9568 string=0x00000000001F956C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::Proto::PlayerProfile>::shared_ptr<Caver::Proto::PlayerProfile>()
{
  return _ZN5boost10shared_ptrIN5Caver5Proto13PlayerProfileEEC2IS3_EEPT_();
}

