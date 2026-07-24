/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00625138
 * Function: FUN_00625138
 * Signature: undefined FUN_00625138(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00625138(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char local_8 [4];
  uint local_4;
  
                    /* catch() { ... } // from try @ 00624fcc with catch @ 00625140 */
                    /* catch() { ... } // from try @ 00624e08 with catch @ 0062514c */
  FUN_006230e4(local_8,param_1,0);
  if (local_8[0] != '\0') {
    local_4 = 0;
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
                    /* catch() { ... } // from try @ 00624f64 with catch @ 00625198 */
    (**(code **)(*plVar2 + 0x28))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_4,param_2);
    if (local_4 != 0) {
                    /* try { // try from 006251c0 to 007251cb has its CatchHandler @ 00624d10 */
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* catch() { ... } // from try @ 00625130 with catch @ 006251c8 */
      FUN_00620c14(lVar1,local_4 | *(uint *)(lVar1 + 0x20));
      return param_1;
    }
  }
  return param_1;
}


