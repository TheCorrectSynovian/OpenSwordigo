/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006480ec
 * Function: FUN_006480ec
 * Signature: undefined FUN_006480ec(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_006480ec(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_8;
  
  if ((*(uint *)(param_1 + 0x40) >> 4 & 1) == 0) {
    return -1;
  }
  if (param_2 == -1) {
    return 0;
  }
  piVar5 = *(int **)(param_1 + 0x28);
  lVar6 = *(long *)(*(long *)(param_1 + 0x48) + -0x10);
  bVar2 = piVar5 < *(int **)(param_1 + 0x30);
  if (bVar2 < (lVar6 == 0xffffffffffffffe)) {
    return -1;
  }
  if (bVar2) {
    *piVar5 = param_2;
    goto LAB_0064814c;
  }
  uVar7 = lVar6 * 2;
  if (uVar7 < 0x200) {
    uVar7 = 0x200;
LAB_0064817c:
    uVar3 = uVar7;
  }
  else {
    uVar3 = 0xffffffffffffffe;
    if (uVar7 < 0xfffffffffffffff) goto LAB_0064817c;
  }
  local_8 = PTR_DAT_007e6438 + 0x18;
  FUN_0066e318(&local_8,uVar3);
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    FUN_0066cb34(&local_8,lVar6,*(long *)(param_1 + 0x30) - lVar6 >> 2);
  }
  lVar6 = *(long *)(local_8 + -0x18);
  uVar7 = lVar6 + 1;
  if ((*(ulong *)(local_8 + -0x10) < uVar7) || (0 < *(int *)(local_8 + -8))) {
    FUN_0066e318(&local_8,uVar7);
    lVar6 = *(long *)(local_8 + -0x18);
  }
  *(int *)(local_8 + lVar6 * 4) = param_2;
  if (local_8 + -0x18 != PTR_DAT_007e6438) {
    *(undefined4 *)(local_8 + -8) = 0;
    *(ulong *)(local_8 + -0x18) = uVar7;
    *(undefined4 *)(local_8 + uVar7 * 4) = 0;
  }
  FUN_0066b694(param_1 + 0x48,&local_8);
  FUN_00647ea4(param_1,*(undefined8 *)(param_1 + 0x48),
               *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2,
               *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 2);
  if (local_8 + -0x18 != PTR_DAT_007e6438) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar4 = *(int *)(local_8 + -8);
      *(int *)(local_8 + -8) = iVar4 + -1;
    }
    else {
      piVar5 = (int *)(local_8 + -8);
      do {
        iVar4 = *piVar5;
                    /* try { // try from 006482a4 to 0074833b has its CatchHandler @ 006482a4
                       catch() { ... } // from try @ 006482a4 with catch @ 006482a4
                       catch() { ... } // from try @ 006483e0 with catch @ 006482a4
                       catch() { ... } // from try @ 006484a4 with catch @ 006482a4 */
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar4 < 1) {
      operator_delete(local_8 + -0x18);
      piVar5 = *(int **)(param_1 + 0x28);
      goto LAB_0064814c;
    }
  }
  piVar5 = *(int **)(param_1 + 0x28);
LAB_0064814c:
  *(int **)(param_1 + 0x28) = piVar5 + 1;
  return param_2;
}


