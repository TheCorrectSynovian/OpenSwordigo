/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00650c18
 * Function: FUN_00650c18
 * Signature: undefined FUN_00650c18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00650c18(long param_1,undefined8 param_2)

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
  
  *(undefined1 *)(param_1 + 0x98) = 1;
                    /* try { // try from 00650c48 to 00750c6f has its CatchHandler @ 00650cfc */
  plVar5 = (long *)FUN_00650bb0(param_2);
  uVar3 = (**(code **)(*plVar5 + 0x10))();
  lVar10 = *plVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar3 = (**(code **)(lVar10 + 0x18))(plVar5);
                    /* try { // try from 00650c70 to 00750d73 has its CatchHandler @ 00650c00 */
  lVar10 = *plVar5;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  uVar3 = (**(code **)(lVar10 + 0x40))(plVar5);
  lVar10 = *plVar5;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  (**(code **)(lVar10 + 0x20))(&local_40,plVar5);
  uVar6 = *(ulong *)(local_40 + -0x18);
  *(ulong *)(param_1 + 0x18) = uVar6;
  if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_40 + -8);
      *(int *)(local_40 + -8) = iVar4 + -1;
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
  (**(code **)(*plVar5 + 0x20))(&local_38,plVar5);
  FUN_00667b48(&local_38,pcVar7,*(undefined8 *)(param_1 + 0x18),0);
                    /* catch() { ... } // from try @ 00650c48 with catch @ 00650cfc */
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
  (**(code **)(*plVar5 + 0x58))
            (plVar5,*(long *)PTR_PTR_007e7490,*(long *)PTR_PTR_007e7490 + 0xb,param_1 + 0x6c);
  return;
}


