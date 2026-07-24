/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00623280
 * Function: FUN_00623280
 * Signature: undefined FUN_00623280(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00623280(long *param_1,undefined2 *param_2)

{
  long lVar1;
  long *plVar2;
  char local_10 [4];
  uint local_c;
  long local_8;
  
                    /* try { // try from 00623280 to 0072335f has its CatchHandler @ 00622fb4 */
  FUN_006230e4(local_10,param_1,0);
  if (local_10[0] != '\0') {
    local_c = 0;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    (**(code **)(*plVar2 + 0x18))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_c,&local_8)
    ;
    if (local_8 < -0x8000) {
      *param_2 = 0x8000;
    }
    else {
      if (local_8 < 0x8000) {
        *param_2 = (short)local_8;
        if (local_c == 0) {
          return param_1;
        }
        goto LAB_0062333c;
      }
      *param_2 = 0x7fff;
    }
    local_c = local_c | 4;
    if (local_c != 0) {
LAB_0062333c:
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00620c14(lVar1,local_c | *(uint *)(lVar1 + 0x20));
                    /* try { // try from 00623360 to 00723373 has its CatchHandler @ 00623f94 */
      return param_1;
    }
  }
  return param_1;
}


