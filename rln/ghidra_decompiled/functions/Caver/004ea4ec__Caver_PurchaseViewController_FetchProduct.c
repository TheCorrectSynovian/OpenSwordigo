/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ea4ec
 * Function: Caver::PurchaseViewController::FetchProduct
 * Signature: undefined __cdecl FetchProduct(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseViewController::FetchProduct(std::string const&) */

void Caver::PurchaseViewController::FetchProduct(string *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined *local_b8;
  undefined8 uStack_b0;
  string *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 uStack_80;
  string *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  string *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_0066a6a8(param_1 + 0x60);
  UpdateView((PurchaseViewController *)param_1);
  plVar2 = (long *)StoreController::SharedController();
  plVar6 = *(long **)(param_1 + 0x10);
  if ((plVar6 == (long *)0x0) || (plVar6[1] == 0)) {
    local_70 = PTR_vtable_007e6120 + 0x10;
    boost::throw_exception<boost::bad_weak_ptr>((bad_weak_ptr *)&local_70);
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 8);
    pcVar7 = *(code **)(*plVar2 + 0x20);
    plVar6[1] = plVar6[1] + 2;
    uStack_68 = 0;
    local_70 = PTR_ProductRequestCompletion_007e5ea0;
    local_60 = param_1;
    uVar3 = boost::detail::function::has_empty_target(&local_70);
    if ((uVar3 & 1) == 0) {
      local_a8 = local_60;
      uStack_b0 = uStack_68;
      local_b8 = local_70;
      puVar4 = PTR_stored_vtable_007e62b8;
    }
    else {
      puVar4 = (undefined *)0x0;
    }
    plVar6[2] = plVar6[2] + 1;
    local_90 = (undefined *)0x0;
    local_a0 = uVar8;
    local_98 = plVar6;
    if (puVar4 != (undefined *)0x0) {
      local_90 = puVar4;
      if (((ulong)puVar4 & 1) == 0) {
        (**(code **)((ulong)puVar4 & 0xfffffffffffffffe))(&local_b8,&local_88,0);
      }
      else {
        local_78 = local_a8;
        uStack_80 = uStack_b0;
        local_88 = local_b8;
      }
    }
    (*pcVar7)(plVar2,param_1 + 0x60,&local_a0);
    if (local_90 != (undefined *)0x0) {
      if ((((ulong)local_90 & 1) == 0) &&
         (*(code **)((ulong)local_90 & 0xfffffffffffffffe) != (code *)0x0)) {
        (**(code **)((ulong)local_90 & 0xfffffffffffffffe))(&local_88,&local_88,2);
      }
      local_90 = (undefined *)0x0;
    }
    if ((local_98 != (long *)0x0) &&
       (lVar5 = local_98[2], local_98[2] = lVar5 + -1, lVar5 + -1 == 0)) {
                    /* try { // try from 004ea650 to 005eacdb has its CatchHandler @ 004ea650
                       catch() { ... } // from try @ 004ea650 with catch @ 004ea650
                       catch() { ... } // from try @ 004eace0 with catch @ 004ea650 */
      (**(code **)(*local_98 + 0x18))();
    }
    if (((puVar4 != (undefined *)0x0) && (((ulong)puVar4 & 1) == 0)) &&
       (*(code **)((ulong)puVar4 & 0xfffffffffffffffe) != (code *)0x0)) {
      (**(code **)((ulong)puVar4 & 0xfffffffffffffffe))(&local_b8,&local_b8,2);
    }
    lVar5 = plVar6[1];
    plVar6[1] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    lVar5 = plVar6[1];
    plVar6[1] = lVar5 + -1;
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar5 = plVar6[2];
      plVar6[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    if (*(long *)(lVar1 + 0x28) == local_58) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


