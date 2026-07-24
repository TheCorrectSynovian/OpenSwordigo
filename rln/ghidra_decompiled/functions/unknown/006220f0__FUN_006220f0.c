/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006220f0
 * Function: FUN_006220f0
 * Signature: undefined FUN_006220f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006220f0(long param_1,undefined4 param_2)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x28); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
                    /* catch() { ... } // from try @ 00620ca4 with catch @ 0062211c */
    (*(code *)plVar1[1])(param_2,param_1,*(undefined4 *)(plVar1 + 2));
  }
  return;
}


