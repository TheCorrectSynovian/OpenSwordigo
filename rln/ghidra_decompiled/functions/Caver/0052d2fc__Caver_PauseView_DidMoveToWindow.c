/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052d2fc
 * Function: Caver::PauseView::DidMoveToWindow
 * Signature: undefined __thiscall DidMoveToWindow(PauseView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PauseView::DidMoveToWindow() */

void __thiscall Caver::PauseView::DidMoveToWindow(PauseView *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0052d330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 200))(this);
    return;
  }
  return;
}


