/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062e854
 * Function: FUN_0062e854
 * Signature: undefined FUN_0062e854(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062e854(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined4 uVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  void *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  long local_8;
  
  *(undefined1 *)(param_1 + 0x6f) = 1;
  plVar4 = (long *)FUN_0062e7ec(param_2);
  uVar1 = (**(code **)(*plVar4 + 0x10))();
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  uVar1 = (**(code **)(*plVar4 + 0x18))(plVar4);
  *(undefined1 *)(param_1 + 0x22) = uVar1;
  uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
  lVar8 = *plVar4;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  (**(code **)(lVar8 + 0x20))(&local_40,plVar4);
  uVar5 = *(ulong *)(local_40 + -0x18);
  *(ulong *)(param_1 + 0x18) = uVar5;
  if ((undefined *)(local_40 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_40 + -0x18),&local_8);
    uVar5 = *(ulong *)(param_1 + 0x18);
  }
  pcVar6 = operator_new__(uVar5);
                    /* catch() { ... } // from try @ 0062df6c with catch @ 0062e910 */
  (**(code **)(*plVar4 + 0x20))(&local_38,plVar4);
  FUN_00667b48(&local_38,pcVar6,*(undefined8 *)(param_1 + 0x18),0);
  if ((undefined *)(local_38 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_38 + -0x18),&local_8);
  }
  bVar2 = false;
  *(char **)(param_1 + 0x10) = pcVar6;
  if (*(long *)(param_1 + 0x18) != 0) {
    bVar2 = '\0' < *pcVar6;
  }
  lVar8 = *plVar4;
  *(bool *)(param_1 + 0x20) = bVar2;
                    /* catch() { ... } // from try @ 0062d394 with catch @ 0062e970
                       catch() { ... } // from try @ 0062d3a8 with catch @ 0062e970
                       catch() { ... } // from try @ 0062d494 with catch @ 0062e970
                       catch() { ... } // from try @ 0062d4a8 with catch @ 0062e970
                       catch() { ... } // from try @ 0062d58c with catch @ 0062e970
                       catch() { ... } // from try @ 0062d5a0 with catch @ 0062e970
                       catch() { ... } // from try @ 0062d6d0 with catch @ 0062e970
                       catch() { ... } // from try @ 0062d6e4 with catch @ 0062e970
                       catch() { ... } // from try @ 0062dea8 with catch @ 0062e970
                       catch() { ... } // from try @ 0062debc with catch @ 0062e970 */
  (**(code **)(lVar8 + 0x28))(&local_30,plVar4);
  uVar5 = *(ulong *)(local_30 + -0x18);
  *(ulong *)(param_1 + 0x30) = uVar5;
  if ((undefined *)(local_30 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_30 + -0x18),&local_8);
    uVar5 = *(ulong *)(param_1 + 0x30);
  }
  pvVar7 = operator_new__(uVar5);
  (**(code **)(*plVar4 + 0x28))(&local_28,plVar4);
  FUN_00667b48(&local_28,pvVar7,*(undefined8 *)(param_1 + 0x30),0);
  if ((undefined *)(local_28 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_28 + -0x18),&local_8);
  }
  lVar8 = *plVar4;
  *(void **)(param_1 + 0x28) = pvVar7;
  (**(code **)(lVar8 + 0x30))(&local_20,plVar4);
  uVar5 = *(ulong *)(local_20 + -0x18);
  *(ulong *)(param_1 + 0x40) = uVar5;
  if ((undefined *)(local_20 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_20 + -0x18),&local_8);
    uVar5 = *(ulong *)(param_1 + 0x40);
  }
  pvVar7 = operator_new__(uVar5);
  (**(code **)(*plVar4 + 0x30))(&local_18,plVar4);
  FUN_00667b48(&local_18,pvVar7,*(undefined8 *)(param_1 + 0x40),0);
  if ((undefined *)(local_18 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_18 + -0x18),&local_8);
  }
  lVar8 = *plVar4;
  *(void **)(param_1 + 0x38) = pvVar7;
  (**(code **)(lVar8 + 0x38))(&local_10,plVar4);
  uVar5 = *(ulong *)(local_10 + -0x18);
  *(ulong *)(param_1 + 0x50) = uVar5;
  if ((undefined *)(local_10 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_10 + -0x18),&local_8);
    uVar5 = *(ulong *)(param_1 + 0x50);
  }
  pvVar7 = operator_new__(uVar5);
  (**(code **)(*plVar4 + 0x38))(&local_8,plVar4);
  FUN_00667b48(&local_8,pvVar7,*(undefined8 *)(param_1 + 0x50),0);
  if ((undefined *)(local_8 + -0x18) != PTR_DAT_007e5de8) {
    FUN_0062b45c((undefined *)(local_8 + -0x18),&local_10);
  }
  lVar8 = *plVar4;
  *(void **)(param_1 + 0x48) = pvVar7;
  uVar3 = (**(code **)(lVar8 + 0x48))(plVar4);
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4);
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  plVar4 = (long *)FUN_0062d354(param_2);
  puVar9 = *(undefined8 **)PTR_PTR_007e7490;
  if ((char)plVar4[7] == '\x01') {
    *(undefined8 *)(param_1 + 100) = *puVar9;
    *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(puVar9 + 1);
                    /* try { // try from 0062ec04 to 0072ec0f has its CatchHandler @ 0062d348 */
    *(undefined1 *)(param_1 + 0x6e) = *(undefined1 *)((long)puVar9 + 10);
  }
  else {
    if ((char)plVar4[7] == '\0') {
      FUN_0061fea0();
    }
    (**(code **)(*plVar4 + 0x38))(plVar4,puVar9,(long)puVar9 + 0xb,param_1 + 100);
  }
  return;
}


