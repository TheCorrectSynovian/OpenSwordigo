/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203BF0
 * Mangled: ._ZNSt8_Rb_treeImSt4pairIKmN5boost10shared_ptrIN5Caver7GUIViewEEEESt10_Select1stIS7_ESt4lessImESaIS7_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS7_ESF_
 * Demangled: std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>)
 *
 * Callers: 2
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *   0x00000000004A46B0  Caver::GUIWindow::EndTouch(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004A58AC  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux(std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203BF8 string=0x0000000000203BFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<unsigned long,std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase_aux()
{
  return _ZNSt8_Rb_treeImSt4pairIKmN5boost10shared_ptrIN5Caver7GUIViewEEEESt10_Select1stIS7_ESt4lessImESaIS7_EE12_M_erase_auxESt23_Rb_tree_const_iteratorIS7_ESF_();
}

