/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200480
 * Mangled: ._ZNSt8_Rb_treeImSt4pairIKmN5boost10shared_ptrIN5Caver7GUIViewEEEESt10_Select1stIS7_ESt4lessImESaIS7_EE29_M_get_insert_hint_unique_posESt23_Rb_tree_const_iteratorIS7_ERS1_
 * Demangled: std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,ulong const&)
 *
 * Callers: 1
 *   0x00000000004A35D8  Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *
 * Callees: 1
 *   0x00000000004A519C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GUIPopoverView,Caver::GUIPopoverView>(boost::shared_ptr<Caver::GUIPopoverView> const*,Caver::GUIPopoverView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200488 string=0x000000000020048C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Rb_tree<unsigned long,std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>>::_M_get_insert_hint_unique_pos()
{
  JUMPOUT(0x4A52BC);
}

