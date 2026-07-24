/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00625c30
 * Function: FUN_00625c30
 * Signature: undefined FUN_00625c30(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00625c30(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char local_8 [4];
  uint local_4;
  
  FUN_006230e4(local_8,param_1,0);
  if (local_8[0] != '\0') {
    local_4 = 0;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00625c6c to 00725c93 has its CatchHandler @ 00625e48 */
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
                    /* try { // try from 00625c94 to 00725dd3 has its CatchHandler @ 00625abc */
    (**(code **)(*plVar2 + 0x60))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_4,param_2);
    if (local_4 != 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_00620c14(lVar1,local_4 | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
  return param_1;
}


