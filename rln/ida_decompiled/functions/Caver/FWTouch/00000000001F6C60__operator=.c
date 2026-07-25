/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6C60
 * Mangled: ._ZN5Caver7FWTouchaSERKS0_
 * Demangled: Caver::FWTouch::operator=(Caver::FWTouch const&)
 *
 * Callers: 4
 *   0x000000000049BFA8  Caver::GUIScrollView::TouchBegan(Caver::FWTouch const&)
 *   0x00000000004A35D8  Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *   0x00000000004A599C  std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::FWTouch*,std::vector<Caver::FWTouch,std::allocator<Caver::FWTouch>>>,Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004ABA30  Caver::FWTouch::operator=(Caver::FWTouch const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6C64 string=0x00000000004ABA30 "("
 *   insn=0x00000000001F6C68 string=0x00000000001F6C6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::FWTouch::operator=()
{
  return _ZN5Caver7FWTouchaSERKS0_();
}

