/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030559c
 * Function: FUN_0030559c
 * Signature: undefined FUN_0030559c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0030559c(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int *piVar7;
  int iVar8;
  
  puVar4 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  puVar5 = (undefined *)(DAT_007e8ba0 + -0x18);
  if (puVar5 != PTR_DAT_007e5de8) {
    piVar7 = (int *)(DAT_007e8ba0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar5);
    }
  }
  puVar5 = (undefined *)(DAT_007e8b98 + -0x18);
  if (puVar5 != puVar4) {
    piVar7 = (int *)(DAT_007e8b98 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar7;
      *piVar7 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar2) {
          *piVar7 = iVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar5);
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


