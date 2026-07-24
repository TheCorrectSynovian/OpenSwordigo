/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004956a4
 * Function: Caver::MainMenuView::DidMoveToWindow
 * Signature: undefined __thiscall DidMoveToWindow(MainMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MainMenuView::DidMoveToWindow() */

void __thiscall Caver::MainMenuView::DidMoveToWindow(MainMenuView *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004956d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 200))(this);
    return;
  }
  return;
}


