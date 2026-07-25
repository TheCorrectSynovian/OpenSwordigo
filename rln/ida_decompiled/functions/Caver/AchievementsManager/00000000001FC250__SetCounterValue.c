/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC250
 * Mangled: ._ZN5Caver19AchievementsManager15SetCounterValueERKSsii
 * Demangled: Caver::AchievementsManager::SetCounterValue(std::string const&,int,int)
 *
 * Callers: 4
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *   0x000000000037ED68  Caver::AchievementsManager::ReportAllAchievements(void)
 *   0x00000000003A5F0C  Caver::ProfileManager::~ProfileManager()
 *   0x00000000003A7308  Caver::ProfileManager::PlayerProfileWasSaved(Caver::PlayerProfile *,bool)
 *
 * Callees: 1
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC258 string=0x00000000001FC25C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::AchievementsManager::SetCounterValue()
{
  JUMPOUT(0x37EA40);
}

