/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00527b84
 * Function: Caver::MapView::TouchBegan
 * Signature: undefined __thiscall TouchBegan(MapView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::MapView::TouchBegan(MapView *this,FWTouch *param_1)

{
                    /* catch() { ... } // from try @ 00527bc8 with catch @ 00527b88 */
  *(undefined8 *)(this + 1000) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x3f0) = *(undefined8 *)(param_1 + 8);
  GUIResponder::TouchBegan((GUIResponder *)this,param_1);
  return;
}


