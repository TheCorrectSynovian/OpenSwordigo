/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ead7c
 * Function: Caver::PurchaseViewController::SetProduct
 * Signature: undefined __thiscall SetProduct(PurchaseViewController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseViewController::SetProduct(boost::shared_ptr<Caver::StoreProduct> const&) */

void __thiscall
Caver::PurchaseViewController::SetProduct(PurchaseViewController *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  long *plVar8;
  long local_48 [2];
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  FUN_0066a528(local_48,*(undefined8 *)param_1);
  FUN_0066a6a8(this + 0x60,local_48);
  if ((undefined *)(local_48[0] + -0x18) != PTR_DAT_007e5de8) {
    piVar6 = (int *)(local_48[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete((undefined *)(local_48[0] + -0x18));
      uVar1 = *(undefined8 *)param_1;
      lVar5 = *(long *)(param_1 + 8);
      goto joined_r0x004eaea4;
    }
  }
  uVar1 = *(undefined8 *)param_1;
  lVar5 = *(long *)(param_1 + 8);
joined_r0x004eaea4:
  if (lVar5 != 0) {
    *(long *)(lVar5 + 8) = *(long *)(lVar5 + 8) + 1;
  }
  plVar8 = *(long **)(this + 0x70);
  *(undefined8 *)(this + 0x68) = uVar1;
  *(long *)(this + 0x70) = lVar5;
  if ((plVar8 != (long *)0x0) && (lVar5 = plVar8[1], plVar8[1] = lVar5 + -1, lVar5 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar5 = plVar8[2];
    plVar8[2] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  UpdateView(this);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


