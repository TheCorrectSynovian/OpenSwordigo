/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6FD0
 * Mangled: ._ZN5Caver19AchievementsManager25ReportPendingAchievementsEv
 * Demangled: Caver::AchievementsManager::ReportPendingAchievements(void)
 *
 * Callers: 2
 *   0x0000000000385FFC  Caver::OfflineAchievementsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003A7308  Caver::ProfileManager::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *
 * Callees: 1
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6FD8 string=0x00000000001F6FDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AchievementsManager::ReportPendingAchievements(Caver::AchievementsManager *this)
{
  return _ZN5Caver19AchievementsManager25ReportPendingAchievementsEv(this);
}

