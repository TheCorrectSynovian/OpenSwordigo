/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dd450
 * Function: Caver::ItemOverlay::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(ItemOverlay * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemOverlay::InitWithGameState(boost::shared_ptr<Caver::GameState> const&) */

void __thiscall Caver::ItemOverlay::InitWithGameState(ItemOverlay *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  long lVar2;
  shared_ptr *psVar3;
  shared_ptr *psVar4;
  shared_ptr *psVar5;
  ItemOverlay *this_00;
  long lVar6;
  shared_ptr *psVar7;
  shared_ptr *psVar8;
  long *plVar9;
  shared_ptr *local_50;
  shared_ptr *psStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar1 = *(undefined8 *)param_1;
  lVar6 = *(long *)(param_1 + 8);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 8) = *(long *)(lVar6 + 8) + 1;
  }
  plVar9 = *(long **)(this + 0xf8);
  *(undefined8 *)(this + 0xf0) = uVar1;
  *(long *)(this + 0xf8) = lVar6;
  if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar6 = plVar9[2];
    plVar9[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  local_50 = (shared_ptr *)0x0;
  psStack_48 = (shared_ptr *)0x0;
  local_40 = 0;
  this_00 = (ItemOverlay *)
            CharacterState::GetItemsOfType((CharacterState *)(*(long *)param_1 + 0x10),4,&local_50);
  psVar4 = psStack_48;
  psVar8 = local_50;
  psVar7 = local_50;
  if (local_50 != psStack_48) {
    do {
      this_00 = (ItemOverlay *)IsOverlayItem(this_00,psVar7);
      if (((ulong)this_00 & 1) != 0) {
        this_00 = (ItemOverlay *)UpdateItemCount(this,psVar7);
      }
      psVar5 = psStack_48;
      psVar7 = psVar7 + 0x10;
      psVar3 = local_50;
      psVar8 = psStack_48;
    } while (psVar4 != psVar7);
    for (; psVar3 != psVar5; psVar3 = psVar3 + 0x10) {
      plVar9 = *(long **)(psVar3 + 8);
      if ((plVar9 != (long *)0x0) && (lVar6 = plVar9[1], plVar9[1] = lVar6 + -1, lVar6 + -1 == 0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar6 = plVar9[2];
        plVar9[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
      }
      psVar8 = local_50;
    }
  }
  if (psVar8 != (shared_ptr *)0x0) {
    operator_delete(psVar8);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


