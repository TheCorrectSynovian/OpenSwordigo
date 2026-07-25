/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002038C0
 * Mangled: ._ZN5Caver22MainMenuViewController38MainMenuViewDidShowOfflineAchievementsEPNS_12MainMenuViewE
 * Demangled: Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x000000000036FA88  `non-virtual thunk to'Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(Caver::MainMenuView *)
 *
 * Callees: 1
 *   0x000000000036F8A0  Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(Caver::MainMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002038C8 string=0x00000000002038CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MainMenuViewController::MainMenuViewDidShowOfflineAchievements(
        Caver::MainMenuViewController *this,
        Caver::MainMenuView *a2)
{
  return _ZN5Caver22MainMenuViewController38MainMenuViewDidShowOfflineAchievementsEPNS_12MainMenuViewE(this, a2);
}

