/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a3590
 * Function: Caver::GUIWindow::Dismiss
 * Signature: undefined __thiscall Dismiss(GUIWindow * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::Dismiss() */

void __thiscall Caver::GUIWindow::Dismiss(GUIWindow *this)

{
                    /* catch() { ... } // from try @ 005a34b4 with catch @ 005a3590 */
  *(undefined4 *)(this + 0x1fc) = 0x3e99999a;
  this[0xe5] = (GUIWindow)0x0;
  return;
}


