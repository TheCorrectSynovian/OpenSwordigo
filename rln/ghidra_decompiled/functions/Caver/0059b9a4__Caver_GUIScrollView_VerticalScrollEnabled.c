/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b9a4
 * Function: Caver::GUIScrollView::VerticalScrollEnabled
 * Signature: undefined __thiscall VerticalScrollEnabled(GUIScrollView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::VerticalScrollEnabled() const */

bool __thiscall Caver::GUIScrollView::VerticalScrollEnabled(GUIScrollView *this)

{
  return *(float *)(this + 0x90) < *(float *)(this + 0xf8);
}


