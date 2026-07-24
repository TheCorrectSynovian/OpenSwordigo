/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059fe00
 * Function: Caver::GUIView::DidMoveToWindow
 * Signature: undefined __thiscall DidMoveToWindow(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::DidMoveToWindow() */

void __thiscall Caver::GUIView::DidMoveToWindow(GUIView *this)

{
  GUIView *pGVar1;
  
                    /* try { // try from 0059fe0c to 0069fe1f has its CatchHandler @ 005a0404 */
  for (pGVar1 = *(GUIView **)(this + 0x20); this + 0x20 != pGVar1; pGVar1 = *(GUIView **)pGVar1) {
                    /* try { // try from 0059fe20 to 0069fe33 has its CatchHandler @ 005a0400 */
    (**(code **)(**(long **)(pGVar1 + 0x10) + 0x80))();
  }
                    /* try { // try from 0059fe38 to 0069fe3f has its CatchHandler @ 005a039c */
  return;
}


