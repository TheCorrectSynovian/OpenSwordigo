/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5240
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13GUIViewLayoutEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> *)
 *
 * Callers: 3
 *   0x00000000003B5484  Caver::GUIViewLayout::~GUIViewLayout()
 *   0x00000000003B56BC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> *)
 *   0x00000000003D86E0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> const*,std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>*)
 *
 * Callees: 1
 *   0x00000000003B56BC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5248 string=0x00000000001F524C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_erase()
{
  return _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13GUIViewLayoutEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E();
}

