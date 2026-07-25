/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201710
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13PlayerProfileEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE24_M_get_insert_unique_posERS1_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Callers: 1
 *   0x00000000003A7A1C  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::string const&)
 *
 * Callees: 1
 *   0x00000000003A7C54  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_get_insert_unique_pos(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201718 string=0x000000000020171C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::PlayerProfile>>>>::_M_get_insert_unique_pos()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13PlayerProfileEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE24_M_get_insert_unique_posERS1_();
}

