/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051212c
 * Function: Caver::InventoryView::InventoryItemPanelTextForTrinketBonus
 * Signature: undefined __cdecl InventoryItemPanelTextForTrinketBonus(InventoryItemPanel * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryView::InventoryItemPanelTextForTrinketBonus(Caver::InventoryItemPanel*) */

void Caver::InventoryView::InventoryItemPanelTextForTrinketBonus(InventoryItemPanel *param_1)

{
  long lVar1;
  long in_x1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x130);
  if (*plVar3 == in_x1) {
    lVar4 = *(long *)(param_1 + 0x118);
    local_30 = *(long **)(*(long *)(*(long *)(in_x1 + 0x130) + 0x110) + 0x108);
    if (local_30 != (long *)0x0) {
      local_30[1] = local_30[1] + 1;
    }
    CharacterState::TrinketBonusForWeapons((shared_ptr *)(lVar4 + 0x10));
  }
  else if (plVar3[2] == in_x1) {
    lVar4 = *(long *)(param_1 + 0x118);
    local_30 = *(long **)(*(long *)(*(long *)(in_x1 + 0x130) + 0x110) + 0x108);
    if (local_30 != (long *)0x0) {
      local_30[1] = local_30[1] + 1;
    }
    CharacterState::TrinketBonusForArmors((shared_ptr *)(lVar4 + 0x10));
  }
  else {
    if (plVar3[4] != in_x1) {
      FUN_00666bb8();
      goto LAB_00512274;
    }
    lVar4 = *(long *)(param_1 + 0x118);
    local_30 = *(long **)(*(long *)(*(long *)(in_x1 + 0x130) + 0x110) + 0x108);
    if (local_30 != (long *)0x0) {
      local_30[1] = local_30[1] + 1;
    }
    CharacterState::TrinketBonusForSkills((shared_ptr *)(lVar4 + 0x10));
  }
  if ((local_30 != (long *)0x0) && (lVar4 = local_30[1], local_30[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_30 + 0x10))(local_30);
    lVar4 = local_30[2];
    local_30[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_30 + 0x18))(local_30);
    }
  }
LAB_00512274:
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


