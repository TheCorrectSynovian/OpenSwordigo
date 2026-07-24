/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046adb0
 * Function: Caver::GameOptions::~GameOptions
 * Signature: undefined __thiscall ~GameOptions(GameOptions * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOptions::~GameOptions() */

void __thiscall Caver::GameOptions::~GameOptions(GameOptions *this)

{
  void *pvVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  long *plVar10;
  void *pvVar11;
  
                    /* catch() { ... } // from try @ 0046a7f8 with catch @ 0046adc0 */
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  plVar10 = *(long **)(this + 0x48);
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0046a7d4 with catch @ 0046adf8 */
                    /* catch() { ... } // from try @ 0046a770 with catch @ 0046adfc */
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  plVar10 = *(long **)(this + 0x38);
  if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
    lVar7 = plVar10[2];
    plVar10[2] = lVar7 + -1;
    if (lVar7 + -1 == 0) {
                    /* catch() { ... } // from try @ 0046a73c with catch @ 0046ae60 */
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  pvVar11 = *(void **)(this + 8);
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar11 != pvVar1) {
    do {
      plVar10 = *(long **)((long)pvVar11 + 8);
      if ((plVar10 != (long *)0x0) && (lVar7 = plVar10[1], plVar10[1] = lVar7 + -1, lVar7 + -1 == 0)
         ) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
        lVar7 = plVar10[2];
        plVar10[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))(plVar10);
        }
      }
      pvVar11 = (void *)((long)pvVar11 + 0x10);
    } while (pvVar1 != pvVar11);
    pvVar11 = *(void **)(this + 8);
  }
                    /* catch() { ... } // from try @ 0046a718 with catch @ 0046aecc */
  if (pvVar11 != (void *)0x0) {
    operator_delete(pvVar11);
  }
                    /* try { // try from 0046aed8 to 0056af73 has its CatchHandler @ 0046aed8
                       catch() { ... } // from try @ 0046aed8 with catch @ 0046aed8
                       catch() { ... } // from try @ 0046b088 with catch @ 0046aed8
                       catch() { ... } // from try @ 0046b214 with catch @ 0046aed8 */
  puVar5 = (undefined *)(*(long *)this + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(*(long *)this + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar3) {
          *piVar8 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar5);
    }
  }
  if (*(long *)(lVar4 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


