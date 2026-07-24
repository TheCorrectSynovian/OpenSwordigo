/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00645b8c
 * Function: FUN_00645b8c
 * Signature: undefined FUN_00645b8c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00645b8c(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x40) >> 3;
  lVar2 = param_2 + *(long *)(lVar3 + -0x18);
  if (param_2 == lVar3) {
    lVar3 = param_2 + *(long *)(lVar3 + -0x10);
  }
  else {
    lVar2 = lVar2 + param_3;
    param_3 = 0;
    lVar3 = lVar2;
  }
  if ((uVar1 & 1) != 0) {
    *(long *)(param_1 + 8) = param_2;
    *(long *)(param_1 + 0x10) = param_2 + param_3;
    *(long *)(param_1 + 0x18) = lVar2;
  }
  if ((*(uint *)(param_1 + 0x40) & 0x10) != 0) {
    *(long *)(param_1 + 0x28) = param_2;
    *(long *)(param_1 + 0x20) = param_2;
    *(long *)(param_1 + 0x30) = lVar3;
    for (; 0x7fffffff < param_4; param_4 = param_4 + -0x7fffffff) {
      param_2 = param_2 + 0x7fffffff;
    }
    *(long *)(param_1 + 0x28) = param_2 + (int)param_4;
    if ((uVar1 & 1) == 0) {
      *(long *)(param_1 + 8) = lVar2;
      *(long *)(param_1 + 0x10) = lVar2;
      *(long *)(param_1 + 0x18) = lVar2;
    }
  }
  return;
}


