/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a2280
 * Function: Caver::GUIWindow::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(GUIWindow * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::LayoutSubviews() */

void __thiscall Caver::GUIWindow::LayoutSubviews(GUIWindow *this)

{
                    /* try { // try from 005a2284 to 006a22d7 has its CatchHandler @ 005a1684 */
                    /* catch() { ... } // from try @ 005a1cec with catch @ 005a228c */
                    /* catch() { ... } // from try @ 005a185c with catch @ 005a2290 */
  if (*(GUIEffect **)(this + 0x1e8) != (GUIEffect *)0x0) {
                    /* catch() { ... } // from try @ 005a19c4 with catch @ 005a2298 */
    GUIEffect::SetFrame(*(GUIEffect **)(this + 0x1e8),(Rectangle *)(this + 0x84));
  }
  GUIView::LayoutSubviews((GUIView *)this);
  return;
}


