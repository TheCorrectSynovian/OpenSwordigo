/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aba5c
 * Function: Caver::FWTouch::LocationInView
 * Signature: undefined __thiscall LocationInView(FWTouch * this, GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWTouch::LocationInView(Caver::GUIView const*) const */

void __thiscall Caver::FWTouch::LocationInView(FWTouch *this,GUIView *param_1)

{
  GUIView::ConvertPointFromView((Vector2 *)param_1,(GUIView *)(this + 8));
  return;
}


