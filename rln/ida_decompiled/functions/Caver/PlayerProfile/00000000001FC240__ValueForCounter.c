/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC240
 * Mangled: ._ZN5Caver13PlayerProfile15ValueForCounterERKSs
 * Demangled: Caver::PlayerProfile::ValueForCounter(std::string const&)
 *
 * Callers: 3
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *   0x000000000037ED68  Caver::AchievementsManager::ReportAllAchievements(void)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x00000000003C1C9C  Caver::PlayerProfile::ValueForCounter(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC248 string=0x00000000001FC24C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PlayerProfile::ValueForCounter()
{
  return _ZN5Caver13PlayerProfile15ValueForCounterERKSs();
}

