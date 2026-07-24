/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0045afa8
 * Function: Caver::GameViewController::RemoveItemFromCharacter
 * Signature: undefined __thiscall RemoveItemFromCharacter(GameViewController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameViewController::RemoveItemFromCharacter(boost::shared_ptr<Caver::Item> const&) */

void __thiscall
Caver::GameViewController::RemoveItemFromCharacter(GameViewController *this,shared_ptr *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  size_t *psVar12;
  void *local_78;
  long *local_70;
  void *local_68 [2];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar9 = *(long *)(this + 0xa8);
  plVar1 = *(long **)(this + 0xb0);
  if (plVar1 != (long *)0x0) {
    plVar1[1] = plVar1[1] + 1;
  }
  CharacterState::RemoveItem((CharacterState *)(lVar9 + 0x10),*(Item **)param_1);
  if ((plVar1 != (long *)0x0) && (lVar9 = plVar1[1], plVar1[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar9 = plVar1[2];
    plVar1[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  iVar7 = **(int **)param_1;
  if (iVar7 == 0) {
    FUN_0066a528(&local_78,*(int **)param_1 + 2);
    lVar10 = *(long *)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0x1d8);
    lVar9 = *(long *)(lVar10 + 0x1e0);
    plVar1 = *(long **)(lVar10 + 0x1e8);
    if (plVar1 != (long *)0x0) {
      plVar1[1] = plVar1[1] + 1;
    }
    FUN_0066a528(local_68,lVar9 + 8);
    psVar12 = (size_t *)((long)local_68[0] + -0x18);
    if (*(size_t *)((long)local_78 + -0x18) == *psVar12) {
      iVar7 = memcmp(local_78,local_68[0],*(size_t *)((long)local_78 + -0x18));
      bVar6 = iVar7 == 0;
    }
    else {
      bVar6 = false;
    }
    puVar5 = PTR_DAT_007e5de8;
    if (psVar12 != (size_t *)PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 0045adc8 with catch @ 0045b1e0 */
                    /* catch() { ... } // from try @ 0045ad6c with catch @ 0045b1e4 */
      piVar11 = (int *)((long)local_68[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar11;
        *piVar11 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
                    /* catch() { ... } // from try @ 0045ad40 with catch @ 0045b240 */
        operator_delete(psVar12);
      }
    }
    if ((plVar1 != (long *)0x0) && (lVar9 = plVar1[1], plVar1[1] = lVar9 + -1, lVar9 + -1 == 0)) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar9 = plVar1[2];
      plVar1[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
                    /* catch() { ... } // from try @ 0045ae18 with catch @ 0045b14c */
    if ((undefined *)((long)local_78 + -0x18) != puVar5) {
      piVar11 = (int *)((long)local_78 + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar11;
        *piVar11 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *piVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)((long)local_78 + -0x18));
      }
    }
    if (bVar6) {
      local_78 = (void *)0x0;
      local_70 = (long *)0x0;
      ConsumableItemView::SetItem
                (*(ConsumableItemView **)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0x1d8),
                 (shared_ptr *)&local_78);
      plVar1 = local_70;
      if ((local_70 != (long *)0x0) &&
         (lVar9 = local_70[1], local_70[1] = lVar9 + -1, lVar9 + -1 == 0)) {
        (**(code **)(*local_70 + 0x10))(local_70);
        lVar9 = plVar1[2];
        plVar1[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
                    /* catch() { ... } // from try @ 0045adec with catch @ 0045b1a8 */
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
    }
  }
  else if ((iVar7 == 4) &&
          (uVar8 = ItemOverlay::IsOverlayItem
                             (*(ItemOverlay **)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0x228),
                              param_1), (uVar8 & 1) != 0)) {
    ItemOverlay::UpdateItemCount
              (*(ItemOverlay **)(*(long *)(*(long *)(this + 0xd8) + 0x100) + 0x228),param_1);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


