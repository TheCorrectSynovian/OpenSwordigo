/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049d76c
 * Function: Caver::ProfilePanelView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(ProfilePanelView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ProfilePanelView::LayoutSubviews() */

void __thiscall Caver::ProfilePanelView::LayoutSubviews(ProfilePanelView *this)

{
  long lVar1;
  float fVar2;
  GUIView *pGVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_78;
  
  fVar2 = DAT_006913f8;
                    /* try { // try from 0049d778 to 0059d78f has its CatchHandler @ 0049d858 */
                    /* try { // try from 0049d790 to 0059d937 has its CatchHandler @ 0049d66c */
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar7 = *(float *)(this + 0x90);
  fVar6 = *(float *)(*(long *)(*(GUIView **)(this + 0x1a8) + 0xf0) + 0x48);
  local_90 = CONCAT44((fVar7 + 0.0 + -10.0) - fVar6,0x429e0000);
  uStack_88 = CONCAT44(fVar6,*(float *)(this + 0x8c) + DAT_006913f4 + DAT_006913f8);
  GUIView::SetFrame(*(GUIView **)(this + 0x1a8),(Rectangle *)&local_90);
  pGVar3 = *(GUIView **)(this + 0x198) + 0x7c;
  uStack_88 = *(undefined8 *)pGVar3;
  local_90 = CONCAT44(*(float *)(*(long *)(this + 0x1a8) + 0x78) + -3.0,
                      (*(float *)(this + 0x84) + *(float *)(this + 0x8c) + -8.0) - *(float *)pGVar3)
  ;
  GUIView::SetFrame(*(GUIView **)(this + 0x198),(Rectangle *)&local_90);
  pGVar3 = *(GUIView **)(this + 0x1b8);
  fVar5 = *(float *)(*(long *)(this + 0x1a8) + 0x74);
  GUILabel::TextSize();
                    /* catch() { ... } // from try @ 0049d778 with catch @ 0049d858 */
  local_90 = CONCAT44(*(undefined4 *)(*(long *)(this + 0x1a8) + 0x78),fVar5 + local_98 + 8.0);
  uStack_88 = CONCAT44(*(undefined4 *)(*(long *)(this + 0x1a8) + 0x80),0x428c0000);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_90);
                    /* catch() { ... } // from try @ 0049d764 with catch @ 0049d890 */
                    /* catch() { ... } // from try @ 0049d734 with catch @ 0049d8a0 */
  local_90 = CONCAT44((int)(((fVar7 * 0.5 + 0.0) - fVar6 * 0.5) + -1.0),0x429e0000);
  uStack_88 = CONCAT44(fVar6,*(float *)(this + 0x8c) + -10.0 + fVar2);
  GUIView::SetFrame(*(GUIView **)(this + 0x1d8),(Rectangle *)&local_90);
  uStack_88 = _DAT_006913d8;
  local_90 = _DAT_006913d0;
  GUIView::SetFrame(*(GUIView **)(this + 0x1c8),(Rectangle *)&local_90);
  local_90 = _DAT_00691408;
  uStack_88 = CONCAT44(*(undefined4 *)(this + 0x90),0x42c80000);
  GUIView::SetFrame(*(GUIView **)(this + 0x1e8),(Rectangle *)&local_90);
  if (*(GUIView **)(this + 0x1f8) != (GUIView *)0x0) {
                    /* catch() { ... } // from try @ 0049d720 with catch @ 0049d914 */
    local_90 = 0;
    uStack_88 = CONCAT44(*(undefined4 *)(this + 0x90),*(undefined4 *)(this + 0x90));
    GUIView::SetFrame(*(GUIView **)(this + 0x1f8),(Rectangle *)&local_90);
  }
                    /* try { // try from 0049d938 to 0059d9bf has its CatchHandler @ 0049d9c8 */
  local_90 = CONCAT44(*(undefined4 *)(this + 0x88),
                      *(float *)(this + 0x84) + *(float *)(this + 0x8c) + DAT_006913fc);
  uStack_88 = DAT_00691410;
  GUIView::SetFrame(*(GUIView **)(this + 0x188),(Rectangle *)&local_90);
  lVar4 = *(long *)(this + 0x188);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar4 + 0x84),12.0);
  *(undefined8 *)(lVar4 + 0x9c) = uStack_88;
  *(undefined8 *)(lVar4 + 0x94) = local_90;
  pGVar3 = *(GUIView **)(this + 0x178);
  if (pGVar3 != (GUIView *)0x0) {
    uStack_88 = *(undefined8 *)(pGVar3 + 0x7c);
    local_90 = CONCAT44((int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) -
                             *(float *)(pGVar3 + 0x80) * 0.5),
                        (*(float *)(this + 0x84) + 8.0) - *(float *)(pGVar3 + 0x7c));
    GUIView::SetFrame(pGVar3,(Rectangle *)&local_90);
    lVar4 = *(long *)(this + 0x178);
                    /* try { // try from 0049d9c0 to 0059d9cb has its CatchHandler @ 0049d66c */
                    /* catch() { ... } // from try @ 0049d938 with catch @ 0049d9c8 */
    Rectangle::RectangleByOutsetting((Rectangle *)(lVar4 + 0x84),8.0);
    *(undefined8 *)(lVar4 + 0x9c) = uStack_88;
    *(undefined8 *)(lVar4 + 0x94) = local_90;
  }
  lVar4 = *(long *)(this + 0x198);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar4 + 0x84),8.0);
  *(undefined8 *)(lVar4 + 0x9c) = uStack_88;
  *(undefined8 *)(lVar4 + 0x94) = local_90;
  GUIView::SetTouchBoundsToIncludeSubviewTouchBounds((GUIView *)this);
  GUIFrameView::LayoutSubviews((GUIFrameView *)this);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


