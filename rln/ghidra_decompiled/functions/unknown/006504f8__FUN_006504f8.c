/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006504f8
 * Function: FUN_006504f8
 * Signature: undefined FUN_006504f8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006504f8(long param_1,undefined8 param_2)

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
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  long local_8;
  
                    /* try { // try from 00650500 to 00750507 has its CatchHandler @ 00650538 */
                    /* try { // try from 00650508 to 0075053f has its CatchHandler @ 006504e8 */
  *(undefined1 *)(param_1 + 0x98) = 1;
  plVar5 = (long *)FUN_00650490(param_2);
                    /* catch() { ... } // from try @ 00650500 with catch @ 00650538 */
  uVar3 = (**(code **)(*plVar5 + 0x10))();
  lVar10 = *plVar5;
                    /* try { // try from 00650540 to 00750547 has its CatchHandler @ 00650554 */
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar3 = (**(code **)(lVar10 + 0x18))(plVar5);
                    /* try { // try from 00650550 to 00750553 has its CatchHandler @ 00650564 */
  lVar10 = *plVar5;
                    /* catch() { ... } // from try @ 00650540 with catch @ 00650554 */
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar3 = (**(code **)(lVar10 + 0x40))(plVar5);
                    /* catch() { ... } // from try @ 00650550 with catch @ 00650564 */
  lVar10 = *plVar5;
                    /* try { // try from 00650568 to 0075056b has its CatchHandler @ 00650574 */
                    /* try { // try from 0065056c to 00750577 has its CatchHandler @ 006504e8 */
  *(undefined4 *)(param_1 + 0x60) = uVar3;
                    /* catch() { ... } // from try @ 00650568 with catch @ 00650574 */
  (**(code **)(lVar10 + 0x20))(&local_40,plVar5);
                    /* catch() { ... } // from try @ 00650598 with catch @ 0065057c */
  uVar6 = *(ulong *)(local_40 + -0x18);
  *(ulong *)(param_1 + 0x18) = uVar6;
                    /* try { // try from 00650590 to 00750597 has its CatchHandler @ 006505b4 */
                    /* try { // try from 00650598 to 007505c7 has its CatchHandler @ 0065057c */
  if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 0065081c to 00750823 has its CatchHandler @ 00650874 */
                    /* try { // try from 00650824 to 0075091b has its CatchHandler @ 006507ec */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_40 + -8);
                    /* try { // try from 00650a64 to 00750a6b has its CatchHandler @ 00650ab8 */
      *(int *)(local_40 + -8) = iVar4 + -1;
                    /* try { // try from 00650a6c to 00750adf has its CatchHandler @ 00650a38 */
    }
    else {
      piVar11 = (int *)(local_40 + -8);
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
      operator_delete((undefined *)(local_40 + -0x18));
      uVar6 = *(ulong *)(param_1 + 0x18);
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x18);
    }
  }
  pcVar7 = operator_new__(uVar6);
                    /* catch() { ... } // from try @ 00650590 with catch @ 006505b4 */
  (**(code **)(*plVar5 + 0x20))(&local_38,plVar5);
  FUN_00667b48(&local_38,pcVar7,*(undefined8 *)(param_1 + 0x18),0);
  if ((undefined *)(local_38 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_38 + -8);
      *(int *)(local_38 + -8) = iVar4 + -1;
    }
    else {
      piVar11 = (int *)(local_38 + -8);
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065081c with catch @ 00650874
                        */
      operator_delete((undefined *)(local_38 + -0x18));
    }
  }
  bVar2 = false;
  *(char **)(param_1 + 0x10) = pcVar7;
  if (*(long *)(param_1 + 0x18) != 0) {
    bVar2 = '\0' < *pcVar7;
  }
  lVar10 = *plVar5;
  *(bool *)(param_1 + 0x20) = bVar2;
  (**(code **)(lVar10 + 0x28))(&local_30,plVar5);
  uVar6 = *(ulong *)(local_30 + -0x18);
  *(ulong *)(param_1 + 0x38) = uVar6;
  if ((undefined *)(local_30 + -0x18) != PTR_DAT_007e6438) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_30 + -8);
      *(int *)(local_30 + -8) = iVar4 + -1;
    }
    else {
      piVar11 = (int *)(local_30 + -8);
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
      operator_delete((undefined *)(local_30 + -0x18));
      uVar6 = *(ulong *)(param_1 + 0x38);
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x38);
    }
  }
  uVar8 = uVar6 << 2;
  if (0x1fc0000000000000 < uVar6) {
    uVar8 = 0xffffffffffffffff;
  }
  pvVar9 = operator_new__(uVar8);
  (**(code **)(*plVar5 + 0x28))(&local_28,plVar5);
  FUN_0066b608(&local_28,pvVar9,*(undefined8 *)(param_1 + 0x38),0);
  if ((undefined *)(local_28 + -0x18) != PTR_DAT_007e6438) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_28 + -8);
      *(int *)(local_28 + -8) = iVar4 + -1;
    }
    else {
      piVar11 = (int *)(local_28 + -8);
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
      operator_delete((undefined *)(local_28 + -0x18));
    }
  }
  lVar10 = *plVar5;
  *(void **)(param_1 + 0x30) = pvVar9;
  (**(code **)(lVar10 + 0x30))(&local_20,plVar5);
  uVar6 = *(ulong *)(local_20 + -0x18);
  *(ulong *)(param_1 + 0x48) = uVar6;
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
      uVar6 = *(ulong *)(param_1 + 0x48);
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x48);
    }
  }
  uVar8 = uVar6 << 2;
  if (0x1fc0000000000000 < uVar6) {
    uVar8 = 0xffffffffffffffff;
  }
  pvVar9 = operator_new__(uVar8);
  (**(code **)(*plVar5 + 0x30))(&local_18,plVar5);
  FUN_0066b608(&local_18,pvVar9,*(undefined8 *)(param_1 + 0x48),0);
  if ((undefined *)(local_18 + -0x18) != PTR_DAT_007e6438) {
                    /* try { // try from 0065091c to 0075091f has its CatchHandler @ 00650920 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_18 + -8);
      *(int *)(local_18 + -8) = iVar4 + -1;
    }
    else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0065091c with catch @ 00650920
                        */
      piVar11 = (int *)(local_18 + -8);
      do {
                    /* try { // try from 00650924 to 00750927 has its CatchHandler @ 00650930 */
        iVar4 = *piVar11;
                    /* try { // try from 00650928 to 00750933 has its CatchHandler @ 006507ec */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar2) {
          *piVar11 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00650924 with catch @ 00650930
                        */
      } while (cVar1 != '\0');
    }
    if (iVar4 < 1) {
      operator_delete((undefined *)(local_18 + -0x18));
    }
  }
  lVar10 = *plVar5;
  *(void **)(param_1 + 0x40) = pvVar9;
  (**(code **)(lVar10 + 0x38))(&local_10,plVar5);
  uVar6 = *(ulong *)(local_10 + -0x18);
  *(ulong *)(param_1 + 0x58) = uVar6;
  if ((undefined *)(local_10 + -0x18) != PTR_DAT_007e6438) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_10 + -8);
                    /* catch() { ... } // from try @ 00650a6c with catch @ 00650a38
                       catch() { ... } // from try @ 00650bf0 with catch @ 00650a38 */
      *(int *)(local_10 + -8) = iVar4 + -1;
    }
    else {
      piVar11 = (int *)(local_10 + -8);
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
      operator_delete((undefined *)(local_10 + -0x18));
      uVar6 = *(ulong *)(param_1 + 0x58);
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x58);
    }
  }
  uVar8 = uVar6 << 2;
  if (0x1fc0000000000000 < uVar6) {
    uVar8 = 0xffffffffffffffff;
  }
  pvVar9 = operator_new__(uVar8);
  (**(code **)(*plVar5 + 0x38))(&local_8,plVar5);
  FUN_0066b608(&local_8,pvVar9,*(undefined8 *)(param_1 + 0x58),0);
  if ((undefined *)(local_8 + -0x18) != PTR_DAT_007e6438) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_8 + -8);
      *(int *)(local_8 + -8) = iVar4 + -1;
    }
    else {
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
  *(void **)(param_1 + 0x50) = pvVar9;
  uVar3 = (**(code **)(lVar10 + 0x48))(plVar5);
  *(undefined4 *)(param_1 + 100) = uVar3;
  uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  plVar5 = (long *)FUN_0064f6ac(param_2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00650824 with catch @ 006507ec
                       catch(type#1 @ 00000000) { ... } // from try @ 00650928 with catch @ 006507ec
                        */
  (**(code **)(*plVar5 + 0x58))
            (plVar5,*(long *)PTR_PTR_007e7490,*(long *)PTR_PTR_007e7490 + 0xb,param_1 + 0x6c);
  return;
}


