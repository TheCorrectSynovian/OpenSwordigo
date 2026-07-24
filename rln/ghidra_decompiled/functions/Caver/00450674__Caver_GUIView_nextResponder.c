/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00450674
 * Function: Caver::GUIView::nextResponder
 * Signature: undefined __thiscall nextResponder(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::nextResponder() const */

long __thiscall Caver::GUIView::nextResponder(GUIView *this)

{
                    /* try { // try from 00450678 to 0055068f has its CatchHandler @ 00450678
                       catch() { ... } // from try @ 00450678 with catch @ 00450678
                       catch() { ... } // from try @ 00450694 with catch @ 00450678 */
  if (*(long *)(this + 0x18) != 0) {
    return *(long *)(this + 0x18);
  }
  return *(long *)(this + 0x58);
}


