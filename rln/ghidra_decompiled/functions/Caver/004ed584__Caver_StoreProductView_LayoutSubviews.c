/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ed584
 * Function: Caver::StoreProductView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(StoreProductView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreProductView::LayoutSubviews() */

void __thiscall Caver::StoreProductView::LayoutSubviews(StoreProductView *this)

{
  long lVar1;
  GUIView *pGVar2;
  GUILabel *this_00;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  GUIView::SetFrame(*(GUIView **)(this + 0xf0),(Rectangle *)(this + 0x84));
  pGVar2 = *(GUIView **)(this + 0x100);
  uStack_60 = *(undefined8 *)(pGVar2 + 0x7c);
  local_68 = CONCAT44((int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) -
                           *(float *)(pGVar2 + 0x80) * 0.5),
                      (*(float *)(this + 0x84) + *(float *)(this + 0x8c) + -10.0) -
                      *(float *)(pGVar2 + 0x7c));
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  lVar3 = *(long *)(this + 0x100);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar3 + 0x84),10.0);
  *(undefined8 *)(lVar3 + 0x9c) = uStack_60;
  *(long *)(lVar3 + 0x94) = local_68;
  local_68 = *(long *)(*(GUIView **)(this + 0x110) + 0x74);
  uStack_60 = 0x428c0000428c0000;
  GUIView::SetFrame(*(GUIView **)(this + 0x110),(Rectangle *)&local_68);
  pGVar2 = *(GUIView **)(this + 0x110);
  uStack_60 = *(undefined8 *)(pGVar2 + 0x7c);
  local_68 = CONCAT44((int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) -
                           *(float *)(pGVar2 + 0x80) * 0.5),0x40e00000);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  local_68 = *(long *)(*(GUIView **)(this + 0x130) + 0x74);
  fVar6 = *(float *)(*(long *)(this + 0x110) + 0x74) + *(float *)(*(long *)(this + 0x110) + 0x7c) +
          7.0;
  fVar7 = (*(float *)(*(long *)(this + 0x100) + 0x74) + -7.0) - fVar6;
  uStack_60 = CONCAT44(0x42c80000,fVar7);
  GUIView::SetFrame(*(GUIView **)(this + 0x130),(Rectangle *)&local_68);
  local_68 = *(long *)(*(GUIView **)(this + 0x140) + 0x74);
  uStack_60 = CONCAT44(0x42c80000,fVar7);
  GUIView::SetFrame(*(GUIView **)(this + 0x140),(Rectangle *)&local_68);
  this_00 = *(GUILabel **)(this + 0x140);
  if (*(int *)(this_00 + 0x13c) != 2) {
    *(undefined4 *)(this_00 + 0x13c) = 2;
    GUILabel::UpdateText(this_00);
    this_00 = *(GUILabel **)(this + 0x140);
  }
  this_00[0x138] = (GUILabel)0x1;
  GUILabel::UpdateText(this_00);
  pGVar2 = *(GUIView **)(this + 0x140);
  GUILabel::TextSize();
  local_68 = 0;
  uStack_60 = CONCAT44(local_6c,fVar7);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  pGVar2 = *(GUIView **)(this + 0x130);
  fVar4 = *(float *)(*(long *)(this + 0x140) + 0x78);
  fVar5 = *(float *)(*(long *)(this + 0x140) + 0x80);
  GUILabel::TextSize();
  local_68 = (ulong)(uint)(fVar4 + fVar5 + 10.0) << 0x20;
  uStack_60 = CONCAT44(local_74,fVar7);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  local_68 = *(long *)(*(GUIView **)(this + 0x120) + 0x74);
  uStack_60 = CONCAT44(*(float *)(*(long *)(this + 0x130) + 0x78) +
                       *(float *)(*(long *)(this + 0x130) + 0x80),fVar7);
  GUIView::SetFrame(*(GUIView **)(this + 0x120),(Rectangle *)&local_68);
  pGVar2 = *(GUIView **)(this + 0x120);
  uStack_60 = *(undefined8 *)(pGVar2 + 0x7c);
                    /* catch() { ... } // from try @ 004ed80c with catch @ 004ed7dc */
  local_68 = CONCAT44((int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) -
                           *(float *)(pGVar2 + 0x80) * 0.5),fVar6);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
                    /* try { // try from 004ed7f8 to 005ed80b has its CatchHandler @ 004ed830 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 004ed80c to 005ed833 has its CatchHandler @ 004ed7dc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


