/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004aae7c
 * Function: Caver::StoreController::~StoreController
 * Signature: undefined __thiscall ~StoreController(StoreController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController::~StoreController() */

void __thiscall Caver::StoreController::~StoreController(StoreController *this)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  
  lVar2 = tpidr_el0;
  lVar7 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined *)(*(long *)(this + 8) + -0x18);
  bVar3 = puVar4 != PTR_DAT_007e5de8;
  *(undefined **)this = PTR_vtable_007e6678 + 0x10;
  if (bVar3) {
    piVar5 = (int *)(*(long *)(this + 8) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar6 = *piVar5;
      *piVar5 = iVar6 + -1;
    }
    else {
      do {
        iVar6 = *piVar5;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = iVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar6 < 1) {
      operator_delete(puVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


