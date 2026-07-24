/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a15d0
 * Function: Caver::GUIViewController::ViewWillDisappear
 * Signature: undefined __thiscall ViewWillDisappear(GUIViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewController::ViewWillDisappear() */

void __thiscall Caver::GUIViewController::ViewWillDisappear(GUIViewController *this)

{
                    /* catch() { ... } // from try @ 005a1584 with catch @ 005a15d0 */
  if (*(long *)(this + 0x30) != 0) {
    DismissModalViewController(this);
    return;
  }
  return;
}


