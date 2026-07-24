/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f4e04
 * Function: Caver::StoreViewController::PurchaseViewControllerDidPurchaseProduct
 * Signature: undefined __thiscall PurchaseViewControllerDidPurchaseProduct(StoreViewController * this, PurchaseViewController * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController*)
    */

void __thiscall
Caver::StoreViewController::PurchaseViewControllerDidPurchaseProduct
          (StoreViewController *this,PurchaseViewController *param_1)

{
  string *psVar1;
  string *psVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  code *pcVar12;
  long local_68 [2];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  plVar11 = *(long **)(this + 0x50);
  if (plVar11 != (long *)0x0) {
    pcVar12 = *(code **)(*plVar11 + 8);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    plVar10 = *(long **)(param_1 + 0x70);
    if (plVar10 != (long *)0x0) {
      plVar10[1] = plVar10[1] + 1;
    }
    FUN_0066a528(local_68,uVar6);
    (*pcVar12)(plVar11,this,local_68);
    if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
      piVar8 = (int *)(local_68[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar9 = *piVar8;
        *piVar8 = iVar9 + -1;
      }
      else {
        do {
          iVar9 = *piVar8;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar4) {
            *piVar8 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      if (iVar9 < 1) {
        operator_delete((undefined *)(local_68[0] + -0x18));
      }
    }
    if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0))
    {
      (**(code **)(*plVar10 + 0x10))(plVar10);
      lVar7 = plVar10[2];
      plVar10[2] = lVar7 + -1;
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar10 + 0x18))(plVar10);
      }
    }
  }
  plVar11 = *(long **)(param_1 + 0x70);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  if (plVar11 != (long *)0x0) {
    plVar11[1] = plVar11[1] + 1;
  }
  FUN_0066a528(local_68,uVar6);
  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert
            ((set<std::string,std::less<std::string>,std::allocator<std::string>> *)(this + 0xa0),
             (string *)local_68);
  if ((undefined *)(local_68[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar8 = (int *)(local_68[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar4) {
          *piVar8 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete((undefined *)(local_68[0] + -0x18));
    }
  }
  if ((plVar11 != (long *)0x0) && (lVar7 = plVar11[1], plVar11[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar7 = plVar11[2];
    plVar11[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
  }
  psVar2 = *(string **)(this + 0x78);
  for (psVar1 = *(string **)(this + 0x70); psVar1 != psVar2; psVar1 = psVar1 + 8) {
    UpdateProductBuyButton(this,psVar1);
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


