/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d6974
 * Function: Caver::GameOverlayView::SetSkillButtonDisabled
 * Signature: undefined __thiscall SetSkillButtonDisabled(GameOverlayView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::SetSkillButtonDisabled(bool) */

void __thiscall Caver::GameOverlayView::SetSkillButtonDisabled(GameOverlayView *this,bool param_1)

{
  uint uVar1;
  long lVar2;
  GUIButton *pGVar3;
  undefined4 *puVar4;
  undefined4 local_34;
  undefined4 local_30 [2];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pGVar3 = *(GUIButton **)(this + 400);
  uVar1 = *(uint *)(pGVar3 + 0x120);
  if ((((uint)param_1 ^ uVar1 >> 1) & 1) != 0) {
    if (param_1 == 0) {
      *(uint *)(pGVar3 + 0x120) = uVar1 & 0xfffffffd;
      if ((uVar1 & 0xfffffffd) != uVar1) {
        (**(code **)(*(long *)pGVar3 + 0x130))(pGVar3,uVar1);
        pGVar3 = *(GUIButton **)(this + 400);
      }
      puVar4 = &local_34;
      local_34 = 0xffffffff;
    }
    else {
      *(uint *)(pGVar3 + 0x120) = uVar1 | 2;
      if ((uVar1 | 2) != uVar1) {
        (**(code **)(*(long *)pGVar3 + 0x130))(pGVar3,uVar1);
        pGVar3 = *(GUIButton **)(this + 400);
      }
      local_30[0] = 0x64323296;
      puVar4 = local_30;
    }
    GUIButton::SetTintColor(pGVar3,puVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


