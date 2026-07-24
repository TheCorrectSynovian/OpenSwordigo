/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006403b0
 * Function: FUN_006403b0
 * Signature: undefined FUN_006403b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006403b0(long *param_1,uint param_2)

{
  *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) =
       *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) | param_2;
  return;
}


