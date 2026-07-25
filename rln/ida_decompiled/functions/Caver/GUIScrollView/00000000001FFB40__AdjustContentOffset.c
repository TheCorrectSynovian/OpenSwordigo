/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFB40
 * Mangled: ._ZN5Caver13GUIScrollView19AdjustContentOffsetEv
 * Demangled: Caver::GUIScrollView::AdjustContentOffset(void)
 *
 * Callers: 4
 *   0x000000000049B75C  Caver::GUIScrollView::Update(float)
 *   0x000000000049BCD8  Caver::GUIScrollView::SetBounds(Caver::Rectangle const&)
 *   0x000000000049BCFC  Caver::GUIScrollView::SetContentBounds(Caver::Rectangle const&)
 *   0x000000000049C6D8  Caver::GUIScrollView::HandleMouseEvent(Caver::GUIMouseEvent const&)
 *
 * Callees: 1
 *   0x000000000049B9B8  Caver::GUIScrollView::AdjustContentOffset(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFB48 string=0x00000000001FFB4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIScrollView::AdjustContentOffset(Caver::GUIScrollView *this)
{
  return _ZN5Caver13GUIScrollView19AdjustContentOffsetEv(this);
}

