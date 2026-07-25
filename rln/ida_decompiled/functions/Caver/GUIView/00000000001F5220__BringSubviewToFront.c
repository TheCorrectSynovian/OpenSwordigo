/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5220
 * Mangled: ._ZN5Caver7GUIView19BringSubviewToFrontEPS0_
 * Demangled: Caver::GUIView::BringSubviewToFront(Caver::GUIView*)
 *
 * Callers: 1
 *   0x0000000000496DE0  Caver::GUIDraggableItem::TouchMoved(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000049FC54  Caver::GUIView::BringSubviewToFront(Caver::GUIView*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5228 string=0x00000000001F522C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::BringSubviewToFront(Caver::GUIView *this, Caver::GUIView *a2)
{
  return _ZN5Caver7GUIView19BringSubviewToFrontEPS0_(this, a2);
}

