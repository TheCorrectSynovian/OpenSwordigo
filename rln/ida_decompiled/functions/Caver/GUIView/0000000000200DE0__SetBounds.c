/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200DE0
 * Mangled: ._ZN5Caver7GUIView9SetBoundsERKNS_9RectangleE
 * Demangled: Caver::GUIView::SetBounds(Caver::Rectangle const&)
 *
 * Callers: 4
 *   0x00000000004201CC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>(boost::shared_ptr<Caver::MapView> const*,Caver::MapView *)
 *   0x0000000000497B54  Caver::GUILabel::UpdateText(void)
 *   0x00000000004981C4  Caver::GUILabel::SetBounds(Caver::Rectangle const&)
 *   0x000000000049BCD8  Caver::GUIScrollView::SetBounds(Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x00000000004A1014  Caver::GUIView::SetBounds(Caver::Rectangle const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200DE8 string=0x0000000000200DEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::SetBounds(Caver::GUIView *this, const Caver::Rectangle *a2)
{
  return _ZN5Caver7GUIView9SetBoundsERKNS_9RectangleE(this, a2);
}

