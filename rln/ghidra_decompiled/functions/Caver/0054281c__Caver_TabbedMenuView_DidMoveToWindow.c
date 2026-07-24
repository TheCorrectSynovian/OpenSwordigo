/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054281c
 * Function: Caver::TabbedMenuView::DidMoveToWindow
 * Signature: undefined __thiscall DidMoveToWindow(TabbedMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabbedMenuView::DidMoveToWindow() */

void __thiscall Caver::TabbedMenuView::DidMoveToWindow(TabbedMenuView *this)

{
  long lVar1;
  
                    /* try { // try from 00542834 to 0064283f has its CatchHandler @ 00542720 */
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (lVar1 != 0) {
                    /* catch() { ... } // from try @ 0054280c with catch @ 0054283c */
                    /* WARNING: Could not recover jumptable at 0x00542850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 200))(this);
    return;
  }
  return;
}


