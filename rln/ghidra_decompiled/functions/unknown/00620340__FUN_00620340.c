/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620340
 * Function: FUN_00620340
 * Signature: undefined FUN_00620340(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


byte FUN_00620340(long param_1,byte param_2)

{
                    /* try { // try from 00620348 to 0072034f has its CatchHandler @ 00620580 */
                    /* try { // try from 00620350 to 00720363 has its CatchHandler @ 00620578 */
  if ((*(byte *)(*(long *)(param_1 + 0x30) + (ulong)param_2) >> 1 & 1) != 0) {
    param_2 = param_2 - 0x20;
  }
  return param_2;
}


