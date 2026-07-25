/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5D20
 * Mangled: ._ZNSt8_Rb_treeIjjSt9_IdentityIjESt4lessIjESaIjEE8_M_eraseEPSt13_Rb_tree_nodeIjE
 * Demangled: std::_Rb_tree<uint,uint,std::_Identity<uint>,std::less<uint>,std::allocator<uint>>::_M_erase(std::_Rb_tree_node<uint> *)
 *
 * Callers: 4
 *   0x00000000004A1CD0  Caver::GUIWindow::~GUIWindow()
 *   0x00000000004A3B08  Caver::GUIWindow::SetFirstResponder(boost::shared_ptr<Caver::GUIView> const&)
 *   0x00000000004A512C  std::_Rb_tree<uint,uint,std::_Identity<uint>,std::less<uint>,std::allocator<uint>>::_M_erase(std::_Rb_tree_node<uint> *)
 *   0x00000000004A599C  std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FWTouch*,std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>>,Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004A512C  std::_Rb_tree<uint,uint,std::_Identity<uint>,std::less<uint>,std::allocator<uint>>::_M_erase(std::_Rb_tree_node<uint> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5D28 string=0x00000000001F5D2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_erase()
{
  return _ZNSt8_Rb_treeIjjSt9_IdentityIjESt4lessIjESaIjEE8_M_eraseEPSt13_Rb_tree_nodeIjE();
}

