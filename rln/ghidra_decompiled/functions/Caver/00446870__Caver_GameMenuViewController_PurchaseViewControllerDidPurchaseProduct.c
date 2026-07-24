/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00446870
 * Function: Caver::GameMenuViewController::PurchaseViewControllerDidPurchaseProduct
 * Signature: undefined __thiscall PurchaseViewControllerDidPurchaseProduct(GameMenuViewController * this, PurchaseViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController*)
    */

void __thiscall
Caver::GameMenuViewController::PurchaseViewControllerDidPurchaseProduct
          (GameMenuViewController *this,PurchaseViewController *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  GUISwitch *this_00;
  long lVar9;
  int *piVar10;
  size_t *psVar11;
  void *local_70;
  void *local_68;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  plVar2 = *(long **)(param_1 + 0x70);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = plVar2[1] + 1;
  }
  FUN_0066a528(&local_68,uVar1);
  FUN_00666bb8(&local_70,"compass",auStack_60);
  psVar11 = (size_t *)((long)local_70 + -0x18);
  if (*(size_t *)((long)local_68 + -0x18) == *psVar11) {
    iVar8 = memcmp(local_68,local_70,*(size_t *)((long)local_68 + -0x18));
    bVar7 = iVar8 == 0;
  }
  else {
    bVar7 = false;
  }
  puVar6 = PTR_DAT_007e5de8;
  if (psVar11 != (size_t *)PTR_DAT_007e5de8) {
    piVar10 = (int *)((long)local_70 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar10;
      *piVar10 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(psVar11);
    }
  }
  if ((undefined *)((long)local_68 + -0x18) != puVar6) {
    piVar10 = (int *)((long)local_68 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar10;
      *piVar10 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete((undefined *)((long)local_68 + -0x18));
    }
  }
  if ((plVar2 != (long *)0x0) && (lVar9 = plVar2[1], plVar2[1] = lVar9 + -1, lVar9 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar9 = plVar2[2];
    plVar2[2] = lVar9 + -1;
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if ((bVar7) &&
     (this_00 = *(GUISwitch **)(*(long *)(this + 0xa8) + 0x108), this_00[0x148] == (GUISwitch)0x0))
  {
    this_00[0x148] = (GUISwitch)0x1;
    GUISwitch::UpdateFrameTexture(this_00);
    (**(code **)(*(long *)this + 0xa0))(this,*(undefined8 *)(this + 0xa8));
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


