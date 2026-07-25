/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8F30
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver20DraggableOverlayItemEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::DraggableOverlayItem>,std::allocator<boost::shared_ptr<Caver::DraggableOverlayItem>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::DraggableOverlayItem>*,std::vector<boost::shared_ptr<Caver::DraggableOverlayItem>,std::allocator<boost::shared_ptr<Caver::DraggableOverlayItem>>>>,boost::shared_ptr<Caver::DraggableOverlayItem> const&)
 *
 * Callers: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8F38 string=0x00000000001F8F3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<boost::shared_ptr<Caver::DraggableOverlayItem>>::_M_insert_aux()
{
  JUMPOUT(0x3C9520);
}

