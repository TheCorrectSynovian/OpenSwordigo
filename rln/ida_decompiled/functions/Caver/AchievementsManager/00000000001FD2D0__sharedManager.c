/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD2D0
 * Mangled: ._ZN5Caver19AchievementsManager13sharedManagerEv
 * Demangled: Caver::AchievementsManager::sharedManager(void)
 *
 * Callers: 7
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000210EFC  Caver::CaverShell::Update(float)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000385FFC  Caver::OfflineAchievementsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000003A7308  Caver::ProfileManager::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *
 * Callees: 1
 *   0x0000000000375F44  Caver::AchievementsManager::sharedManager(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD2D8 string=0x00000000001FD2DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AchievementsManager::sharedManager(Caver::AchievementsManager *this)
{
  return _ZN5Caver19AchievementsManager13sharedManagerEv(this);
}

