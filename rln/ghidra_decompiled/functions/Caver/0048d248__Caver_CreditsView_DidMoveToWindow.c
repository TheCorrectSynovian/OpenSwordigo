/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048d248
 * Function: Caver::CreditsView::DidMoveToWindow
 * Signature: undefined __thiscall DidMoveToWindow(CreditsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CreditsView::DidMoveToWindow() */

void __thiscall Caver::CreditsView::DidMoveToWindow(CreditsView *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0048d27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 200))(this);
    return;
  }
  return;
}


