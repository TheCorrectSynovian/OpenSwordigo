/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F93B0
 * Mangled: ._ZN5Caver16OnlineController16SharedControllerEv
 * Demangled: Caver::OnlineController::SharedController(void)
 *
 * Callers: 29
 *   0x0000000000347EFC  Caver::GameOverViewController::ShowAdMaybe(void)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *   0x000000000036BE98  Caver::MainMenuViewController::GoogleSignInCompletion(bool,std::string const&)
 *   0x000000000036C420  Caver::MainMenuViewController::ResumeView(void)
 *   0x000000000036C584  Caver::MainMenuViewController::Update(float)
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *   0x000000000036E598  `non-virtual thunk to'Caver::MainMenuViewController::MainMenuViewDidOpenPrivacyPolicy(Caver::MainMenuView *)
 *   0x000000000036E764  Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *   0x000000000036E838  Caver::MainMenuViewController::AlertViewWasDismissed(Caver::GUIAlertView *)
 *   0x000000000037D8F4  Caver::AchievementsManager::Update(float)
 *   0x000000000037DC80  Caver::AchievementsManager::SetAchievementCompleted(boost::shared_ptr<Caver::Achievement> const&,bool)
 *   0x000000000037E1BC  Caver::AchievementsManager::ReportScore(std::string const&,long long,std::string const&)
 *   0x000000000037E234  Caver::AchievementsManager::ReportPercentCompleted(boost::shared_ptr<Caver::Achievement> const&,double)
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000385748  Caver::OfflineAchievementsViewController::LoadView(void)
 *   0x0000000000385FFC  Caver::OfflineAchievementsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x000000000039465C  Caver::MainMenuView::Update(float)
 *   0x000000000039706C  Caver::OnlineMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x000000000039FB4C  Caver::ProfilePanelView::DeleteTextFieldValueChanged(void *,Caver::GUIEvent *)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *   0x0000000000439CFC  Caver::SettingsView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000004BB8D0  Caver::ProfileManager_Android::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *
 * Callees: 1
 *   0x0000000000389004  Caver::OnlineController::SharedController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F93B8 string=0x00000000001F93BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController::SharedController(Caver::OnlineController *this)
{
  return _ZN5Caver16OnlineController16SharedControllerEv(this);
}

