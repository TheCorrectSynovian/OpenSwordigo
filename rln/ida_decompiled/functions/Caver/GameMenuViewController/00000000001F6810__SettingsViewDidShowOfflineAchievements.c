/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6810
 * Mangled: ._ZN5Caver22GameMenuViewController38SettingsViewDidShowOfflineAchievementsEPNS_12SettingsViewE
 * Demangled: Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements(Caver::SettingsView *)
 *
 * Callers: 1
 *   0x0000000000346184  boost::shared_ptr<Caver::OfflineAchievementsViewController>::shared_ptr<Caver::OfflineAchievementsViewController>(Caver::OfflineAchievementsViewController *)
 *
 * Callees: 1
 *   0x0000000000345F34  Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements(Caver::SettingsView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6818 string=0x00000000001F681C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameMenuViewController::SettingsViewDidShowOfflineAchievements(
        Caver::GameMenuViewController *this,
        Caver::SettingsView *a2)
{
  return _ZN5Caver22GameMenuViewController38SettingsViewDidShowOfflineAchievementsEPNS_12SettingsViewE(this, a2);
}

