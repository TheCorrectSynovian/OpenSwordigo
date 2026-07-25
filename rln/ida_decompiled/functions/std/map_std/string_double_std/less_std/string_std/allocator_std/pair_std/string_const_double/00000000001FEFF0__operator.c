/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEFF0
 * Mangled: ._ZNSt3mapISsdSt4lessISsESaISt4pairIKSsdEEEixERS3_
 * Demangled: std::map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::operator[](std::string const&)
 *
 * Callers: 2
 *   0x000000000037E234  Caver::AchievementsManager::ReportPercentCompleted(boost::shared_ptr<Caver::Achievement> const&,double)
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *
 * Callees: 1
 *   0x000000000037E500  std::map<std::string,double,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEFF8 string=0x00000000001FEFFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,double>::operator[]()
{
  return _ZNSt3mapISsdSt4lessISsESaISt4pairIKSsdEEEixERS3_();
}

