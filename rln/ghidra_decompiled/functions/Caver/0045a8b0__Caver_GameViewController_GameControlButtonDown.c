/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045a8b0
 * Function: Caver::GameViewController::GameControlButtonDown
 * Signature: undefined __thiscall GameControlButtonDown(GameViewController * this, GameControlButton param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::GameControlButtonDown(Caver::GameControlButton) */

void __thiscall
Caver::GameViewController::GameControlButtonDown(GameViewController *this,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  GameViewController *pGVar3;
  undefined8 *puVar4;
  SkillPickerViewController *this_00;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  long local_58;
  GameViewController *local_50;
  long local_48;
  GameViewController *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined8 **)(this + 200);
  if (puVar4 == (undefined8 *)0x0) goto LAB_0045aa74;
  (**(code **)*puVar4)(puVar4,param_2);
  if (param_2 == 0xc) {
    pcVar6 = *(code **)(*(long *)this + 0x20);
    local_40 = this;
  }
  else {
    if (param_2 == 8) {
      GameSceneView::SetMenuButtonHighlighted(*(GameSceneView **)(this + 0xd8),false);
      ShowMenu(this);
      goto LAB_0045aa74;
    }
    if (param_2 != 7) goto LAB_0045aa74;
    GameSceneView::SetSkillToggleButtonHighlighted(*(GameSceneView **)(this + 0xd8),false);
    this_00 = operator_new(0x60);
    SkillPickerViewController::SkillPickerViewController(this_00);
    boost::shared_ptr<Caver::SkillPickerViewController>::
    shared_ptr<Caver::SkillPickerViewController>
              ((shared_ptr<Caver::SkillPickerViewController> *)&local_48,this_00);
    uVar1 = *(undefined8 *)(this + 0x88);
    lVar5 = *(long *)(this + 0x90);
    if (lVar5 != 0) {
      *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
    }
    plVar7 = *(long **)(local_48 + 0x58);
    *(undefined8 *)(local_48 + 0x50) = uVar1;
    *(long *)(local_48 + 0x58) = lVar5;
    if ((plVar7 != (long *)0x0) && (lVar5 = plVar7[1], plVar7[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      lVar5 = plVar7[2];
      plVar7[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
    }
    pcVar6 = *(code **)(*(long *)this + 0x50);
    local_58 = local_48;
    local_50 = local_40;
    if (local_40 != (GameViewController *)0x0) {
      *(long *)(local_40 + 8) = *(long *)(local_40 + 8) + 1;
    }
    (*pcVar6)(this,&local_58);
    pGVar3 = local_50;
    if ((local_50 != (GameViewController *)0x0) &&
       (lVar5 = *(long *)(local_50 + 8), *(long *)(local_50 + 8) = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*(long *)local_50 + 0x10))(local_50);
      lVar5 = *(long *)(pGVar3 + 0x10);
      *(long *)(pGVar3 + 0x10) = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*(long *)pGVar3 + 0x18))(pGVar3);
      }
    }
    if ((local_40 == (GameViewController *)0x0) ||
       (lVar5 = *(long *)(local_40 + 8), *(long *)(local_40 + 8) = lVar5 + -1, lVar5 + -1 != 0))
    goto LAB_0045aa74;
    (**(code **)(*(long *)local_40 + 0x10))(local_40);
    lVar5 = *(long *)(local_40 + 0x10);
    *(long *)(local_40 + 0x10) = lVar5 + -1;
    if (lVar5 + -1 != 0) goto LAB_0045aa74;
    pcVar6 = *(code **)(*(long *)local_40 + 0x18);
  }
  (*pcVar6)(local_40);
LAB_0045aa74:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


