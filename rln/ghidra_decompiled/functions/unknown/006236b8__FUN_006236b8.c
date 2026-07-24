/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006236b8
 * Function: FUN_006236b8
 * Signature: undefined FUN_006236b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_006236b8(long *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  long *plVar5;
  char local_8 [8];
  
  param_1[1] = 0;
  FUN_006230e4(local_8,param_1,1);
  if (local_8[0] == '\0') {
    uVar2 = 4;
    if (param_1[1] == 0) {
LAB_0062374c:
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00620c14(lVar1,uVar2 | *(uint *)(lVar1 + 0x20));
      return 0xffffffff;
    }
    uVar3 = 0xffffffff;
  }
  else {
    plVar5 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    pbVar4 = (byte *)plVar5[2];
    if (pbVar4 < (byte *)plVar5[3]) {
      uVar3 = (ulong)*pbVar4;
      plVar5[2] = (long)(pbVar4 + 1);
    }
    else {
      uVar3 = (**(code **)(*plVar5 + 0x50))(plVar5);
      if ((int)uVar3 == -1) {
        uVar2 = 6;
                    /* try { // try from 00623748 to 0072374f has its CatchHandler @ 00623c74 */
        if (param_1[1] != 0) {
          uVar2 = 2;
        }
        goto LAB_0062374c;
      }
    }
    param_1[1] = 1;
  }
  return uVar3;
}


