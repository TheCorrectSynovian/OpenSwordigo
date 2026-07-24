/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c92dc
 * Function: Caver::ConfigureOverlayView::DidMoveToWindow
 * Signature: undefined __thiscall DidMoveToWindow(ConfigureOverlayView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayView::DidMoveToWindow() */

void __thiscall Caver::ConfigureOverlayView::DidMoveToWindow(ConfigureOverlayView *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004c9310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 200))(this);
    return;
  }
  return;
}


