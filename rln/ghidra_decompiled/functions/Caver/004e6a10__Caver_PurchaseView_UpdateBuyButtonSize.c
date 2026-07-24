/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e6a10
 * Function: Caver::PurchaseView::UpdateBuyButtonSize
 * Signature: undefined __thiscall UpdateBuyButtonSize(PurchaseView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PurchaseView::UpdateBuyButtonSize() */

void __thiscall Caver::PurchaseView::UpdateBuyButtonSize(PurchaseView *this)

{
  long lVar1;
  GUIView *this_00;
  GUIButton *this_01;
  float fVar2;
  float local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004e6a34 to 005e6a3b has its CatchHandler @ 004e6ae4 */
  this_01 = *(GUIButton **)(this + 0x128);
  GUIButton::titleLabel(this_01);
  GUILabel::TextSize();
  local_58 = *(undefined8 *)(this_01 + 0x74);
  fVar2 = local_60 + 30.0;
  if (local_60 + 30.0 <= _DAT_0068782c) {
    fVar2 = _DAT_0068782c;
  }
                    /* try { // try from 004e6a88 to 005e6a8f has its CatchHandler @ 004e6acc */
                    /* try { // try from 004e6a90 to 005e6acf has its CatchHandler @ 004e68f0 */
  local_50 = CONCAT44(*(undefined4 *)(*(long *)(this + 0x128) + 0x80),fVar2);
  GUIView::SetFrame((GUIView *)this_01,(Rectangle *)&local_58);
  this_00 = *(GUIView **)(this + 0x128);
  Vector2::Rounded();
  local_50 = *(undefined8 *)(this_00 + 0x7c);
                    /* catch() { ... } // from try @ 004e6a88 with catch @ 004e6acc */
                    /* try { // try from 004e6ad0 to 005e6ad7 has its CatchHandler @ 004e6ae0 */
  GUIView::SetFrame(this_00,(Rectangle *)&local_58);
                    /* try { // try from 004e6ad8 to 005e6b23 has its CatchHandler @ 004e68f0 */
                    /* catch() { ... } // from try @ 004e6ad0 with catch @ 004e6ae0 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch() { ... } // from try @ 004e6a34 with catch @ 004e6ae4 */
                    /* catch() { ... } // from try @ 004e69e0 with catch @ 004e6aec */
                    /* catch() { ... } // from try @ 004e698c with catch @ 004e6af4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 004e6938 with catch @ 004e6afc */
  __stack_chk_fail();
}


