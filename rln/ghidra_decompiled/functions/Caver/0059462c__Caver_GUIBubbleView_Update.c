/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059462c
 * Function: Caver::GUIBubbleView::Update
 * Signature: undefined __thiscall Update(GUIBubbleView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIBubbleView::Update(float) */

void __thiscall Caver::GUIBubbleView::Update(GUIBubbleView *this,float param_1)

{
                    /* try { // try from 00594630 to 0069463b has its CatchHandler @ 00594244 */
                    /* catch() { ... } // from try @ 00594518 with catch @ 00594638 */
  GUIView::Update((GUIView *)this,param_1);
  if (*(long *)(this + 0x108) != 0) {
    GUIAnimation::Update(param_1);
  }
  GUITextBubble::Update(*(GUITextBubble **)(this + 0xf0),param_1);
  return;
}


