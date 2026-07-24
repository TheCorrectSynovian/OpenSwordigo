/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00598fa4
 * Function: Caver::GUILoadingView::~GUILoadingView
 * Signature: undefined __thiscall ~GUILoadingView(GUILoadingView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUILoadingView::~GUILoadingView() */

void __thiscall Caver::GUILoadingView::~GUILoadingView(GUILoadingView *this)

{
  GUIView::~GUIView((GUIView *)this);
  operator_delete(this);
  return;
}


