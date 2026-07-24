/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030d22c
 * Function: FUN_0030d22c
 * Signature: undefined FUN_0030d22c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0030d22c(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int *piVar8;
  int iVar9;
  
  puVar5 = PTR_imageTypeStrings_007e7180;
  puVar4 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  puVar6 = (undefined *)(*(long *)(PTR_imageTypeStrings_007e7180 + 0x18) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(*(long *)(PTR_imageTypeStrings_007e7180 + 0x18) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar6);
    }
  }
  puVar6 = (undefined *)(*(long *)(puVar5 + 0x10) + -0x18);
  if (puVar6 != puVar4) {
    piVar8 = (int *)(*(long *)(puVar5 + 0x10) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar6);
    }
  }
  puVar6 = (undefined *)(*(long *)(puVar5 + 8) + -0x18);
  if (puVar6 != puVar4) {
    piVar8 = (int *)(*(long *)(puVar5 + 8) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar6);
    }
  }
  puVar6 = (undefined *)(*(long *)puVar5 + -0x18);
  if (puVar6 != puVar4) {
    piVar8 = (int *)(*(long *)puVar5 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar9 = *piVar8;
      *piVar8 = iVar9 + -1;
    }
    else {
      do {
        iVar9 = *piVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = iVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar9 < 1) {
      operator_delete(puVar6);
    }
  }
  if (*(long *)(lVar3 + 0x28) != lVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


