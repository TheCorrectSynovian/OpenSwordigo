/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036FA88
 * Mangled: _ZThn80_N5Caver22MainMenuViewController38MainMenuViewDidShowOfflineAchievementsEPNS_12MainMenuViewE
 * Demangled: `non-virtual thunk to'Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x000000000036F8A0  Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(Caver::MainMenuView *)
 *
 * Callees: 1
 *   0x00000000002038C0  Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(Caver::MainMenuView *)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(
        Caver::MainMenuViewController *this,
        Caver::MainMenuView *a2)
{
  return Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(
           (Caver::MainMenuViewController *)((char *)this - 80),
           a2);
}

