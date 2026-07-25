/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7980
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver11AchievementEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::operator[](std::string const&)
 *
 * Callers: 3
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *   0x000000000037D8F4  Caver::AchievementsManager::Update(float)
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *
 * Callees: 1
 *   0x000000000037D3B8  std::map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7988 string=0x00000000001F798C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::Achievement>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIN5Caver11AchievementEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_();
}

