/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEDE0
 * Mangled: ._ZN5Caver5Proto13PlayerProfileC2Ev
 * Demangled: Caver::Proto::PlayerProfile::PlayerProfile(void)
 *
 * Callers: 4
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *   0x00000000003C0CE0  Caver::PlayerProfile::LoadFromPath(std::string const&,bool)
 *   0x00000000004BB8D0  Caver::ProfileManager_Android::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 1
 *   0x00000000002E9374  Caver::Proto::PlayerProfile_Counter::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEDE8 string=0x00000000001FEDEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PlayerProfile::PlayerProfile(Caver::Proto::PlayerProfile *this)
{
  JUMPOUT(0x2E93CC);
}

