/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00624038
 * Function: FUN_00624038
 * Signature: undefined FUN_00624038(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_00624038(long *param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  char local_8 [8];
  
  param_1[1] = 0;
  FUN_006230e4(local_8,param_1,1);
  if (local_8[0] == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((byte *)plVar2[2] < (byte *)plVar2[3]) {
      uVar3 = (uint)*(byte *)plVar2[2];
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x48))();
                    /* try { // try from 006240a4 to 007240b7 has its CatchHandler @ 006245d8 */
      if (uVar3 == 0xffffffff) {
                    /* try { // try from 006240b8 to 007241db has its CatchHandler @ 00624008 */
        lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
        FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 2);
        return 0xffffffff;
      }
    }
  }
  return uVar3;
}


