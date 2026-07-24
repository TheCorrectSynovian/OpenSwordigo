/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00623408
 * Function: FUN_00623408
 * Signature: undefined FUN_00623408(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00623408(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined4 uVar3;
  char local_10 [4];
  uint local_c;
  long local_8;
  
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
    uVar3 = 0x80000000;
                    /* try { // try from 006234a8 to 007234cf has its CatchHandler @ 00623cc8 */
    if ((local_8 < -0x80000000) || (uVar3 = 0x7fffffff, 0x7fffffff < local_8)) {
      *param_2 = uVar3;
      local_c = local_c | 4;
    }
    else {
      *param_2 = (int)local_8;
    }
    if (local_c != 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 006234d0 to 00723627 has its CatchHandler @ 00622fb4 */
      FUN_00620c14(lVar1,local_c | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
  return param_1;
}


