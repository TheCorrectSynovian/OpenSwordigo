/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e341c
 * Function: Caver::TargetFrame::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(TargetFrame * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TargetFrame::LayoutSubviews() */

void __thiscall Caver::TargetFrame::LayoutSubviews(TargetFrame *this)

{
                    /* catch() { ... } // from try @ 004e3488 with catch @ 004e3428 */
  GUIView::SetFrame(*(GUIView **)(this + 0x110),(Rectangle *)(this + 0x84));
  return;
}


