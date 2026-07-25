/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4980
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver11AchievementEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE4findERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::find(std::string const&)
 *
 * Callers: 1
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *
 * Callees: 1
 *   0x000000000037FE8C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::Achievement>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4988 string=0x00000000001F498C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::find()
{
  JUMPOUT(0x37FF08);
}

