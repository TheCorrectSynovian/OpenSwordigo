/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6A10
 * Mangled: ._ZNSt8_Rb_treeImSt4pairIKmN5boost10shared_ptrIN5Caver7GUIViewEEEESt10_Select1stIS7_ESt4lessImESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
 * Demangled: std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>> *)
 *
 * Callers: 3
 *   0x00000000004A1CD0  Caver::GUIWindow::~GUIWindow()
 *   0x00000000004A504C  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>> *)
 *   0x00000000004A58AC  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>)
 *
 * Callees: 1
 *   0x00000000004A504C  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6A18 string=0x00000000001F6A1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<unsigned long,std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase()
{
  return _ZNSt8_Rb_treeImSt4pairIKmN5boost10shared_ptrIN5Caver7GUIViewEEEESt10_Select1stIS7_ESt4lessImESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E();
}

