/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062dbf0
 * Function: FUN_0062dbf0
 * Signature: undefined FUN_0062dbf0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062dbf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  void *pvVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  long local_8;
  
                    /* try { // try from 0062dc08 to 0072dc0f has its CatchHandler @ 0062e3f4 */
                    /* try { // try from 0062dc10 to 0072dc23 has its CatchHandler @ 0062e3f0 */
  *(undefined1 *)(param_1 + 0x88) = 1;
  plVar6 = (long *)FUN_0062db88(param_2);
                    /* try { // try from 0062dc24 to 0072dc37 has its CatchHandler @ 0062e680 */
  (**(code **)(*plVar6 + 0x20))(&local_30);
                    /* try { // try from 0062dc3c to 0072dc4b has its CatchHandler @ 0062e6a8 */
  uVar7 = *(ulong *)(local_30 + -0x18);
  *(ulong *)(param_1 + 0x18) = uVar7;
  if ((undefined *)(local_30 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *(int *)(local_30 + -8);
      *(int *)(local_30 + -8) = iVar5 + -1;
    }
    else {
      piVar11 = (int *)(local_30 + -8);
      do {
        iVar5 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_30 + -0x18));
      uVar7 = *(ulong *)(param_1 + 0x18);
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x18);
    }
  }
  pcVar8 = operator_new__(uVar7);
  (**(code **)(*plVar6 + 0x20))(&local_28,plVar6);
                    /* try { // try from 0062dc84 to 0072dcab has its CatchHandler @ 0062e23c */
  FUN_00667b48(&local_28,pcVar8,*(undefined8 *)(param_1 + 0x18),0);
  if ((undefined *)(local_28 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *(int *)(local_28 + -8);
      *(int *)(local_28 + -8) = iVar5 + -1;
    }
    else {
      piVar11 = (int *)(local_28 + -8);
      do {
        iVar5 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_28 + -0x18));
    }
  }
  bVar3 = false;
  *(char **)(param_1 + 0x10) = pcVar8;
  if (*(long *)(param_1 + 0x18) != 0) {
    bVar3 = '\0' < *pcVar8;
  }
  lVar10 = *plVar6;
  *(bool *)(param_1 + 0x20) = bVar3;
                    /* try { // try from 0062dccc to 0072dcf3 has its CatchHandler @ 0062e6a8 */
  (**(code **)(lVar10 + 0x28))(&local_20,plVar6);
  uVar7 = *(ulong *)(local_20 + -0x18);
  *(ulong *)(param_1 + 0x30) = uVar7;
  if ((undefined *)(local_20 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *(int *)(local_20 + -8);
      *(int *)(local_20 + -8) = iVar5 + -1;
    }
    else {
      piVar11 = (int *)(local_20 + -8);
      do {
        iVar5 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar5 < 1) {
                    /* try { // try from 0062e008 to 0072e25f has its CatchHandler @ 0062d348 */
      operator_delete((undefined *)(local_20 + -0x18));
      uVar7 = *(ulong *)(param_1 + 0x30);
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x30);
                    /* try { // try from 0062df2c to 0072df3f has its CatchHandler @ 0062e394 */
    }
  }
  pvVar9 = operator_new__(uVar7);
  (**(code **)(*plVar6 + 0x28))(&local_18,plVar6);
                    /* try { // try from 0062dd14 to 0072dd17 has its CatchHandler @ 0062e224 */
  FUN_00667b48(&local_18,pvVar9,*(undefined8 *)(param_1 + 0x30),0);
  if ((undefined *)(local_18 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *(int *)(local_18 + -8);
      *(int *)(local_18 + -8) = iVar5 + -1;
    }
    else {
      piVar11 = (int *)(local_18 + -8);
      do {
        iVar5 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 0062dfb4 to 0072dfbf has its CatchHandler @ 0062e344 */
      } while (cVar2 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_18 + -0x18));
    }
  }
                    /* try { // try from 0062dd38 to 0072dd3b has its CatchHandler @ 0062e680 */
  lVar10 = *plVar6;
  *(void **)(param_1 + 0x28) = pvVar9;
  (**(code **)(lVar10 + 0x30))(&local_10,plVar6);
  uVar7 = *(ulong *)(local_10 + -0x18);
  *(ulong *)(param_1 + 0x40) = uVar7;
  if ((undefined *)(local_10 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 0062dea8 to 0072deb3 has its CatchHandler @ 0062e970 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *(int *)(local_10 + -8);
      *(int *)(local_10 + -8) = iVar5 + -1;
    }
    else {
      piVar11 = (int *)(local_10 + -8);
      do {
        iVar5 = *piVar11;
                    /* try { // try from 0062deb4 to 0072debb has its CatchHandler @ 0062e398 */
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
                    /* try { // try from 0062debc to 0072df23 has its CatchHandler @ 0062e970 */
      } while (cVar2 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_10 + -0x18));
      uVar7 = *(ulong *)(param_1 + 0x40);
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x40);
    }
  }
  pvVar9 = operator_new__(uVar7);
  (**(code **)(*plVar6 + 0x30))(&local_8,plVar6);
  FUN_00667b48(&local_8,pvVar9,*(undefined8 *)(param_1 + 0x40),0);
  if ((undefined *)(local_8 + -0x18) != PTR_DAT_007e5de8) {
                    /* try { // try from 0062df6c to 0072df7b has its CatchHandler @ 0062e910 */
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *(int *)(local_8 + -8);
      *(int *)(local_8 + -8) = iVar5 + -1;
    }
    else {
      piVar11 = (int *)(local_8 + -8);
      do {
        iVar5 = *piVar11;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (iVar5 < 1) {
      operator_delete((undefined *)(local_8 + -0x18));
    }
  }
  lVar10 = *plVar6;
  *(void **)(param_1 + 0x38) = pvVar9;
  uVar4 = (**(code **)(lVar10 + 0x10))(plVar6);
  *(undefined1 *)(param_1 + 0x48) = uVar4;
  uVar4 = (**(code **)(*plVar6 + 0x18))(plVar6);
  *(undefined1 *)(param_1 + 0x49) = uVar4;
  plVar6 = (long *)FUN_0062d354(param_2);
  puVar12 = *(undefined8 **)PTR_PTR_007e5110;
  if ((char)plVar6[7] == '\x01') {
    uVar1 = puVar12[1];
    *(undefined8 *)(param_1 + 0x4a) = *puVar12;
    *(undefined8 *)(param_1 + 0x52) = uVar1;
    uVar1 = puVar12[3];
    *(undefined8 *)(param_1 + 0x5a) = puVar12[2];
    *(undefined8 *)(param_1 + 0x62) = uVar1;
    *(undefined4 *)(param_1 + 0x6a) = *(undefined4 *)(puVar12 + 4);
  }
  else {
    if ((char)plVar6[7] == '\0') {
      FUN_0061fea0();
    }
                    /* try { // try from 0062de1c to 0072de23 has its CatchHandler @ 0062e3ec */
    (**(code **)(*plVar6 + 0x38))
              (plVar6,puVar12,(long)puVar12 + 0x24,(undefined8 *)(param_1 + 0x4a));
  }
  puVar12 = *(undefined8 **)PTR_PTR_007e4f98;
  if ((char)plVar6[7] == '\x01') {
    uVar1 = puVar12[1];
    *(undefined8 *)(param_1 + 0x6e) = *puVar12;
    *(undefined8 *)(param_1 + 0x76) = uVar1;
    *(undefined8 *)(param_1 + 0x7e) = puVar12[2];
                    /* try { // try from 0062dfe0 to 0072e007 has its CatchHandler @ 0062e234 */
    *(undefined2 *)(param_1 + 0x86) = *(undefined2 *)(puVar12 + 3);
  }
  else {
    if ((char)plVar6[7] == '\0') {
      FUN_0061fea0(plVar6);
    }
                    /* try { // try from 0062de54 to 0072de5f has its CatchHandler @ 0062e39c */
    (**(code **)(*plVar6 + 0x38))
              (plVar6,puVar12,(long)puVar12 + 0x1a,(undefined8 *)(param_1 + 0x6e));
  }
                    /* try { // try from 0062de80 to 0072dea7 has its CatchHandler @ 0062e238 */
  return;
}


