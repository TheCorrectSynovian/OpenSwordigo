/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0590
 * Function: Caver::GUIView::DismissPopoverView
 * Signature: undefined __thiscall DismissPopoverView(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::DismissPopoverView() */

void __thiscall Caver::GUIView::DismissPopoverView(GUIView *this)

{
  if (*(long **)(this + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a05a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x58) + 0x90))();
    return;
  }
  return;
}


