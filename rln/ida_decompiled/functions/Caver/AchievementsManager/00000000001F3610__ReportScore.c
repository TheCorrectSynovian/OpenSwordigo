/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3610
 * Mangled: ._ZN5Caver19AchievementsManager11ReportScoreERKSsxS2_
 * Demangled: Caver::AchievementsManager::ReportScore(std::string const&,long long,std::string const&)
 *
 * Callers: 1
 *   0x00000000003A7308  Caver::ProfileManager::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *
 * Callees: 1
 *   0x000000000037E1BC  Caver::AchievementsManager::ReportScore(std::string const&,long long,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3618 string=0x00000000001F361C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AchievementsManager::ReportScore()
{
  return _ZN5Caver19AchievementsManager11ReportScoreERKSsxS2_();
}

