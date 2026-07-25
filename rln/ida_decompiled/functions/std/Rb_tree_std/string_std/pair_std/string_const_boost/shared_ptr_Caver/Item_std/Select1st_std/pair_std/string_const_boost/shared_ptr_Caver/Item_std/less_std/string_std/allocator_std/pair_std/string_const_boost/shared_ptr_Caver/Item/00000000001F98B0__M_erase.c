/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F98B0
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver4ItemEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Item>>> *)
 *
 * Callers: 2
 *   0x00000000003C21BC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Item>>> *)
 *   0x00000000003C2AE0  Caver::GameData::~GameData()
 *
 * Callees: 1
 *   0x00000000003C21BC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::Item>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F98B8 string=0x00000000001F98BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::Item>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::Item>>>>::_M_erase()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver4ItemEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E();
}

