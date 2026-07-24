/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062380c
 * Function: FUN_0062380c
 * Signature: undefined FUN_0062380c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0062380c(long *param_1,undefined1 *param_2)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  byte *pbVar4;
  char local_8 [8];
  
  param_1[1] = 0;
  FUN_006230e4(local_8,param_1,1);
  if (local_8[0] != '\0') {
    plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    pbVar4 = (byte *)plVar3[2];
    if (pbVar4 < (byte *)plVar3[3]) {
      uVar2 = (uint)*pbVar4;
      plVar3[2] = (long)(pbVar4 + 1);
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x50))();
      if (uVar2 == 0xffffffff) {
        uVar2 = 6;
        if (param_1[1] != 0) {
          uVar2 = 2;
        }
        goto LAB_0062387c;
      }
    }
    param_1[1] = 1;
    *param_2 = (char)uVar2;
  }
  if (param_1[1] != 0) {
    return param_1;
  }
  uVar2 = 4;
LAB_0062387c:
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00623894 to 0072389b has its CatchHandler @ 00623d70 */
  FUN_00620c14(lVar1,uVar2 | *(uint *)(lVar1 + 0x20));
                    /* try { // try from 0062389c to 007238f3 has its CatchHandler @ 00623d7c */
  return param_1;
}


