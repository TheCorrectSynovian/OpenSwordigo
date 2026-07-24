/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004eaf20
 * Function: Caver::PurchaseViewController::EnableBuyButton
 * Signature: undefined __thiscall EnableBuyButton(PurchaseViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseViewController::EnableBuyButton() */

void __thiscall Caver::PurchaseViewController::EnableBuyButton(PurchaseViewController *this)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  PurchaseView *pPVar6;
  undefined *puVar7;
  int *piVar8;
  int iVar9;
  long local_60;
  long local_58 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pPVar6 = *(PurchaseView **)(this + 0x50);
  *(undefined1 *)(*(long *)(pPVar6 + 0x128) + 0xe4) = 0;
  PurchaseView::SetBuyButtonEnabled(pPVar6,true);
  FUN_0066a528(local_58,*(long *)(this + 0x68) + 8);
  iVar5 = FUN_006689e0(local_58,&DAT_00692fe2);
  puVar4 = PTR_DAT_007e5de8;
  if ((undefined *)(local_58[0] + -0x18) == PTR_DAT_007e5de8) {
LAB_004eaf98:
    pPVar6 = *(PurchaseView **)(this + 0x50);
    if (iVar5 == 0) goto LAB_004eb080;
LAB_004eafa0:
    FUN_0066a528(&local_60,*(long *)(this + 0x68) + 8);
    FUN_0035a030(local_58,&DAT_0068f698,&local_60);
    PurchaseView::SetBuyButtonTitle(pPVar6,(string *)local_58);
    if ((undefined *)(local_58[0] + -0x18) != puVar4) {
                    /* catch() { ... } // from try @ 004eacdc with catch @ 004eb03c */
      piVar8 = (int *)(local_58[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar5 = *piVar8;
        *piVar8 = iVar5 + -1;
      }
      else {
        do {
          iVar5 = *piVar8;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar2) {
            *piVar8 = iVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar5 < 1) {
        operator_delete((undefined *)(local_58[0] + -0x18));
      }
    }
    puVar7 = (undefined *)(local_60 + -0x18);
    if (puVar7 == puVar4) goto LAB_004eb0ac;
    piVar8 = (int *)(local_60 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar8;
      *piVar8 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  else {
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < iVar9) goto LAB_004eaf98;
    operator_delete((undefined *)(local_58[0] + -0x18));
    pPVar6 = *(PurchaseView **)(this + 0x50);
    if (iVar5 != 0) goto LAB_004eafa0;
LAB_004eb080:
    FUN_0066a528(local_58,*(long *)(this + 0x68) + 8);
    PurchaseView::SetBuyButtonTitle(pPVar6,(string *)local_58);
    puVar7 = (undefined *)(local_58[0] + -0x18);
    if (puVar7 == puVar4) goto LAB_004eb0ac;
    piVar8 = (int *)(local_58[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *piVar8;
      *piVar8 = iVar5 + -1;
    }
    else {
      do {
        iVar5 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  if (iVar5 < 1) {
    operator_delete(puVar7);
  }
LAB_004eb0ac:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


