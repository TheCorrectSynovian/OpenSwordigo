/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00628010
 * Function: FUN_00628010
 * Signature: undefined FUN_00628010(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00628010(long *param_1,uint param_2)

{
  *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) =
       *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) | param_2;
                    /* try { // try from 00628028 to 0072802b has its CatchHandler @ 00628628 */
  return;
}


