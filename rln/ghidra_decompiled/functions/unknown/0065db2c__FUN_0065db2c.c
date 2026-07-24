/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065db2c
 * Function: FUN_0065db2c
 * Signature: undefined FUN_0065db2c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0065db2c(long *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  char cVar5;
  
  if ((*(uint *)(param_1 + 0xf) >> 3 & 1) == 0) {
    return -1;
  }
  if (*(char *)((long)param_1 + 0xaa) == '\0') {
    uVar2 = param_1[2];
    cVar5 = (char)param_1[0x18];
    if ((ulong)param_1[1] < uVar2) {
      iVar1 = *(int *)(uVar2 - 4);
      param_1[2] = uVar2 - 4;
      goto LAB_0065db7c;
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
    if (iVar1 == -1) {
      return -1;
    }
    lVar4 = param_1[0x13];
    cVar5 = (char)param_1[0x18];
    param_1[1] = lVar4;
    param_1[2] = lVar4;
    param_1[3] = lVar4;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    *(undefined1 *)((long)param_1 + 0xaa) = 0;
  }
  lVar4 = (**(code **)(*param_1 + 0x20))(param_1,0xffffffffffffffff,1,0x18);
  if (lVar4 == -1) {
    return -1;
  }
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar1 == -1) {
    return -1;
  }
LAB_0065db7c:
  if ((param_2 == -1) < (param_2 == iVar1)) {
    return param_2;
  }
  if (param_2 != -1) {
    if (cVar5 != '\0') {
      return -1;
    }
    if ((char)param_1[0x18] == '\0') {
      piVar3 = (int *)((long)param_1 + 0xac);
      lVar4 = param_1[2];
      param_1[0x17] = param_1[3];
      param_1[1] = (long)piVar3;
      param_1[2] = (long)piVar3;
      param_1[0x16] = lVar4;
      param_1[3] = (long)(param_1 + 0x16);
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    else {
      piVar3 = (int *)param_1[2];
    }
    *(undefined1 *)((long)param_1 + 0xa9) = 1;
    *piVar3 = param_2;
    return param_2;
  }
  return 0;
}


