/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC0F0
 * Mangled: ._ZN5Caver19AchievementsManager22ReportPercentCompletedERKN5boost10shared_ptrINS_11AchievementEEEd
 * Demangled: Caver::AchievementsManager::ReportPercentCompleted(boost::shared_ptr<Caver::Achievement> const&,double)
 *
 * Callers: 1
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *
 * Callees: 1
 *   0x000000000037E234  Caver::AchievementsManager::ReportPercentCompleted(boost::shared_ptr<Caver::Achievement> const&,double)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC0F8 string=0x00000000001FC0FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AchievementsManager::ReportPercentCompleted()
{
  return _ZN5Caver19AchievementsManager22ReportPercentCompletedERKN5boost10shared_ptrINS_11AchievementEEEd();
}

