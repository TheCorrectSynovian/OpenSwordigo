/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aba70
 * Function: Caver::FWTouch::PreviousLocationInView
 * Signature: undefined __thiscall PreviousLocationInView(FWTouch * this, GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWTouch::PreviousLocationInView(Caver::GUIView const*) const */

void __thiscall Caver::FWTouch::PreviousLocationInView(FWTouch *this,GUIView *param_1)

{
  GUIView::ConvertPointFromView((Vector2 *)param_1,(GUIView *)(this + 0x10));
  return;
}


