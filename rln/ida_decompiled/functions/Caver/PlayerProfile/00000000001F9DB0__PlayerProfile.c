/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9DB0
 * Mangled: ._ZN5Caver13PlayerProfileC2Ev
 * Demangled: Caver::PlayerProfile::PlayerProfile(void)
 *
 * Callers: 4
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000004BBE60  Caver::ProfileManager_Android::HandleDownloadedProfileData(std::string const&)
 *
 * Callees: 1
 *   0x00000000003BFA34  Caver::PlayerProfile::PlayerProfile(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9DB8 string=0x00000000001F9DBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PlayerProfile::PlayerProfile(Caver::PlayerProfile *this)
{
  return _ZN5Caver13PlayerProfileC2Ev(this);
}

