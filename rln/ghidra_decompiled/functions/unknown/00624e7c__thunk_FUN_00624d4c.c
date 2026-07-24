/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00624e7c
 * Function: thunk_FUN_00624d4c
 * Signature: undefined thunk_FUN_00624d4c(void)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * thunk_FUN_00624d4c(long *param_1,undefined1 *param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  byte *pbVar4;
  char acStack_8 [8];
  
  FUN_006230e4(acStack_8,param_1,0);
  if (acStack_8[0] != '\0') {
    plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    pbVar4 = (byte *)plVar3[2];
    if (pbVar4 < (byte *)plVar3[3]) {
      uVar2 = (uint)*pbVar4;
      plVar3[2] = (long)(pbVar4 + 1);
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x50))();
      if (uVar2 == 0xffffffff) {
        lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
        FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 6);
        return param_1;
      }
    }
    *param_2 = (char)uVar2;
  }
  return param_1;
}


