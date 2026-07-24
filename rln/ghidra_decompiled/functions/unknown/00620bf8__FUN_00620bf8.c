/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620bf8
 * Function: FUN_00620bf8
 * Signature: undefined FUN_00620bf8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_00620bf8(long param_1)

{
                    /* try { // try from 00620bf8 to 00720bff has its CatchHandler @ 0062214c */
  return (*(uint *)(param_1 + 0x20) & 5) != 0;
}


