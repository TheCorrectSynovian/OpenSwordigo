/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE2B0
 * Mangled: ._ZN5Caver20DraggableOverlayItemC2Ev
 * Demangled: Caver::DraggableOverlayItem::DraggableOverlayItem(void)
 *
 * Callers: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003CCB70  std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUILabel>*,std::vector<boost::shared_ptr<Caver::GUILabel>,std::allocator<boost::shared_ptr<Caver::GUILabel>>>>,boost::shared_ptr<Caver::GUILabel> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE2B8 string=0x00000000001FE2BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::DraggableOverlayItem::DraggableOverlayItem(Caver::DraggableOverlayItem *this)
{
  JUMPOUT(0x3CCF4C);
}

