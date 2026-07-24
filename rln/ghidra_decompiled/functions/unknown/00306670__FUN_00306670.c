/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00306670
 * Function: FUN_00306670
 * Signature: undefined FUN_00306670(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00306670(void)

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
  
  puVar5 = PTR_DAT_007e5de8;
  puVar4 = PTR_groundMeshTypeStrings_007e5d28;
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x28);
  puVar6 = (undefined *)(*(long *)(PTR_groundMeshTypeStrings_007e5d28 + 8) + -0x18);
  if (puVar6 != PTR_DAT_007e5de8) {
    piVar8 = (int *)(*(long *)(PTR_groundMeshTypeStrings_007e5d28 + 8) + -8);
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
  puVar6 = (undefined *)(*(long *)puVar4 + -0x18);
  if (puVar6 != puVar5) {
    piVar8 = (int *)(*(long *)puVar4 + -8);
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


