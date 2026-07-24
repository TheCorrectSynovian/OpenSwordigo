/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0030b3d4
 * Function: FUN_0030b3d4
 * Signature: undefined FUN_0030b3d4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0030b3d4(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long *plVar11;
  
  puVar6 = PTR_DAT_007e5de8;
  puVar5 = PTR_pthread_create_007e4e78;
  puVar4 = PTR_titles_007e49a8;
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
  plVar11 = (long *)(PTR_titles_007e49a8 + 0x78);
  do {
    while( true ) {
      plVar11 = plVar11 + -1;
      puVar7 = (undefined *)(*plVar11 + -0x18);
      if (puVar7 != puVar6) break;
LAB_0030b424:
      if (plVar11 == (long *)puVar4) goto LAB_0030b470;
    }
    piVar9 = (int *)(*plVar11 + -8);
    if (puVar5 == (undefined *)0x0) {
      iVar10 = *piVar9;
      *piVar9 = iVar10 + -1;
    }
    else {
      do {
        iVar10 = *piVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar2) {
          *piVar9 = iVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (0 < iVar10) goto LAB_0030b424;
    operator_delete(puVar7);
  } while (plVar11 != (long *)puVar4);
LAB_0030b470:
  if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


