/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00626fac
 * Function: FUN_00626fac
 * Signature: undefined FUN_00626fac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00626fac(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  char local_8 [8];
  
                    /* try { // try from 00626fcc to 00726ff7 has its CatchHandler @ 00627554 */
  param_1[1] = 0;
  FUN_00625fe4(local_8,param_1,1);
  if (local_8[0] != '\0') {
                    /* try { // try from 00626ffc to 0072700f has its CatchHandler @ 006273e4 */
    plVar2 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    lVar1 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_3);
    param_1[1] = lVar1;
    if (param_3 != lVar1) {
                    /* try { // try from 0062702c to 0072705b has its CatchHandler @ 006274f4 */
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 6);
      return param_1;
    }
  }
  return param_1;
}


