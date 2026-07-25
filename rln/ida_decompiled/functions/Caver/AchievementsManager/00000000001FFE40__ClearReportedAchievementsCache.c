/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFE40
 * Mangled: ._ZN5Caver19AchievementsManager30ClearReportedAchievementsCacheEv
 * Demangled: Caver::AchievementsManager::ClearReportedAchievementsCache(void)
 *
 * Callers: 1
 *   0x0000000000385FFC  Caver::OfflineAchievementsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x000000000037E200  Caver::AchievementsManager::ClearReportedAchievementsCache(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFE48 string=0x00000000001FFE4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AchievementsManager::ClearReportedAchievementsCache(Caver::AchievementsManager *this)
{
  return _ZN5Caver19AchievementsManager30ClearReportedAchievementsCacheEv(this);
}

