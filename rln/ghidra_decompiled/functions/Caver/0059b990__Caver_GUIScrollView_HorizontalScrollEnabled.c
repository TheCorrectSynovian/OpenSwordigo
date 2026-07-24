/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b990
 * Function: Caver::GUIScrollView::HorizontalScrollEnabled
 * Signature: undefined __thiscall HorizontalScrollEnabled(GUIScrollView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::HorizontalScrollEnabled() const */

bool __thiscall Caver::GUIScrollView::HorizontalScrollEnabled(GUIScrollView *this)

{
  return *(float *)(this + 0x8c) < *(float *)(this + 0xf4);
}


