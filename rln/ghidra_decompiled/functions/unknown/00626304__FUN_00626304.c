/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00626304
 * Function: FUN_00626304
 * Signature: undefined FUN_00626304(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00626304(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  char local_10 [4];
  uint local_c;
  long local_8;
  
                    /* try { // try from 00626324 to 0072636f has its CatchHandler @ 0062637c */
  FUN_00625fe4(local_10,param_1,0);
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
                    /* try { // try from 00626370 to 0072637f has its CatchHandler @ 00625fb4 */
    uVar3 = 0x80000000;
                    /* catch() { ... } // from try @ 006262fc with catch @ 00626378 */
    if ((local_8 < -0x80000000) || (uVar3 = 0x7fffffff, 0x7fffffff < local_8)) {
                    /* catch() { ... } // from try @ 00626324 with catch @ 0062637c */
      *param_2 = uVar3;
      local_c = local_c | 4;
    }
    else {
      *param_2 = (int)local_8;
    }
    if (local_c != 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar1,local_c | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
  return param_1;
}


