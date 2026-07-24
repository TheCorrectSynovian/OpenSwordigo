/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a0578
 * Function: Caver::GUIView::UndoManager
 * Signature: undefined __thiscall UndoManager(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::UndoManager() */

void __thiscall Caver::GUIView::UndoManager(GUIView *this)

{
  if (*(long **)(this + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005a0588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x58) + 0xb8))();
    return;
  }
  return;
}


