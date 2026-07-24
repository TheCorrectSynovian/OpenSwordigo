/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005301bc
 * Function: Caver::PortalView::DidMoveToWindow
 * Signature: undefined __thiscall DidMoveToWindow(PortalView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalView::DidMoveToWindow() */

void __thiscall Caver::PortalView::DidMoveToWindow(PortalView *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (lVar1 != 0) {
                    /* try { // try from 005301dc to 006301df has its CatchHandler @ 0053021c */
                    /* WARNING: Could not recover jumptable at 0x005301f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 200))(this);
    return;
  }
  return;
}


