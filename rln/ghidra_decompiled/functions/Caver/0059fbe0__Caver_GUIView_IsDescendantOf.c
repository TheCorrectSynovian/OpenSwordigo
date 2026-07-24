/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059fbe0
 * Function: Caver::GUIView::IsDescendantOf
 * Signature: undefined __thiscall IsDescendantOf(GUIView * this, GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::IsDescendantOf(Caver::GUIView*) */

undefined8 __thiscall Caver::GUIView::IsDescendantOf(GUIView *this,GUIView *param_1)

{
  while( true ) {
    if (this == (GUIView *)0x0) {
      return 0;
    }
    if (this == param_1) break;
    this = *(GUIView **)(this + 0x58);
  }
  return 1;
}


