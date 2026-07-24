/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006285d0
 * Function: FUN_006285d0
 * Signature: undefined FUN_006285d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_006285d0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  char local_8 [4];
  uint local_4;
  
                    /* catch() { ... } // from try @ 006280dc with catch @ 006285d8 */
                    /* catch() { ... } // from try @ 006280b8 with catch @ 006285e8 */
  FUN_00625fe4(local_8,param_1,0);
                    /* catch() { ... } // from try @ 00628094 with catch @ 006285f8 */
  if (local_8[0] != '\0') {
    local_4 = 0;
                    /* catch() { ... } // from try @ 00628070 with catch @ 00628608 */
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar1 + 0x100);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_006652c8();
    }
                    /* catch() { ... } // from try @ 0062804c with catch @ 00628618 */
                    /* catch() { ... } // from try @ 00628028 with catch @ 00628628 */
    (**(code **)(*plVar2 + 0x10))
              (plVar2,*(undefined8 *)(lVar1 + 0xe8),0xffffffff,0,0xffffffff,lVar1,&local_4,param_2);
                    /* catch() { ... } // from try @ 00628004 with catch @ 00628638 */
    if (local_4 != 0) {
                    /* catch() { ... } // from try @ 00627fbc with catch @ 00628658 */
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* catch() { ... } // from try @ 00627f98 with catch @ 00628668 */
      FUN_006215c0(lVar1,local_4 | *(uint *)(lVar1 + 0x20));
                    /* catch() { ... } // from try @ 00627f74 with catch @ 00628678 */
      return param_1;
    }
  }
                    /* catch() { ... } // from try @ 00627fe0 with catch @ 00628648 */
  return param_1;
}


