/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059bcd8
 * Function: Caver::GUIScrollView::SetBounds
 * Signature: undefined __thiscall SetBounds(GUIScrollView * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::SetBounds(Caver::Rectangle const&) */

void __thiscall Caver::GUIScrollView::SetBounds(GUIScrollView *this,Rectangle *param_1)

{
  GUIView::SetBounds((GUIView *)this,param_1);
  AdjustContentOffset(this);
  return;
}


