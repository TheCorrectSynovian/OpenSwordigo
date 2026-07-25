/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049BCFC
 * Mangled: _ZN5Caver13GUIScrollView16SetContentBoundsERKNS_9RectangleE
 * Demangled: Caver::GUIScrollView::SetContentBounds(Caver::Rectangle const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFB40  Caver::GUIScrollView::AdjustContentOffset(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIScrollView::SetContentBounds(Caver::GUIScrollView *this, const Caver::Rectangle *a2)
{
  *(_OWORD *)((char *)this + 236) = *(_OWORD *)a2;
  return Caver::GUIScrollView::AdjustContentOffset(this);
}

