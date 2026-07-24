/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00621688
 * Function: FUN_00621688
 * Signature: undefined FUN_00621688(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_00621688(long param_1)

{
                    /* try { // try from 00621698 to 007216ab has its CatchHandler @ 00622288 */
  return (*(uint *)(param_1 + 0x20) & 5) != 0;
}


