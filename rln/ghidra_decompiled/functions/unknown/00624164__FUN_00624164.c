/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00624164
 * Function: FUN_00624164
 * Signature: undefined FUN_00624164(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00624164(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  char local_8 [8];
  
  param_1[1] = 0;
  FUN_006230e4(local_8,param_1,1);
  if (local_8[0] != '\0') {
    plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    lVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
    param_1[1] = lVar1;
                    /* try { // try from 006241dc to 007241e3 has its CatchHandler @ 0062447c */
    if (param_3 != lVar1) {
                    /* try { // try from 006241ec to 007241f3 has its CatchHandler @ 00624474 */
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 006241f4 to 00724207 has its CatchHandler @ 00624488 */
      FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 6);
      return param_1;
    }
  }
  return param_1;
}


