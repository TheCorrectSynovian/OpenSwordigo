/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006270e0
 * Function: FUN_006270e0
 * Signature: undefined FUN_006270e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_006270e0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char local_8 [8];
  
                    /* try { // try from 006270f4 to 0072710f has its CatchHandler @ 006273e0 */
  param_1[1] = 0;
  FUN_00625fe4(local_8,param_1,1);
                    /* try { // try from 00627110 to 00727483 has its CatchHandler @ 0062647c */
  if (local_8[0] != '\0') {
    plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    lVar2 = plVar1[3] - plVar1[2] >> 2;
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*plVar1 + 0x38))();
    }
    if (0 < lVar2) {
      if (param_3 < lVar2) {
        lVar2 = param_3;
      }
      plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
      lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,lVar2);
      param_1[1] = lVar2;
      return lVar2;
    }
    if (lVar2 == -1) {
      lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar2,*(uint *)(lVar2 + 0x20) | 2);
      return param_1[1];
    }
  }
  return param_1[1];
}


