/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004efd58
 * Function: Caver::StoreView::DidMoveToWindow
 * Signature: undefined __thiscall DidMoveToWindow(StoreView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreView::DidMoveToWindow() */

void __thiscall Caver::StoreView::DidMoveToWindow(StoreView *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004efd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 200))(this);
    return;
  }
  return;
}


