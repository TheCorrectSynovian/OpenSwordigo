/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620cdc
 * Function: FUN_00620cdc
 * Signature: undefined FUN_00620cdc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_00620cdc(long param_1)

{
                    /* try { // try from 00620ce0 to 00720d43 has its CatchHandler @ 00622724 */
  return (*(uint *)(param_1 + 0x20) & 5) != 0;
}


