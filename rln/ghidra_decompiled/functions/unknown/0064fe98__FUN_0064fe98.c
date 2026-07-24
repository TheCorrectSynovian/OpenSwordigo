/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064fe98
 * Function: FUN_0064fe98
 * Signature: undefined FUN_0064fe98(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064fe98(long param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  int *piVar11;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  long local_8;
  
  *(undefined1 *)(param_1 + 0x148) = 1;
  plVar5 = (long *)FUN_0064fe30(param_2);
  (**(code **)(*plVar5 + 0x20))(&local_30);
  uVar6 = *(ulong *)(local_30 + -0x18);
  *(ulong *)(param_1 + 0x18) = uVar6;
  if ((undefined *)(local_30 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_30 + -8);
                    /* catch() { ... } // from try @ 0064fc68 with catch @ 00650294 */
      *(int *)(local_30 + -8) = iVar4 + -1;
    }
    else {
      piVar11 = (int *)(local_30 + -8);
      do {
        iVar4 = *piVar11;
                    /* try { // try from 00650130 to 00750157 has its CatchHandler @ 00650314 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar4 < 1) {
      operator_delete((undefined *)(local_30 + -0x18));
      uVar6 = *(ulong *)(param_1 + 0x18);
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x18);
    }
  }
  pcVar7 = operator_new__(uVar6);
  (**(code **)(*plVar5 + 0x20))(&local_28,plVar5);
  FUN_00667b48(&local_28,pcVar7,*(undefined8 *)(param_1 + 0x18),0);
  if ((undefined *)(local_28 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_28 + -8);
      *(int *)(local_28 + -8) = iVar4 + -1;
    }
    else {
                    /* try { // try from 00650158 to 0075016f has its CatchHandler @ 0064fae4 */
      piVar11 = (int *)(local_28 + -8);
      do {
                    /* catch() { ... } // from try @ 00650020 with catch @ 0065015c */
        iVar4 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
                    /* catch() { ... } // from try @ 0064fcd8 with catch @ 0065016c */
                    /* try { // try from 00650170 to 00750173 has its CatchHandler @ 00650174 */
    if (iVar4 < 1) {
                    /* catch() { ... } // from try @ 00650170 with catch @ 00650174 */
                    /* try { // try from 00650178 to 0075017b has its CatchHandler @ 006501d8 */
      operator_delete((undefined *)(local_28 + -0x18));
    }
  }
  bVar2 = false;
  *(char **)(param_1 + 0x10) = pcVar7;
  if (*(long *)(param_1 + 0x18) != 0) {
    bVar2 = '\0' < *pcVar7;
  }
  lVar10 = *plVar5;
  *(bool *)(param_1 + 0x20) = bVar2;
  (**(code **)(lVar10 + 0x28))(&local_20,plVar5);
  uVar6 = *(ulong *)(local_20 + -0x18);
  *(ulong *)(param_1 + 0x30) = uVar6;
  if ((undefined *)(local_20 + -0x18) != PTR_DAT_007e6438) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_20 + -8);
      *(int *)(local_20 + -8) = iVar4 + -1;
    }
    else {
      piVar11 = (int *)(local_20 + -8);
      do {
        iVar4 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar4 < 1) {
      operator_delete((undefined *)(local_20 + -0x18));
      uVar6 = *(ulong *)(param_1 + 0x30);
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x30);
    }
  }
  uVar8 = uVar6 << 2;
  if (0x1fc0000000000000 < uVar6) {
    uVar8 = 0xffffffffffffffff;
  }
  pvVar9 = operator_new__(uVar8);
  (**(code **)(*plVar5 + 0x28))(&local_18,plVar5);
                    /* try { // try from 0064ffd8 to 0074ffff has its CatchHandler @ 00650110 */
  FUN_0066b608(&local_18,pvVar9,*(undefined8 *)(param_1 + 0x30),0);
  if ((undefined *)(local_18 + -0x18) != PTR_DAT_007e6438) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_18 + -8);
      *(int *)(local_18 + -8) = iVar4 + -1;
    }
    else {
      piVar11 = (int *)(local_18 + -8);
      do {
        iVar4 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar4 < 1) {
                    /* catch() { ... } // from try @ 00650178 with catch @ 006501d8 */
                    /* catch() { ... } // from try @ 0064fbb8 with catch @ 006501dc */
      operator_delete((undefined *)(local_18 + -0x18));
                    /* catch() { ... } // from try @ 0064fcb4 with catch @ 006501e0
                       catch() { ... } // from try @ 0064fd14 with catch @ 006501e0
                       catch() { ... } // from try @ 006500c8 with catch @ 006501e0 */
    }
  }
  lVar10 = *plVar5;
  *(void **)(param_1 + 0x28) = pvVar9;
  (**(code **)(lVar10 + 0x30))(&local_10,plVar5);
  uVar6 = *(ulong *)(local_10 + -0x18);
  *(ulong *)(param_1 + 0x40) = uVar6;
                    /* try { // try from 00650020 to 00750047 has its CatchHandler @ 0065015c */
  if ((undefined *)(local_10 + -0x18) != PTR_DAT_007e6438) {
                    /* catch() { ... } // from try @ 0064fd90 with catch @ 006501e4
                       catch() { ... } // from try @ 00650080 with catch @ 006501e4 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_10 + -8);
      *(int *)(local_10 + -8) = iVar4 + -1;
    }
    else {
      piVar11 = (int *)(local_10 + -8);
      do {
                    /* catch() { ... } // from try @ 0064fb24 with catch @ 006501f4 */
        iVar4 = *piVar11;
                    /* catch() { ... } // from try @ 0064fe34 with catch @ 006501fc */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar4 < 1) {
      operator_delete((undefined *)(local_10 + -0x18));
      uVar6 = *(ulong *)(param_1 + 0x40);
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x40);
    }
  }
  uVar8 = uVar6 << 2;
  if (0x1fc0000000000000 < uVar6) {
    uVar8 = 0xffffffffffffffff;
  }
  pvVar9 = operator_new__(uVar8);
  (**(code **)(*plVar5 + 0x30))(&local_8,plVar5);
  FUN_0066b608(&local_8,pvVar9,*(undefined8 *)(param_1 + 0x40),0);
                    /* try { // try from 00650080 to 007500a7 has its CatchHandler @ 006501e4 */
  if ((undefined *)(local_8 + -0x18) != PTR_DAT_007e6438) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_8 + -8);
      *(int *)(local_8 + -8) = iVar4 + -1;
    }
    else {
                    /* try { // try from 00650220 to 0075030b has its CatchHandler @ 00650314 */
      piVar11 = (int *)(local_8 + -8);
      do {
        iVar4 = *piVar11;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar4 < 1) {
      operator_delete((undefined *)(local_8 + -0x18));
    }
  }
  lVar10 = *plVar5;
  *(void **)(param_1 + 0x38) = pvVar9;
  uVar3 = (**(code **)(lVar10 + 0x10))(plVar5);
  lVar10 = *plVar5;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  uVar3 = (**(code **)(lVar10 + 0x18))(plVar5);
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  plVar5 = (long *)FUN_0064f6ac(param_2);
                    /* try { // try from 006500c8 to 007500ef has its CatchHandler @ 006501e0 */
  (**(code **)(*plVar5 + 0x58))
            (plVar5,*(long *)PTR_PTR_007e5110,*(long *)PTR_PTR_007e5110 + 0x24,param_1 + 0x50);
                    /* try { // try from 006500f0 to 0075012f has its CatchHandler @ 0064fae4 */
  (**(code **)(*plVar5 + 0x58))
            (plVar5,*(long *)PTR_PTR_007e4f98,*(long *)PTR_PTR_007e4f98 + 0x1a,param_1 + 0xe0);
                    /* catch() { ... } // from try @ 0064ffd8 with catch @ 00650110 */
  return;
}


