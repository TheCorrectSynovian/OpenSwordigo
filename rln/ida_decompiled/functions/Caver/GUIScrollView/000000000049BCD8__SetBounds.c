/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049BCD8
 * Mangled: _ZN5Caver13GUIScrollView9SetBoundsERKNS_9RectangleE
 * Demangled: Caver::GUIScrollView::SetBounds(Caver::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FFB40  Caver::GUIScrollView::AdjustContentOffset(void)
 *   0x0000000000200DE0  Caver::GUIView::SetBounds(Caver::Rectangle const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000049BCE4 string=0x000000000049BCE8 ">"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIScrollView::SetBounds(Caver::GUIScrollView *this, const Caver::Rectangle *a2)
{
  Caver::GUIView::SetBounds(this, a2);
  return Caver::GUIScrollView::AdjustContentOffset(this);
}

