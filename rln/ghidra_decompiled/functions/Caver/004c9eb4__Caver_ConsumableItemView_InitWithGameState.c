/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c9eb4
 * Function: Caver::ConsumableItemView::InitWithGameState
 * Signature: undefined __thiscall InitWithGameState(ConsumableItemView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConsumableItemView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&) */

void __thiscall
Caver::ConsumableItemView::InitWithGameState(ConsumableItemView *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  shared_ptr *psVar5;
  shared_ptr *psVar6;
  undefined *puVar7;
  undefined *puVar8;
  shared_ptr *psVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  int iVar13;
  shared_ptr *psVar14;
  shared_ptr *psVar15;
  long *plVar16;
  long local_80;
  shared_ptr *local_78;
  shared_ptr *psStack_70;
  undefined8 local_68;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 004c99fc with catch @ 004c9ed8 */
                    /* catch() { ... } // from try @ 004c99a0 with catch @ 004c9edc */
  uVar1 = *(undefined8 *)param_1;
  lVar11 = *(long *)(param_1 + 8);
  if (lVar11 != 0) {
    *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
  }
  plVar16 = *(long **)(this + 0x1d8);
  *(undefined8 *)(this + 0x1d0) = uVar1;
  *(long *)(this + 0x1d8) = lVar11;
  if ((plVar16 != (long *)0x0) && (lVar11 = plVar16[1], plVar16[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar16 + 0x10))(plVar16);
    lVar11 = plVar16[2];
    plVar16[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
                    /* catch() { ... } // from try @ 004c9974 with catch @ 004c9f38 */
      (**(code **)(*plVar16 + 0x18))(plVar16);
    }
  }
  local_78 = (shared_ptr *)0x0;
  psStack_70 = (shared_ptr *)0x0;
  local_68 = 0;
  CharacterState::GetItemsOfType((CharacterState *)(*(long *)param_1 + 0x10),0,&local_78);
  psVar9 = psStack_70;
  puVar8 = PTR_DAT_007e5de8;
  puVar7 = PTR_pthread_create_007e4e78;
  psVar15 = local_78;
  psVar14 = local_78;
  if (local_78 != psStack_70) {
    do {
      FUN_0066a528(&local_80,*(long *)psVar14 + 8);
      iVar10 = FUN_006689e0(&local_80,"healingpotion");
      if ((undefined *)(local_80 + -0x18) != puVar8) {
        piVar12 = (int *)(local_80 + -8);
        if (puVar7 == (undefined *)0x0) {
          iVar13 = *piVar12;
          *piVar12 = iVar13 + -1;
        }
        else {
          do {
            iVar13 = *piVar12;
                    /* catch() { ... } // from try @ 004c98b8 with catch @ 004c9fd8 */
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar4) {
              *piVar12 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (iVar13 < 1) {
          operator_delete((undefined *)(local_80 + -0x18));
        }
      }
      if (iVar10 == 0) {
        SetItem(this,psVar14);
        psVar5 = local_78;
        psVar15 = psStack_70;
        psVar6 = psStack_70;
        break;
      }
      psVar14 = psVar14 + 0x10;
      psVar5 = local_78;
      psVar15 = psStack_70;
      psVar6 = psStack_70;
    } while (psVar14 != psVar9);
    for (; psVar14 = psStack_70, bVar4 = psVar5 != psStack_70, psStack_70 = psVar6, bVar4;
        psVar5 = psVar5 + 0x10) {
      plVar16 = *(long **)(psVar5 + 8);
      if ((plVar16 != (long *)0x0) &&
         (lVar11 = plVar16[1], plVar16[1] = lVar11 + -1, lVar11 + -1 == 0)) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
                    /* catch() { ... } // from try @ 004c9894 with catch @ 004ca044 */
        lVar11 = plVar16[2];
        plVar16[2] = lVar11 + -1;
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
      }
      psVar15 = local_78;
      psVar6 = psStack_70;
      psStack_70 = psVar14;
    }
  }
  if (psVar15 != (shared_ptr *)0x0) {
    operator_delete(psVar15);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


