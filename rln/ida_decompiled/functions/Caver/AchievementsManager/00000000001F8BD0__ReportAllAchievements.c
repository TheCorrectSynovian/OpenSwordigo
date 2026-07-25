/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8BD0
 * Mangled: ._ZN5Caver19AchievementsManager21ReportAllAchievementsEv
 * Demangled: Caver::AchievementsManager::ReportAllAchievements(void)
 *
 * Callers: 2
 *   0x0000000000385FFC  Caver::OfflineAchievementsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x000000000037ED68  Caver::AchievementsManager::ReportAllAchievements(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8BD8 string=0x00000000001F8BDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AchievementsManager::ReportAllAchievements(Caver::AchievementsManager *this)
{
  return _ZN5Caver19AchievementsManager21ReportAllAchievementsEv(this);
}

