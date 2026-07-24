/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062e2bc
 * Function: FUN_0062e2bc
 * Signature: undefined FUN_0062e2bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062e2bc(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  void *pvVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  long local_8;
  
                    /* catch() { ... } // from try @ 0062d9bc with catch @ 0062e2e0 */
                    /* catch() { ... } // from try @ 0062d870 with catch @ 0062e2e4 */
  *(undefined1 *)(param_1 + 0x6f) = 1;
  plVar6 = (long *)FUN_0062e254(param_2);
  uVar2 = (**(code **)(*plVar6 + 0x10))();
  *(undefined1 *)(param_1 + 0x21) = uVar2;
  uVar2 = (**(code **)(*plVar6 + 0x18))(plVar6);
  *(undefined1 *)(param_1 + 0x22) = uVar2;
  uVar4 = (**(code **)(*plVar6 + 0x40))(plVar6);
  lVar10 = *plVar6;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
                    /* catch() { ... } // from try @ 0062d7a0 with catch @ 0062e334 */
                    /* catch() { ... } // from try @ 0062d6a8 with catch @ 0062e338 */
                    /* catch() { ... } // from try @ 0062d564 with catch @ 0062e33c */
  (**(code **)(lVar10 + 0x20))(&local_40,plVar6);
                    /* catch() { ... } // from try @ 0062d46c with catch @ 0062e340 */
                    /* catch() { ... } // from try @ 0062dfb4 with catch @ 0062e344 */
  uVar7 = *(ulong *)(local_40 + -0x18);
  *(ulong *)(param_1 + 0x18) = uVar7;
  if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar5 = *(int *)(local_40 + -8);
                    /* catch() { ... } // from try @ 0062dc3c with catch @ 0062e6a8
                       catch() { ... } // from try @ 0062dccc with catch @ 0062e6a8 */
      *(int *)(local_40 + -8) = iVar5 + -1;
    }
    else {
      piVar11 = (int *)(local_40 + -8);
      do {
        iVar5 = *piVar11;
        cVar1 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar3) {
          *piVar11 = iVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar5 < 1) {
                    /* catch() { ... } // from try @ 0062da00 with catch @ 0062e690
                       catch() { ... } // from try @ 0062db50 with catch @ 0062e690 */
                    /* catch() { ... } // from try @ 0062d814 with catch @ 0062e698
                       catch() { ... } // from try @ 0062d900 with catch @ 0062e698 */
      operator_delete((undefined *)(local_40 + -0x18));
      uVar7 = *(ulong *)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 0062d7e4 with catch @ 0062e6a0
                       catch() { ... } // from try @ 0062d934 with catch @ 0062e6a0 */
    }
    else {
                    /* catch() { ... } // from try @ 0062d4a0 with catch @ 0062e614 */
      uVar7 = *(ulong *)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 0062d440 with catch @ 0062e618 */
    }
  }
  pcVar8 = operator_new__(uVar7);
  (**(code **)(*plVar6 + 0x20))(&local_38,plVar6);
  FUN_00667b48(&local_38,pcVar8,*(undefined8 *)(param_1 + 0x18),0);
                    /* catch() { ... } // from try @ 0062df2c with catch @ 0062e394 */
                    /* catch() { ... } // from try @ 0062deb4 with catch @ 0062e398 */
                    /* catch() { ... } // from try @ 0062de54 with catch @ 0062e39c */
  if ((undefined *)(local_38 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_38 + -0x18),&local_8);
  }
  bVar3 = false;
  *(char **)(param_1 + 0x10) = pcVar8;
  if (*(long *)(param_1 + 0x18) != 0) {
    bVar3 = '\0' < *pcVar8;
  }
  lVar10 = *plVar6;
  *(bool *)(param_1 + 0x20) = bVar3;
  (**(code **)(lVar10 + 0x28))(&local_30,plVar6);
  uVar7 = *(ulong *)(local_30 + -0x18);
  *(ulong *)(param_1 + 0x30) = uVar7;
                    /* catch() { ... } // from try @ 0062de1c with catch @ 0062e3ec */
                    /* catch() { ... } // from try @ 0062dc10 with catch @ 0062e3f0 */
                    /* catch() { ... } // from try @ 0062dc08 with catch @ 0062e3f4 */
  if ((undefined *)(local_30 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_30 + -0x18),&local_8);
    uVar7 = *(ulong *)(param_1 + 0x30);
  }
                    /* catch() { ... } // from try @ 0062dbb4 with catch @ 0062e3f8 */
  pvVar9 = operator_new__(uVar7);
  (**(code **)(*plVar6 + 0x28))(&local_28,plVar6);
  FUN_00667b48(&local_28,pvVar9,*(undefined8 *)(param_1 + 0x30),0);
  if ((undefined *)(local_28 + -0x18) != PTR_DAT_007e5de8) {
                    /* catch() { ... } // from try @ 0062d3a0 with catch @ 0062e668 */
    FUN_0062b45c((undefined *)(local_28 + -0x18),&local_8);
  }
  lVar10 = *plVar6;
                    /* catch() { ... } // from try @ 0062db7c with catch @ 0062e448 */
  *(void **)(param_1 + 0x28) = pvVar9;
                    /* catch() { ... } // from try @ 0062da1c with catch @ 0062e44c */
                    /* catch() { ... } // from try @ 0062da14 with catch @ 0062e450 */
  (**(code **)(lVar10 + 0x30))(&local_20,plVar6);
                    /* catch() { ... } // from try @ 0062d9ec with catch @ 0062e460 */
  uVar7 = *(ulong *)(local_20 + -0x18);
                    /* catch() { ... } // from try @ 0062d9e4 with catch @ 0062e464 */
  *(ulong *)(param_1 + 0x40) = uVar7;
                    /* catch() { ... } // from try @ 0062d990 with catch @ 0062e468 */
  if ((undefined *)(local_20 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_20 + -0x18),&local_8);
    uVar7 = *(ulong *)(param_1 + 0x40);
  }
  pvVar9 = operator_new__(uVar7);
  (**(code **)(*plVar6 + 0x30))(&local_18,plVar6);
  FUN_00667b48(&local_18,pvVar9,*(undefined8 *)(param_1 + 0x40),0);
                    /* catch() { ... } // from try @ 0062d960 with catch @ 0062e4b8 */
  if ((undefined *)(local_18 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_18 + -0x18),&local_8);
  }
                    /* catch() { ... } // from try @ 0062d800 with catch @ 0062e4bc */
  lVar10 = *plVar6;
                    /* catch() { ... } // from try @ 0062d7f8 with catch @ 0062e4c0 */
  *(void **)(param_1 + 0x38) = pvVar9;
                    /* catch() { ... } // from try @ 0062d7d0 with catch @ 0062e4d0 */
                    /* catch() { ... } // from try @ 0062d7c8 with catch @ 0062e4d4 */
  (**(code **)(lVar10 + 0x38))(&local_10,plVar6);
                    /* catch() { ... } // from try @ 0062d774 with catch @ 0062e4d8 */
  uVar7 = *(ulong *)(local_10 + -0x18);
  *(ulong *)(param_1 + 0x50) = uVar7;
  if ((undefined *)(local_10 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_10 + -0x18),&local_8);
    uVar7 = *(ulong *)(param_1 + 0x50);
  }
  pvVar9 = operator_new__(uVar7);
  (**(code **)(*plVar6 + 0x38))(&local_8,plVar6);
  FUN_00667b48(&local_8,pvVar9,*(undefined8 *)(param_1 + 0x50),0);
                    /* catch() { ... } // from try @ 0062d6dc with catch @ 0062e528 */
                    /* catch() { ... } // from try @ 0062d67c with catch @ 0062e52c */
  if ((undefined *)(local_8 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_8 + -0x18),&local_10);
  }
  lVar10 = *plVar6;
  *(void **)(param_1 + 0x48) = pvVar9;
  uVar4 = (**(code **)(lVar10 + 0x48))(plVar6);
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  uVar4 = (**(code **)(*plVar6 + 0x50))(plVar6);
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  plVar6 = (long *)FUN_0062d354(param_2);
                    /* catch() { ... } // from try @ 0062d630 with catch @ 0062e57c */
  puVar12 = *(undefined8 **)PTR_PTR_007e7490;
  if ((char)plVar6[7] == '\x01') {
    *(undefined8 *)(param_1 + 100) = *puVar12;
                    /* catch() { ... } // from try @ 0062dc24 with catch @ 0062e680
                       catch() { ... } // from try @ 0062dd38 with catch @ 0062e680 */
    *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(puVar12 + 1);
                    /* catch() { ... } // from try @ 0062da30 with catch @ 0062e688
                       catch() { ... } // from try @ 0062db1c with catch @ 0062e688 */
    *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)((long)puVar12 + 10);
  }
  else {
    if ((char)plVar6[7] == '\0') {
      FUN_0061fea0();
    }
    (**(code **)(*plVar6 + 0x38))(plVar6,puVar12,(long)puVar12 + 0xb,param_1 + 100);
  }
                    /* catch() { ... } // from try @ 0062d61c with catch @ 0062e5bc */
                    /* catch() { ... } // from try @ 0062d598 with catch @ 0062e5c0 */
                    /* catch() { ... } // from try @ 0062d53c with catch @ 0062e5c4 */
  return;
}


