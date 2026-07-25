/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDA70
 * Mangled: ._ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN5Caver13GUIViewLayoutEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE14_M_create_nodeERKS7_
 * Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>> const&)
 *
 * Callers: 2
 *   0x00000000003D86E0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> const*,std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>*)
 *   0x00000000004A8450  std::map<std::string,boost::shared_ptr<Caver::GUIViewLayout>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::operator[](std::string const&)
 *
 * Callees: 1
 *   0x00000000003D86E0  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_copy(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>> const*,std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDA78 string=0x00000000001FDA7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIViewLayout>>>>::_M_create_node()
{
  JUMPOUT(0x3D87CC);
}

