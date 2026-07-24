/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051a708
 * Function: Caver::ItemInfoView::SetSkill
 * Signature: undefined __thiscall SetSkill(ItemInfoView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemInfoView::SetSkill(boost::shared_ptr<Caver::Skill> const&) */

void __thiscall Caver::ItemInfoView::SetSkill(ItemInfoView *this,shared_ptr *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  int *piVar6;
  size_t *psVar7;
  void *pvVar8;
  GUILabel *pGVar9;
  void *local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  MenuItemSlot::SetSkill(*(MenuItemSlot **)(this + 0x100),param_1,true);
  pGVar9 = *(GUILabel **)(this + 0x130);
  FUN_0066a528(local_58,*(long *)param_1 + 8);
  pvVar8 = local_58[0];
  psVar7 = (size_t *)((long)local_58[0] + -0x18);
  if ((*psVar7 != *(size_t *)((long)*(void **)(pGVar9 + 0x100) + -0x18)) ||
     (iVar5 = memcmp(local_58[0],*(void **)(pGVar9 + 0x100),*psVar7), iVar5 != 0)) {
    FUN_0066a6a8(pGVar9 + 0x100,local_58);
    GUILabel::UpdateText(pGVar9);
                    /* catch() { ... } // from try @ 0051a6a0 with catch @ 0051a794 */
    psVar7 = (size_t *)((long)local_58[0] + -0x18);
    pvVar8 = local_58[0];
  }
  puVar4 = PTR_DAT_007e5de8;
  if (psVar7 != (size_t *)PTR_DAT_007e5de8) {
    piVar6 = (int *)((long)pvVar8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar6;
      *piVar6 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete(psVar7);
    }
  }
  pGVar9 = *(GUILabel **)(this + 0x140);
  FUN_0066a528(local_58,*(long *)param_1 + 0x10);
  pvVar8 = local_58[0];
  psVar7 = (size_t *)((long)local_58[0] + -0x18);
  if ((*psVar7 != *(size_t *)((long)*(void **)(pGVar9 + 0x100) + -0x18)) ||
     (iVar5 = memcmp(local_58[0],*(void **)(pGVar9 + 0x100),*psVar7), iVar5 != 0)) {
    FUN_0066a6a8(pGVar9 + 0x100,local_58);
    GUILabel::UpdateText(pGVar9);
    psVar7 = (size_t *)((long)local_58[0] + -0x18);
    pvVar8 = local_58[0];
  }
  if (psVar7 != (size_t *)puVar4) {
    piVar6 = (int *)((long)pvVar8 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar6;
      *piVar6 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete(psVar7);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


