/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDF50
 * Mangled: ._ZN5Caver13PlayerProfile13LocalFilePathEv
 * Demangled: Caver::PlayerProfile::LocalFilePath(void)
 *
 * Callers: 5
 *   0x00000000003BFA90  Caver::PlayerProfile::ProfileExists(void)
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *   0x00000000003C0BB0  Caver::PlayerProfile::Load(void)
 *   0x00000000003C0CE0  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 1
 *   0x00000000003BFBB4  Caver::PlayerProfile::LocalFilePath(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDF58 string=0x00000000001FDF5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PlayerProfile::LocalFilePath(Caver::PlayerProfile *this)
{
  return _ZN5Caver13PlayerProfile13LocalFilePathEv(this);
}

