/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7CE0
 * Mangled: ._ZN5Caver33OfflineAchievementsViewControllerC2Ev
 * Demangled: Caver::OfflineAchievementsViewController::OfflineAchievementsViewController(void)
 *
 * Callers: 2
 *   0x0000000000345F34  Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements(Caver::SettingsView *)
 *   0x000000000036F8A0  Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(Caver::MainMenuView *)
 *
 * Callees: 1
 *   0x00000000003850AC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OfflineAchievementView,Caver::OfflineAchievementView>(boost::shared_ptr<Caver::OfflineAchievementView> const*,Caver::OfflineAchievementView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7CE8 string=0x00000000001F7CEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::OfflineAchievementsViewController::OfflineAchievementsViewController(
        Caver::OfflineAchievementsViewController *this)
{
  JUMPOUT(0x3855A8);
}

