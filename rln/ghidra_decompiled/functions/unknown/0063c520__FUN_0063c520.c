/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063c520
 * Function: FUN_0063c520
 * Signature: undefined FUN_0063c520(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0063c520(long param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  void *pvVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  void *pvVar18;
  void *pvVar19;
  
  if (param_3 == 0) {
    return;
  }
                    /* try { // try from 0063c540 to 0073c543 has its CatchHandler @ 0063ccb4 */
  uVar5 = FUN_0063c4d0(param_2);
                    /* try { // try from 0063c550 to 0073c557 has its CatchHandler @ 0063ccb0 */
  if (*(long *)(param_1 + 0x10) - 1U < uVar5) {
    uVar17 = uVar5 + 4;
                    /* try { // try from 0063c658 to 0073c67f has its CatchHandler @ 0063cb1c */
    uVar8 = uVar17 * 8;
    if (0xfe0000000000000 < uVar17) {
      uVar8 = 0xffffffffffffffff;
    }
    pvVar18 = *(void **)(param_1 + 8);
    pvVar9 = operator_new__(uVar8);
    uVar8 = *(ulong *)(param_1 + 0x10);
    if (uVar8 != 0) {
      lVar10 = 0;
      do {
                    /* try { // try from 0063c684 to 0073c68b has its CatchHandler @ 0063cc08 */
        *(undefined8 *)((long)pvVar9 + lVar10) = *(undefined8 *)(*(long *)(param_1 + 8) + lVar10);
        lVar10 = lVar10 + 8;
      } while (lVar10 != uVar8 * 8);
    }
    if (uVar8 < uVar17) {
      lVar10 = uVar17 - uVar8;
      uVar2 = (lVar10 - 2U >> 1) + 1;
      lVar15 = uVar2 * 2;
      if (2 < (uVar5 + 3) - uVar8) {
                    /* try { // try from 0063c6cc to 0073c6d3 has its CatchHandler @ 0063cc04 */
        uVar13 = 0;
        puVar14 = (undefined8 *)((long)pvVar9 + uVar8 * 8);
        do {
          puVar14[1] = 0;
          *puVar14 = 0;
          uVar13 = uVar13 + 1;
          puVar14 = puVar14 + 2;
        } while (uVar13 < uVar2);
        uVar8 = uVar8 + lVar15;
        if (lVar10 == lVar15) goto LAB_0063c6fc;
      }
      *(undefined8 *)((long)pvVar9 + uVar8 * 8) = 0;
                    /* try { // try from 0063c6f4 to 0073c71b has its CatchHandler @ 0063cb18 */
      if (uVar8 + 1 < uVar17) {
        *(undefined8 *)((long)pvVar9 + (uVar8 + 1) * 8) = 0;
        if (uVar8 + 2 < uVar17) {
          *(undefined8 *)((long)pvVar9 + (uVar8 + 2) * 8) = 0;
        }
      }
    }
LAB_0063c6fc:
    uVar8 = uVar17 * 8;
    pvVar19 = *(void **)(param_1 + 0x18);
    if (0xfe0000000000000 < uVar17) {
      uVar8 = 0xffffffffffffffff;
    }
    pvVar11 = operator_new__(uVar8);
    uVar8 = *(ulong *)(param_1 + 0x10);
    if (uVar8 != 0) {
      lVar10 = 0;
      do {
        *(undefined8 *)((long)pvVar11 + lVar10) =
             *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar10);
                    /* try { // try from 0063c730 to 0073c73f has its CatchHandler @ 0063ce64 */
        lVar10 = lVar10 + 8;
      } while (lVar10 != uVar8 * 8);
    }
    if (uVar8 < uVar17) {
      lVar10 = uVar17 - uVar8;
      uVar2 = (lVar10 - 2U >> 1) + 1;
                    /* try { // try from 0063c760 to 0073c787 has its CatchHandler @ 0063ce68 */
      lVar15 = uVar2 * 2;
      if (2 < (uVar5 + 3) - uVar8) {
        uVar13 = 0;
        puVar14 = (undefined8 *)((long)pvVar11 + uVar8 * 8);
        do {
          puVar14[1] = 0;
          *puVar14 = 0;
          uVar13 = uVar13 + 1;
          puVar14 = puVar14 + 2;
        } while (uVar13 < uVar2);
        uVar8 = uVar8 + lVar15;
        if (lVar15 - lVar10 == 0) goto LAB_0063c7a0;
      }
      *(undefined8 *)((long)pvVar11 + uVar8 * 8) = 0;
      if (uVar8 + 1 < uVar17) {
        *(undefined8 *)((long)pvVar11 + (uVar8 + 1) * 8) = 0;
        if (uVar8 + 2 < uVar17) {
          *(undefined8 *)((long)pvVar11 + (uVar8 + 2) * 8) = 0;
        }
      }
    }
LAB_0063c7a0:
    *(ulong *)(param_1 + 0x10) = uVar17;
    *(void **)(param_1 + 8) = pvVar9;
                    /* try { // try from 0063c7a8 to 0073c7cf has its CatchHandler @ 0063cf14 */
    *(void **)(param_1 + 0x18) = pvVar11;
    if (pvVar18 != (void *)0x0) {
      operator_delete__(pvVar18);
    }
    if (pvVar19 == (void *)0x0) goto LAB_0063c560;
    operator_delete__(pvVar19);
    if (PTR_pthread_create_007e4e78 != (undefined *)0x0) goto LAB_0063c56c;
LAB_0063c7d0:
                    /* try { // try from 0063c7d0 to 0073c9db has its CatchHandler @ 0063bacc */
    plVar16 = (long *)(*(long *)(param_1 + 8) + uVar5 * 8);
    plVar6 = *(long **)(*(long *)(param_1 + 8) + uVar5 * 8);
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
    if (plVar6 == (long *)0x0) goto LAB_0063c5b8;
    iVar12 = (int)plVar6[1];
    *(int *)(plVar6 + 1) = iVar12 + -1;
  }
  else {
LAB_0063c560:
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) goto LAB_0063c7d0;
LAB_0063c56c:
    piVar1 = (int *)(param_3 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
                    /* try { // try from 0063c584 to 0073c593 has its CatchHandler @ 0063cce0 */
    plVar16 = (long *)(*(long *)(param_1 + 8) + uVar5 * 8);
    plVar6 = *(long **)(*(long *)(param_1 + 8) + uVar5 * 8);
    plVar7 = plVar6 + 1;
    if (plVar6 == (long *)0x0) goto LAB_0063c5b8;
    do {
      iVar12 = (int)*plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (iVar12 == 1) {
    (**(code **)(*plVar6 + 8))();
  }
LAB_0063c5b8:
  uVar5 = *(ulong *)(param_1 + 0x10);
  *plVar16 = param_3;
  if (uVar5 != 0) {
    uVar17 = 0;
                    /* try { // try from 0063c5c8 to 0073c5cf has its CatchHandler @ 0063cc5c */
    do {
      plVar7 = *(long **)(*(long *)(param_1 + 0x18) + uVar17 * 8);
                    /* try { // try from 0063c5f0 to 0073c617 has its CatchHandler @ 0063cb20 */
      if (plVar7 != (long *)0x0) {
        if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
          iVar12 = (int)plVar7[1];
          *(int *)(plVar7 + 1) = iVar12 + -1;
        }
        else {
          plVar16 = plVar7 + 1;
          do {
            iVar12 = (int)*plVar16;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
            if (bVar4) {
              *(int *)plVar16 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (iVar12 == 1) {
          (**(code **)(*plVar7 + 8))();
        }
        uVar5 = *(ulong *)(param_1 + 0x10);
        *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar17 * 8) = 0;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar5);
  }
  return;
}


