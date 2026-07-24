/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004748b4
 * Function: Caver::AchievementNotificationView::UpdateLayout
 * Signature: undefined __thiscall UpdateLayout(AchievementNotificationView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::AchievementNotificationView::UpdateLayout() */

void __thiscall Caver::AchievementNotificationView::UpdateLayout(AchievementNotificationView *this)

{
  long lVar1;
  GUILabel *this_00;
  GUIView *pGVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_b0;
  float local_a8;
  float local_a0;
  undefined4 local_94;
  float local_90;
  float local_84;
  undefined4 local_7c;
  float local_78;
  float local_6c;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = *(ulong *)(*(GUIView **)(this + 0x160) + 0x74);
  local_60 = _DAT_00690228;
  GUIView::SetFrame(*(GUIView **)(this + 0x160),(Rectangle *)&local_68);
  this_00 = *(GUILabel **)(this + 0x160);
  if (*(int *)(this_00 + 0x13c) != 2) {
    *(undefined4 *)(this_00 + 0x13c) = 2;
    GUILabel::UpdateText(this_00);
    this_00 = *(GUILabel **)(this + 0x160);
  }
  this_00[0x138] = (GUILabel)0x1;
  GUILabel::UpdateText(this_00);
  GUILabel::TextSize();
  pGVar2 = *(GUIView **)(this + 0x140);
  local_60 = *(undefined8 *)(pGVar2 + 0x7c);
  fVar5 = local_6c + DAT_00690220;
  iVar3 = (int)((fVar5 - *(float *)(pGVar2 + 0x80)) * 0.5);
  local_68 = CONCAT44(iVar3,iVar3);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  pGVar2 = *(GUIView **)(this + 0x150);
  fVar6 = *(float *)(*(long *)(this + 0x140) + 0x74) + *(float *)(*(long *)(this + 0x140) + 0x7c) +
          12.0;
  GUILabel::TextSize();
  GUILabel::TextSize();
  local_68 = CONCAT44(fVar5 + -21.0,fVar6);
  local_60 = CONCAT44(local_7c,local_78 + 1.0);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  pGVar2 = *(GUIView **)(this + 0x160);
  fVar4 = *(float *)(*(long *)(this + 0x150) + 0x78);
  GUILabel::TextSize();
  GUILabel::TextSize();
  GUILabel::TextSize();
  local_68 = CONCAT44((fVar4 + -7.0) - local_84,fVar6);
  local_60 = CONCAT44(local_94,local_90 + 1.0);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  GUILabel::TextSize();
  GUILabel::TextSize();
  pGVar2 = *(GUIView **)(this + 0x170);
  if (local_a8 <= local_a0) {
    local_a8 = local_a0;
  }
  if (local_a8 <= DAT_00690224) {
    local_a8 = DAT_00690224;
  }
  GUILabel::TextSize();
  local_68 = (ulong)(uint)(fVar6 + local_a8 + 25.0);
  local_60 = CONCAT44(fVar5,local_b0 + 1.0);
  GUIView::SetFrame(pGVar2,(Rectangle *)&local_68);
  local_68 = *(ulong *)(this + 0x74);
  local_60 = CONCAT44(fVar5,*(float *)(*(long *)(this + 0x170) + 0x74) +
                            *(float *)(*(long *)(this + 0x170) + 0x7c) + 8.0);
  GUIView::SetFrame((GUIView *)this,(Rectangle *)&local_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


