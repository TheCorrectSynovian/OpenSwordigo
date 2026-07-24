/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00489b1c
 * Function: Caver::BadgeCountView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(BadgeCountView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BadgeCountView::LayoutSubviews() */

void __thiscall Caver::BadgeCountView::LayoutSubviews(BadgeCountView *this)

{
  long lVar1;
  float fVar2;
  GUIView *pGVar3;
  float fVar4;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 00489b38 to 00589b3b has its CatchHandler @ 00489c48 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00489b3c to 00589b93 has its CatchHandler @ 00489a6c */
  GUIView::LayoutSubviews((GUIView *)this);
  pGVar3 = *(GUIView **)(this + 0x100);
  GUILabel::TextSize();
  local_48 = *(undefined8 *)(pGVar3 + 0x74);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_48);
  local_48 = *(undefined8 *)(*(GUIView **)(this + 0xf0) + 0x74);
  fVar4 = *(float *)(*(long *)(this + 0x100) + 0x7c) + 10.0;
  fVar2 = *(float *)(this + 0x8c);
                    /* try { // try from 00489b94 to 00589b9b has its CatchHandler @ 00489c14 */
  if (*(float *)(this + 0x8c) <= fVar4) {
    fVar2 = fVar4;
  }
                    /* try { // try from 00489b9c to 00589c37 has its CatchHandler @ 00489a6c */
  local_40 = CONCAT44(*(undefined4 *)(this + 0x90),fVar2);
  GUIView::SetFrame(*(GUIView **)(this + 0xf0),(Rectangle *)&local_48);
  pGVar3 = *(GUIView **)(this + 0xf0);
  Vector2::Rounded();
  local_40 = *(undefined8 *)(pGVar3 + 0x7c);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_48);
  pGVar3 = *(GUIView **)(this + 0x100);
                    /* catch() { ... } // from try @ 00489b94 with catch @ 00489c14 */
  Vector2::Rounded();
  local_40 = *(undefined8 *)(pGVar3 + 0x7c);
                    /* try { // try from 00489c38 to 00589c3f has its CatchHandler @ 00489c44 */
                    /* try { // try from 00489c40 to 00589c5b has its CatchHandler @ 00489a6c */
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_48);
                    /* catch() { ... } // from try @ 00489c38 with catch @ 00489c44 */
                    /* catch() { ... } // from try @ 00489b38 with catch @ 00489c48 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00489ee0 with catch @ 00489c5c
                       catch() { ... } // from try @ 00489f8c with catch @ 00489c5c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


