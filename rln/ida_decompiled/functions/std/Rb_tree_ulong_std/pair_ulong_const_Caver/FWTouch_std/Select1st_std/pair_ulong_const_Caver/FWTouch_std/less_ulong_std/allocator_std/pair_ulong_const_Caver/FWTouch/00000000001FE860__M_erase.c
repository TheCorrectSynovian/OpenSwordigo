/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE860
 * Mangled: ._ZNSt8_Rb_treeImSt4pairIKmN5Caver7FWTouchEESt10_Select1stIS4_ESt4lessImESaIS4_EE8_M_eraseEPSt13_Rb_tree_nodeIS4_E
 * Demangled: std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,Caver::FWTouch>> *)
 *
 * Callers: 3
 *   0x00000000004A1CD0  Caver::GUIWindow::~GUIWindow()
 *   0x00000000004A50E0  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,Caver::FWTouch>> *)
 *   0x00000000004A56F4  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_create_node(std::pair<ulong const,Caver::FWTouch> const&)
 *
 * Callees: 1
 *   0x00000000004A50E0  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,Caver::FWTouch>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE868 string=0x00000000001FE86C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<unsigned long,std::pair<unsigned long const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned long const,Caver::FWTouch>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Caver::FWTouch>>>::_M_erase()
{
  return _ZNSt8_Rb_treeImSt4pairIKmN5Caver7FWTouchEESt10_Select1stIS4_ESt4lessImESaIS4_EE8_M_eraseEPSt13_Rb_tree_nodeIS4_E();
}

