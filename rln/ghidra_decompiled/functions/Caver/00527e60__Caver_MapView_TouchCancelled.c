/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00527e60
 * Function: Caver::MapView::TouchCancelled
 * Signature: undefined __thiscall TouchCancelled(MapView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::TouchCancelled(Caver::FWTouch const&) */

void __thiscall Caver::MapView::TouchCancelled(MapView *this,FWTouch *param_1)

{
  if (*(long *)param_1 == *(long *)(this + 1000)) {
    *(undefined8 *)(this + 1000) = 0;
  }
  GUIResponder::TouchCancelled((GUIResponder *)this,param_1);
  return;
}


