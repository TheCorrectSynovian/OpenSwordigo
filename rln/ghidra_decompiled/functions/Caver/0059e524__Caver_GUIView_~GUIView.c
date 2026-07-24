/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059e524
 * Function: Caver::GUIView::~GUIView
 * Signature: undefined __thiscall ~GUIView(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::~GUIView() */

void __thiscall Caver::GUIView::~GUIView(GUIView *this)

{
                    /* try { // try from 0059e524 to 0069e52f has its CatchHandler @ 0059ea4c */
  ~GUIView(this);
  operator_delete(this);
  return;
}


