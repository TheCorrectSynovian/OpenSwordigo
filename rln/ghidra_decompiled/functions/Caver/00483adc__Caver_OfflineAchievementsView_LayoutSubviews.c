/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00483adc
 * Function: Caver::OfflineAchievementsView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(OfflineAchievementsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsView::LayoutSubviews() */

void __thiscall Caver::OfflineAchievementsView::LayoutSubviews(OfflineAchievementsView *this)

{
  long lVar1;
  float fVar2;
  GUIView *pGVar3;
  GUILabel *this_00;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_68;
  float local_60;
  float local_5c;
  long local_58;
  
                    /* try { // try from 00483ae4 to 00583af7 has its CatchHandler @ 00483ccc */
                    /* try { // try from 00483af8 to 00583b0f has its CatchHandler @ 00483c94 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  pGVar3 = *(GUIView **)(this + 0xf0);
                    /* try { // try from 00483b20 to 00583b33 has its CatchHandler @ 00483c90 */
  local_5c = *(float *)(pGVar3 + 0x80);
  local_60 = *(float *)(pGVar3 + 0x7c);
                    /* try { // try from 00483b34 to 00583b4b has its CatchHandler @ 00483c58 */
  local_68 = CONCAT44(*(float *)(this + 0x88) + *(float *)(this + 0x90) + (-14.0 - local_5c),
                      *(float *)(this + 0x84) + 0.0);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_68);
                    /* try { // try from 00483b4c to 00583d67 has its CatchHandler @ 004839e0 */
  local_5c = *(float *)(this + 0x90);
  local_60 = *(float *)(this + 0x8c) + DAT_00683f70;
  local_68 = DAT_00690910;
  GUIView::SetFrame(*(GUIView **)(this + 0x120),(Rectangle *)&local_68);
  local_68 = *(long *)(*(GUIView **)(this + 0x100) + 0x74);
  local_60 = *(float *)(*(long *)(this + 0x120) + 0x8c);
  local_5c = 36.0;
  GUIView::SetFrame(*(GUIView **)(this + 0x100),(Rectangle *)&local_68);
  pGVar3 = *(GUIView **)(this + 0x100);
  local_5c = *(float *)(pGVar3 + 0x80);
  local_60 = *(float *)(pGVar3 + 0x7c);
  fVar9 = -20.0 - local_5c;
  local_68 = (ulong)(uint)fVar9 << 0x20;
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_68);
  this_00 = *(GUILabel **)(this + 0x100);
  *(undefined4 *)(this_00 + 0x134) = 4;
  GUILabel::UpdateBounds(this_00);
  local_68 = *(undefined8 *)(*(long *)(this + 0x100) + 0x84);
  local_60 = *(float *)(*(long *)(this + 0x100) + 0x8c);
  local_5c = 1.0;
  GUIView::SetFrame(*(GUIView **)(this + 0x110),(Rectangle *)&local_68);
  fVar2 = DAT_006908fc;
  lVar5 = *(long *)(this + 0x130);
  if (*(long *)(this + 0x138) != lVar5) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      fVar9 = fVar9 + fVar2;
      local_60 = *(float *)(*(long *)(this + 0x120) + 0x8c);
      local_68 = (ulong)(uint)fVar9 << 0x20;
      local_5c = 52.0;
      GUIView::SetFrame(*(GUIView **)(lVar5 + lVar6),(Rectangle *)&local_68);
      lVar5 = *(long *)(this + 0x130);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
                    /* catch() { ... } // from try @ 00483b34 with catch @ 00483c58 */
    } while (uVar7 < (ulong)(*(long *)(this + 0x138) - lVar5 >> 4));
  }
  plVar4 = *(long **)(this + 0x120);
  local_5c = -(fVar9 + -30.0);
  local_60 = *(float *)((long)plVar4 + 0x8c);
  local_68 = (ulong)(uint)(fVar9 + -30.0) << 0x20;
                    /* catch() { ... } // from try @ 00483b20 with catch @ 00483c90 */
                    /* catch() { ... } // from try @ 00483af8 with catch @ 00483c94 */
  (**(code **)(*plVar4 + 0x130))(plVar4,&local_68);
  fVar2 = DAT_00683944;
  lVar5 = *(long *)(this + 0x120);
  fVar9 = -*(float *)(lVar5 + 0xec);
                    /* catch() { ... } // from try @ 00483ae4 with catch @ 00483ccc */
  fVar8 = -((*(float *)(lVar5 + 0xf0) + *(float *)(lVar5 + 0xf8)) - *(float *)(lVar5 + 0x90));
                    /* catch() { ... } // from try @ 00483ab4 with catch @ 00483cd0 */
  if (DAT_00683944 < ABS(fVar9 - *(float *)(lVar5 + 0x108))) {
    *(undefined4 *)(lVar5 + 0x124) = 0;
  }
  *(undefined1 *)(lVar5 + 0x104) = 1;
  *(float *)(lVar5 + 0x108) = fVar9;
  if (fVar2 < ABS(fVar8 - *(float *)(lVar5 + 0x134))) {
    *(undefined4 *)(lVar5 + 0x150) = 0;
  }
  *(undefined1 *)(lVar5 + 0x130) = 1;
  *(float *)(lVar5 + 0x134) = fVar8;
  *(float *)(lVar5 + 0x100) = fVar9;
  *(float *)(lVar5 + 300) = fVar8;
  pGVar3 = *(GUIView **)(this + 0x148);
  if (pGVar3 != (GUIView *)0x0) {
    local_60 = *(float *)(pGVar3 + 0x7c);
    local_5c = *(float *)(pGVar3 + 0x80);
                    /* catch() { ... } // from try @ 00483aa0 with catch @ 00483d3c */
    local_68 = CONCAT44(*(float *)(this + 0x88) + 15.0,
                        ((*(float *)(this + 0x84) + *(float *)(this + 0x8c)) - local_60) + -15.0);
    GUIView::SetFrame(pGVar3,(Rectangle *)&local_68);
    pGVar3 = *(GUIView **)(this + 0x158);
    if (pGVar3 != (GUIView *)0x0) {
      local_60 = *(float *)(pGVar3 + 0x7c);
                    /* try { // try from 00483d68 to 00583dbf has its CatchHandler @ 00483e64 */
      local_5c = *(float *)(pGVar3 + 0x80);
      local_68 = CONCAT44(*(float *)(*(long *)(this + 0x148) + 0x78) +
                          *(float *)(*(long *)(this + 0x148) + 0x80) + 10.0,
                          ((*(float *)(this + 0x84) + *(float *)(this + 0x8c)) - local_60) + -15.0);
      GUIView::SetFrame(pGVar3,(Rectangle *)&local_68);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


