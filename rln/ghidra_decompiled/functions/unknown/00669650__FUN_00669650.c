/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669650
 * Function: FUN_00669650
 * Signature: undefined FUN_00669650(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00669650(long *param_1,ulong param_2,undefined1 param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*param_1 + -0x18);
  if (0x3ffffffffffffff9 < param_2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 006696b0 to 007696b3 has its CatchHandler @ 00669768 */
    FUN_0066554c("basic_string::resize",param_2,param_3);
  }
  if (uVar1 < param_2) {
                    /* catch() { ... } // from try @ 00669374 with catch @ 0066968c
                       catch() { ... } // from try @ 00669390 with catch @ 0066968c
                       catch() { ... } // from try @ 0066946c with catch @ 0066968c */
    if (param_2 - uVar1 != 0) {
      FUN_0066739c(param_1,param_2 - uVar1);
      return;
    }
  }
  else {
                    /* catch() { ... } // from try @ 006692c0 with catch @ 0066967c */
    if (param_2 < uVar1) {
      FUN_00668cb8(param_1,param_2,uVar1 - param_2,0);
      return;
    }
  }
                    /* catch() { ... } // from try @ 00669364 with catch @ 00669680
                       catch() { ... } // from try @ 00669498 with catch @ 00669680 */
                    /* catch() { ... } // from try @ 00669338 with catch @ 00669684 */
  return;
}


