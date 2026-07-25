/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200B50
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver11AchievementEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS7_ERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::string const&)
 *
 * Callers: 1
 *   0x000000000037D3B8  std::map<std::string,boost::shared_ptr<Caver::Achievement>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::operator[](std::string const&)
 *
 * Callees: 1
 *   0x000000000037F738  std::vector<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::Achievement>*,std::vector<boost::shared_ptr<Caver::Achievement>,std::allocator<boost::shared_ptr<Caver::Achievement>>>>,boost::shared_ptr<Caver::Achievement> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200B58 string=0x0000000000200B5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Achievement>>>>::_M_get_insert_hint_unique_pos()
{
  JUMPOUT(0x37FB14);
}

