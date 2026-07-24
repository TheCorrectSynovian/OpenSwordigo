/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00628708
 * Function: FUN_00628708
 * Signature: undefined FUN_00628708(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00628708(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char local_8 [4];
  uint local_4;
  
                    /* catch() { ... } // from try @ 006281f0 with catch @ 00628710 */
                    /* catch() { ... } // from try @ 00627ec0 with catch @ 00628720 */
  FUN_00625fe4(local_8,param_1,0);
  if (local_8[0] != '\0') {
    local_4 = 0;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00628744 to 00728c67 has its CatchHandler @ 00628db0 */
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
    (**(code **)(*plVar2 + 0x38))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_4,param_2);
    if (local_4 != 0) {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      FUN_006215c0(lVar1,local_4 | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
  return param_1;
}


