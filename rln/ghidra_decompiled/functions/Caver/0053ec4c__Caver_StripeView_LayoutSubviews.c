/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053ec4c
 * Function: Caver::StripeView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(StripeView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StripeView::LayoutSubviews() */

void __thiscall Caver::StripeView::LayoutSubviews(StripeView *this)

{
  long lVar1;
  GUIView *this_00;
  GUILabel *this_01;
  float fVar2;
  float local_38;
  int local_34;
  undefined4 local_30;
  float local_2c;
  long local_28;
  
                    /* try { // try from 0053ec54 to 0063eca7 has its CatchHandler @ 0053ea24 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GUIFrameView::LayoutSubviews((GUIFrameView *)this);
  this_00 = *(GUIView **)(this + 0x110);
  if (this_00 != (GUIView *)0x0) {
    local_30 = *(undefined4 *)(this_00 + 0x7c);
    local_2c = *(float *)(this_00 + 0x80);
                    /* catch() { ... } // from try @ 0053ead0 with catch @ 0053ec84 */
    local_38 = *(float *)(this + 0x130);
    local_34 = (int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) - local_2c * 0.5);
                    /* try { // try from 0053eca8 to 0063eccf has its CatchHandler @ 0053ed40 */
    GUIView::SetFrame(this_00,(Rectangle *)&local_38);
  }
  if (*(GUIView **)(this + 0x120) != (GUIView *)0x0) {
    if (*(long *)(this + 0x110) == 0) {
      local_38 = *(float *)(this + 0x130);
      fVar2 = *(float *)(this + 0x134);
      local_2c = *(float *)(this + 0x90);
                    /* catch() { ... } // from try @ 0053ea7c with catch @ 0053ece8
                       catch() { ... } // from try @ 0053eb20 with catch @ 0053ece8 */
      local_30 = *(undefined4 *)(this + 0x8c);
    }
    else {
      local_38 = *(float *)(this + 0x130);
      fVar2 = *(float *)(this + 0x134);
                    /* try { // try from 0053ecd0 to 0063ed0f has its CatchHandler @ 0053ea24 */
      local_2c = *(float *)(this + 0x90);
                    /* catch() { ... } // from try @ 0053ea68 with catch @ 0053ecd4 */
      local_30 = *(undefined4 *)(*(long *)(this + 0x110) + 0x7c);
    }
                    /* catch() { ... } // from try @ 0053ebc0 with catch @ 0053ecec */
    local_38 = local_38 + fVar2;
    local_2c = local_2c + -2.0;
    local_34 = 0;
    GUIView::SetFrame(*(GUIView **)(this + 0x120),(Rectangle *)&local_38);
    this_01 = *(GUILabel **)(this + 0x120);
                    /* try { // try from 0053ed10 to 0063ed37 has its CatchHandler @ 0053ed40 */
    *(undefined4 *)(this_01 + 0x130) = 4;
    GUILabel::UpdateBounds(this_01);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 0053ed38 to 0063ed43 has its CatchHandler @ 0053ea24 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


