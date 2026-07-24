/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00591db8
 * Function: Caver::GUIAlertView::TouchCancelled
 * Signature: undefined __thiscall TouchCancelled(GUIAlertView * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::TouchCancelled(Caver::FWTouch const&) */

void __thiscall Caver::GUIAlertView::TouchCancelled(GUIAlertView *this,FWTouch *param_1)

{
                    /* catch() { ... } // from try @ 0058fc40 with catch @ 00591db8 */
                    /* catch() { ... } // from try @ 0058fbd0 with catch @ 00591dbc */
  if (*(long *)(this + 0x1b0) == *(long *)param_1) {
    *(undefined8 *)(this + 0x1b0) = 0;
  }
  return;
}


