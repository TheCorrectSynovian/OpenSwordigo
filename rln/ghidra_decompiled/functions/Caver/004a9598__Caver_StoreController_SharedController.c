/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a9598
 * Function: Caver::StoreController::SharedController
 * Signature: undefined __cdecl SharedController(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController::SharedController() */

void Caver::StoreController::SharedController(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  StoreController *pSVar5;
  long lVar6;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (DAT_007e9970 == 0) {
    pSVar5 = operator_new(0x10);
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    *(undefined **)pSVar5 = PTR_vtable_007e6678 + 0x10;
    *(undefined **)(pSVar5 + 8) = puVar1;
    boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>
              ((shared_ptr<Caver::StoreController> *)&local_48,pSVar5);
    plVar4 = local_40;
    lVar6 = local_48;
    plVar3 = DAT_007e9978;
    local_48 = DAT_007e9970;
    local_40 = DAT_007e9978;
    DAT_007e9970 = lVar6;
    DAT_007e9978 = plVar4;
    if ((plVar3 != (long *)0x0) && (lVar6 = plVar3[1], plVar3[1] = lVar6 + -1, lVar6 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar6 = plVar3[2];
      plVar3[2] = lVar6 + -1;
      if (lVar6 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(DAT_007e9970);
  }
  return;
}


