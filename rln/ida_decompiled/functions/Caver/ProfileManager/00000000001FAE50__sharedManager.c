/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAE50
 * Mangled: ._ZN5Caver14ProfileManager13sharedManagerEv
 * Demangled: Caver::ProfileManager::sharedManager(void)
 *
 * Callers: 14
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000351478  Caver::GameViewController::~GameViewController()
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x000000000036B0D0  Caver::MainMenuViewController::~MainMenuViewController()
 *   0x000000000036BE98  Caver::MainMenuViewController::GoogleSignInCompletion(bool,std::string const&)
 *   0x000000000036C420  Caver::MainMenuViewController::ResumeView(void)
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *   0x000000000036E914  Caver::MainMenuViewController::ProfileSelectionViewControllerDidStart(Caver::ProfileSelectionView *,boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000037ED68  Caver::AchievementsManager::ReportAllAchievements(void)
 *   0x0000000000385748  Caver::OfflineAchievementsViewController::LoadView(void)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003A25BC  Caver::ProfileSelectionView::ProfilePanelDidDeleteProfile(Caver::ProfilePanelView *)
 *
 * Callees: 1
 *   0x00000000003A5D0C  Caver::ProfileManager::sharedManager(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAE58 string=0x00000000001FAE5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ProfileManager::sharedManager(Caver::ProfileManager *this)
{
  return _ZN5Caver14ProfileManager13sharedManagerEv(this);
}

