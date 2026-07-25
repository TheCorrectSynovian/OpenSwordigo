/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD830
 * Mangled: ._ZN5Caver13PlayerProfile4LoadEv
 * Demangled: Caver::PlayerProfile::Load(void)
 *
 * Callers: 3
 *   0x0000000000351C5C  Caver::GameViewController::LoadGameState(void)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 1
 *   0x00000000003C0BB0  Caver::PlayerProfile::Load(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD838 string=0x00000000001FD83C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PlayerProfile::Load(Caver::PlayerProfile *this)
{
  return _ZN5Caver13PlayerProfile4LoadEv(this);
}

