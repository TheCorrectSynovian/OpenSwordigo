/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00489004
 * Function: Caver::OnlineController::SharedController
 * Signature: undefined __cdecl SharedController(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineController::SharedController() */

void Caver::OnlineController::SharedController(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  OnlineController *pOVar4;
  long lVar5;
  long local_48;
  long *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_007e9928 == 0) {
    pOVar4 = operator_new(0x10);
    *(undefined **)pOVar4 = PTR_vtable_007e5a60 + 0x10;
    *(undefined8 *)(pOVar4 + 8) = 0;
    boost::shared_ptr<Caver::OnlineController>::shared_ptr<Caver::OnlineController>
              ((shared_ptr<Caver::OnlineController> *)&local_48,pOVar4);
    plVar3 = local_40;
    lVar5 = local_48;
    plVar2 = DAT_007e9930;
    local_48 = DAT_007e9928;
    local_40 = DAT_007e9930;
    DAT_007e9928 = lVar5;
    DAT_007e9930 = plVar3;
    if ((plVar2 != (long *)0x0) && (lVar5 = plVar2[1], plVar2[1] = lVar5 + -1, lVar5 + -1 == 0)) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar5 = plVar2[2];
      plVar2[2] = lVar5 + -1;
      if (lVar5 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
    *(undefined4 *)(DAT_007e9928 + 8) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


