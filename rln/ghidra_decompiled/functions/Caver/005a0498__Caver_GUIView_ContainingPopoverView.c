/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0498
 * Function: Caver::GUIView::ContainingPopoverView
 * Signature: undefined __thiscall ContainingPopoverView(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::ContainingPopoverView() */

void __thiscall Caver::GUIView::ContainingPopoverView(GUIView *this)

{
  if (*(long **)(this + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a04a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x58) + 0x88))();
    return;
  }
  return;
}


