/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F93A0
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsdESt10_Select1stIS2_ESt4lessISsESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,double>> *)
 *
 * Callers: 5
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *   0x000000000037E200  Caver::AchievementsManager::ClearReportedAchievementsCache(void)
 *   0x000000000037E7C4  Caver::AchievementsManager::ReportPendingAchievements(void)
 *   0x000000000037ED68  Caver::AchievementsManager::ReportAllAchievements(void)
 *   0x000000000037EF7C  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,double>> *)
 *
 * Callees: 1
 *   0x000000000037EF7C  std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,double>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F93A8 string=0x00000000001F93AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,double>,std::_Select1st<std::pair<std::string const,double>>,std::less<std::string>,std::allocator<std::pair<std::string const,double>>>::_M_erase()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsdESt10_Select1stIS2_ESt4lessISsESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E();
}

