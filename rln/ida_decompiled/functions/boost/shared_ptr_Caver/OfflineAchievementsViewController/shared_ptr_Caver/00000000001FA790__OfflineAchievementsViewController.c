/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA790
 * Mangled: ._ZN5boost10shared_ptrIN5Caver33OfflineAchievementsViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>(Caver::OfflineAchievementsViewController *)
 *
 * Callers: 2
 *   0x0000000000345F34  Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements(Caver::SettingsView *)
 *   0x000000000036F8A0  Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(Caver::MainMenuView *)
 *
 * Callees: 1
 *   0x0000000000346184  boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>(Caver::OfflineAchievementsViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA798 string=0x00000000001FA79C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>()
{
  return _ZN5boost10shared_ptrIN5Caver33OfflineAchievementsViewControllerEEC2IS2_EEPT_();
}

