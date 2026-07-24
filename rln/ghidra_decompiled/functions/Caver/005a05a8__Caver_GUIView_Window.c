/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a05a8
 * Function: Caver::GUIView::Window
 * Signature: undefined __thiscall Window(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::Window() */

void __thiscall Caver::GUIView::Window(GUIView *this)

{
  if (*(long **)(this + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a05b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x58) + 0xf0))();
    return;
  }
  return;
}


