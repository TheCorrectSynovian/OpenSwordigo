/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00624298
 * Function: FUN_00624298
 * Signature: undefined FUN_00624298(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00624298(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char local_8 [8];
  
  param_1[1] = 0;
  FUN_006230e4(local_8,param_1,1);
  if (local_8[0] != '\0') {
    plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    lVar2 = plVar1[3] - plVar1[2];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*plVar1 + 0x38))();
    }
    if (0 < lVar2) {
                    /* try { // try from 006242f8 to 0072431f has its CatchHandler @ 00624414 */
      if (param_3 < lVar2) {
        lVar2 = param_3;
      }
      plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
                    /* try { // try from 00624320 to 00724447 has its CatchHandler @ 00624008 */
      lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,lVar2);
      param_1[1] = lVar2;
      return lVar2;
    }
    if (lVar2 == -1) {
      lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00620c14(lVar2,*(uint *)(lVar2 + 0x20) | 2);
      return param_1[1];
    }
  }
  return param_1[1];
}


