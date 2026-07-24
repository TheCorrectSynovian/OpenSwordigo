/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005049a8
 * Function: Caver::GuidePurchaseView::UpdateBuyButtonSize
 * Signature: undefined __thiscall UpdateBuyButtonSize(GuidePurchaseView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseView::UpdateBuyButtonSize() */

void __thiscall Caver::GuidePurchaseView::UpdateBuyButtonSize(GuidePurchaseView *this)

{
  long lVar1;
  GUIView *this_00;
  GUIButton *this_01;
  float local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this_01 = *(GUIButton **)(this + 0x130);
                    /* catch() { ... } // from try @ 00504a10 with catch @ 005049e0 */
  GUIButton::titleLabel(this_01);
  GUILabel::TextSize();
                    /* try { // try from 005049fc to 00604a0f has its CatchHandler @ 00504a34 */
  local_58 = *(undefined8 *)(this_01 + 0x74);
                    /* try { // try from 00504a10 to 00604a37 has its CatchHandler @ 005049e0 */
  local_50 = CONCAT44(*(undefined4 *)(*(long *)(this + 0x130) + 0x80),local_60 + 30.0);
  GUIView::SetFrame((GUIView *)this_01,(Rectangle *)&local_58);
  this_00 = *(GUIView **)(this + 0x130);
                    /* catch() { ... } // from try @ 005049fc with catch @ 00504a34 */
  Vector2::Rounded();
  local_50 = *(undefined8 *)(this_00 + 0x7c);
                    /* catch() { ... } // from try @ 00504a9c with catch @ 00504a5c */
  GUIView::SetFrame(this_00,(Rectangle *)&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00504a80 to 00604a83 has its CatchHandler @ 00504a90 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


