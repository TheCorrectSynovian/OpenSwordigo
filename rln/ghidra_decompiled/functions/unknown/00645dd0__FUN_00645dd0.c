/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00645dd0
 * Function: FUN_00645dd0
 * Signature: undefined FUN_00645dd0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_00645dd0(long param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined *local_8;
  
  if ((*(uint *)(param_1 + 0x40) >> 4 & 1) == 0) {
    return -1;
  }
  if (param_2 == -1) {
    return 0;
  }
  puVar8 = *(undefined1 **)(param_1 + 0x28);
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + -0x10);
  bVar2 = puVar8 < *(undefined1 **)(param_1 + 0x30);
  if (bVar2 < (lVar3 == 0x3ffffffffffffff9)) {
    return -1;
  }
  if (bVar2) {
    *puVar8 = (char)param_2;
    goto LAB_00645e38;
  }
  uVar4 = lVar3 * 2;
  if (uVar4 < 0x200) {
    uVar4 = 0x200;
LAB_00645e6c:
    uVar6 = uVar4;
  }
  else {
    uVar6 = 0x3ffffffffffffff9;
    if (uVar4 < 0x3ffffffffffffffa) goto LAB_00645e6c;
  }
  local_8 = PTR_DAT_007e5de8 + 0x18;
  FUN_00667088(&local_8,uVar6);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    FUN_0066918c(&local_8,lVar3,*(long *)(param_1 + 0x30) - lVar3);
  }
  lVar3 = *(long *)(local_8 + -0x18);
  uVar4 = lVar3 + 1;
  if ((*(ulong *)(local_8 + -0x10) < uVar4) || (0 < *(int *)(local_8 + -8))) {
    FUN_00667088(&local_8,uVar4);
    lVar3 = *(long *)(local_8 + -0x18);
  }
  local_8[lVar3] = (char)param_2;
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
    *(undefined4 *)(local_8 + -8) = 0;
    *(ulong *)(local_8 + -0x18) = uVar4;
    local_8[uVar4] = 0;
  }
  FUN_00667bd4(param_1 + 0x48,&local_8);
  FUN_00645b8c(param_1,*(undefined8 *)(param_1 + 0x48),
               *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8),
               *(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20));
  if (local_8 + -0x18 != PTR_DAT_007e5de8) {
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar7 = *(int *)(local_8 + -8);
      *(int *)(local_8 + -8) = iVar7 + -1;
    }
    else {
      piVar5 = (int *)(local_8 + -8);
      do {
        iVar7 = *piVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar2) {
          *piVar5 = iVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar7 < 1) {
      operator_delete(local_8 + -0x18);
    }
  }
LAB_00645e38:
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return param_2;
}


