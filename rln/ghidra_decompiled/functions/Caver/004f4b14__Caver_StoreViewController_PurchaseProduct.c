/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f4b14
 * Function: Caver::StoreViewController::PurchaseProduct
 * Signature: undefined __thiscall PurchaseProduct(StoreViewController * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&) */

void __thiscall
Caver::StoreViewController::PurchaseProduct(StoreViewController *this,shared_ptr *param_1)

{
  long lVar1;
  long *plVar2;
  PurchaseViewController *this_00;
  code *pcVar3;
  long lVar4;
  PurchaseViewController *local_58;
  long *local_50;
  PurchaseViewController *local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this_00 = operator_new(0x80);
  PurchaseViewController::PurchaseViewController(this_00);
  boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>
            ((shared_ptr<Caver::PurchaseViewController> *)&local_48,this_00);
  *(StoreViewController **)(local_48 + 0x48) = this + 0x48;
  PurchaseViewController::SetProduct(local_48,param_1);
  pcVar3 = *(code **)(*(long *)this + 0x50);
  local_58 = local_48;
  local_50 = local_40;
  if (local_40 != (long *)0x0) {
    local_40[1] = local_40[1] + 1;
  }
  (*pcVar3)(this,&local_58);
  plVar2 = local_50;
  if ((local_50 != (long *)0x0) && (lVar4 = local_50[1], local_50[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_50 + 0x10))(local_50);
    lVar4 = plVar2[2];
    plVar2[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  if ((local_40 != (long *)0x0) && (lVar4 = local_40[1], local_40[1] = lVar4 + -1, lVar4 + -1 == 0))
  {
    (**(code **)(*local_40 + 0x10))(local_40);
    lVar4 = local_40[2];
    local_40[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*local_40 + 0x18))(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


