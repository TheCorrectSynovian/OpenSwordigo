/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F59C0
 * Mangled: ._ZNSt8_Rb_treeImSt4pairIKmN5Caver7FWTouchEESt10_Select1stIS4_ESt4lessImESaIS4_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS4_ERS1_
 * Demangled: std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<ulong const,Caver::FWTouch>>,ulong const&)
 *
 * Callers: 1
 *   0x00000000004A35D8  Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *
 * Callees: 1
 *   0x00000000004A54D8  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<ulong const,Caver::FWTouch>>,ulong const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F59C8 string=0x00000000001F59CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::_Rb_tree<unsigned long,std::pair<unsigned long const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned long const,Caver::FWTouch>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Caver::FWTouch>>>::_M_get_insert_hint_unique_pos()
{
  return _ZNSt8_Rb_treeImSt4pairIKmN5Caver7FWTouchEESt10_Select1stIS4_ESt4lessImESaIS4_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS4_ERS1_();
}

