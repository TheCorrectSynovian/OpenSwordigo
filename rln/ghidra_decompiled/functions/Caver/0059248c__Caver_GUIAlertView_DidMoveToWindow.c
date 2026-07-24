/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059248c
 * Function: Caver::GUIAlertView::DidMoveToWindow
 * Signature: undefined __thiscall DidMoveToWindow(GUIAlertView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIAlertView::DidMoveToWindow() */

void __thiscall Caver::GUIAlertView::DidMoveToWindow(GUIAlertView *this)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 0058f664 with catch @ 0059248c
                       catch() { ... } // from try @ 0058f6a8 with catch @ 0059248c */
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005924c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 200))(this);
    return;
  }
                    /* catch() { ... } // from try @ 0058f298 with catch @ 005924c4 */
  return;
}


