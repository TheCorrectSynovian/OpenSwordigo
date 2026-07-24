/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059bcfc
 * Function: Caver::GUIScrollView::SetContentBounds
 * Signature: undefined __thiscall SetContentBounds(GUIScrollView * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::SetContentBounds(Caver::Rectangle const&) */

void __thiscall Caver::GUIScrollView::SetContentBounds(GUIScrollView *this,Rectangle *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0xf4) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xec) = uVar1;
  AdjustContentOffset(this);
  return;
}


