/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDA40
 * Mangled: ._ZNK5Caver7GUIView18ConvertPointToViewERKNS_7Vector2EPS0_
 * Demangled: Caver::GUIView::ConvertPointToView(Caver::Vector2 const&,Caver::GUIView*)
 *
 * Callers: 4
 *   0x00000000003CD798  Caver::DraggableOverlayItem::TouchMoved(Caver::FWTouch const&)
 *   0x0000000000496D8C  Caver::GUIDraggableItem::LocationInView(Caver::GUIView *)
 *   0x0000000000496DE0  Caver::GUIDraggableItem::TouchMoved(Caver::FWTouch const&)
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004A0CE4  Caver::GUIView::ConvertPointToView(Caver::Vector2 const&,Caver::GUIView*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDA48 string=0x00000000001FDA4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::ConvertPointToView(
        Caver::GUIView *this,
        const Caver::Vector2 *a2,
        Caver::GUIView *a3)
{
  return _ZNK5Caver7GUIView18ConvertPointToViewERKNS_7Vector2EPS0_(this, a2, a3);
}

