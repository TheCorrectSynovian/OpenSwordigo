/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00624f3c
 * Function: FUN_00624f3c
 * Signature: undefined FUN_00624f3c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00624f3c(long *param_1,uint param_2)

{
  *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) =
       *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) & (param_2 ^ 0xffffffff);
  return;
}


