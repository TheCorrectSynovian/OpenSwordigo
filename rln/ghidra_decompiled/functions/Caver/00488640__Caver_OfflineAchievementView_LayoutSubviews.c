/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00488640
 * Function: Caver::OfflineAchievementView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(OfflineAchievementView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementView::LayoutSubviews() */

void __thiscall Caver::OfflineAchievementView::LayoutSubviews(OfflineAchievementView *this)

{
  long lVar1;
  GUIView *pGVar2;
  GUILabel *pGVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_68;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  pGVar2 = *(GUIView **)(this + 0x108);
  local_5c = *(float *)(pGVar2 + 0x80);
  local_60 = *(float *)(pGVar2 + 0x7c);
  local_68 = (ulong)(uint)(int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) -
                               local_5c * 0.5) << 0x20;
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  pGVar3 = *(GUILabel **)(this + 0x118);
  *(undefined4 *)(pGVar3 + 0x130) = 4;
  GUILabel::UpdateBounds(pGVar3);
  pGVar3 = *(GUILabel **)(this + 0x118);
  *(undefined4 *)(pGVar3 + 0x134) = 4;
  GUILabel::UpdateBounds(pGVar3);
  GUIView::SetFrame(*(GUIView **)(this + 0x118),(Rectangle *)(*(long *)(this + 0x108) + 0x74));
  pGVar3 = *(GUILabel **)(this + 0x158);
  *(undefined4 *)(pGVar3 + 0x130) = 1;
  GUILabel::UpdateBounds(pGVar3);
  pGVar2 = *(GUIView **)(this + 0x158);
  local_68 = *(long *)(pGVar2 + 0x74);
  local_5c = *(float *)(*(long *)(pGVar2 + 0xf0) + 0x48);
  local_60 = 60.0;
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  pGVar2 = *(GUIView **)(this + 0x158);
  local_60 = *(float *)(pGVar2 + 0x7c);
  local_5c = *(float *)(pGVar2 + 0x80);
  local_68 = CONCAT44((int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) -
                           local_5c * 0.5),
                      (*(float *)(this + 0x84) + *(float *)(this + 0x8c)) - local_60);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  local_68 = *(long *)(*(GUIView **)(this + 0x138) + 0x74);
  local_5c = 100.0;
  fVar6 = *(float *)(*(long *)(this + 0x108) + 0x74) + *(float *)(*(long *)(this + 0x108) + 0x7c) +
          10.0;
  fVar7 = (*(float *)(*(long *)(this + 0x158) + 0x74) + -10.0) - fVar6;
  local_60 = fVar7;
  GUIView::SetFrame(*(GUIView **)(this + 0x138),(Rectangle *)&local_68);
  local_68 = *(long *)(*(GUIView **)(this + 0x148) + 0x74);
  local_5c = 100.0;
  local_60 = fVar7;
  GUIView::SetFrame(*(GUIView **)(this + 0x148),(Rectangle *)&local_68);
  pGVar3 = *(GUILabel **)(this + 0x148);
  if (*(int *)(pGVar3 + 0x13c) != 2) {
    *(undefined4 *)(pGVar3 + 0x13c) = 2;
    GUILabel::UpdateText(pGVar3);
    pGVar3 = *(GUILabel **)(this + 0x148);
  }
  pGVar3[0x138] = (GUILabel)0x1;
  GUILabel::UpdateText(pGVar3);
  pGVar2 = *(GUIView **)(this + 0x148);
  GUILabel::TextSize();
  local_68 = 0;
  local_60 = fVar7;
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  pGVar2 = *(GUIView **)(this + 0x138);
  fVar4 = *(float *)(*(long *)(this + 0x148) + 0x78);
  fVar5 = *(float *)(*(long *)(this + 0x148) + 0x80);
  GUILabel::TextSize();
  local_68 = (ulong)(uint)(fVar4 + fVar5 + 8.0) << 0x20;
  local_60 = fVar7;
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  local_68 = *(long *)(*(GUIView **)(this + 0x128) + 0x74);
  local_5c = *(float *)(*(long *)(this + 0x138) + 0x78) + *(float *)(*(long *)(this + 0x138) + 0x80)
  ;
  local_60 = fVar7;
  GUIView::SetFrame(*(GUIView **)(this + 0x128),(Rectangle *)&local_68);
  pGVar2 = *(GUIView **)(this + 0x128);
  local_5c = *(float *)(pGVar2 + 0x80);
  local_60 = *(float *)(pGVar2 + 0x7c);
  local_68 = CONCAT44((int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5) -
                           local_5c * 0.5),fVar6);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


