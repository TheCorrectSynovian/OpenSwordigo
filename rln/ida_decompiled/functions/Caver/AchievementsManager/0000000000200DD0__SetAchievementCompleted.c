/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200DD0
 * Mangled: ._ZN5Caver19AchievementsManager23SetAchievementCompletedERKN5boost10shared_ptrINS_11AchievementEEEb
 * Demangled: Caver::AchievementsManager::SetAchievementCompleted(boost::shared_ptr<Caver::Achievement> const&,bool)
 *
 * Callers: 1
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *
 * Callees: 1
 *   0x000000000037DC80  Caver::AchievementsManager::SetAchievementCompleted(boost::shared_ptr<Caver::Achievement> const&,bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200DD8 string=0x0000000000200DDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AchievementsManager::SetAchievementCompleted()
{
  return _ZN5Caver19AchievementsManager23SetAchievementCompletedERKN5boost10shared_ptrINS_11AchievementEEEb();
}

