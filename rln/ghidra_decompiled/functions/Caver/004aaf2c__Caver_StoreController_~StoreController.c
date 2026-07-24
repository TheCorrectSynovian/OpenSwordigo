/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004aaf2c
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
  long lVar5;
  int *piVar6;
  int iVar7;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004aad7c with catch @ 004aaf44
                        */
  puVar4 = (undefined *)(*(long *)(this + 8) + -0x18);
                    /* try { // try from 004aaf64 to 005aaf8b has its CatchHandler @ 004aaf94 */
  bVar3 = puVar4 != PTR_DAT_007e5de8;
  *(undefined **)this = PTR_vtable_007e6678 + 0x10;
  if (bVar3) {
                    /* try { // try from 004aafa0 to 005ab057 has its CatchHandler @ 004aafa0
                       catch(type#1 @ 00000000) { ... } // from try @ 004aafa0 with catch @ 004aafa0
                       catch(type#1 @ 00000000) { ... } // from try @ 004ab064 with catch @ 004aafa0
                       catch(type#1 @ 00000000) { ... } // from try @ 004ab11c with catch @ 004aafa0
                        */
    piVar6 = (int *)(*(long *)(this + 8) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *piVar6;
      *piVar6 = iVar7 + -1;
    }
    else {
      do {
        iVar7 = *piVar6;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(puVar4);
    }
  }
  operator_delete(this);
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 004aaf8c to 005aaf97 has its CatchHandler @ 004aab74 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004aaf64 with catch @ 004aaf94
                        */
  return;
}


