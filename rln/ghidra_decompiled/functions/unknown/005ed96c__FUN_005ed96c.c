/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ed96c
 * Function: FUN_005ed96c
 * Signature: undefined FUN_005ed96c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ed96c(long param_1)

{
                    /* try { // try from 005ed988 to 006ed9af has its CatchHandler @ 005eda14 */
  while (*(long *)(*(long *)(param_1 + 0x20) + 0x50) != 0) {
    FUN_005ed9a0(param_1);
  }
  return;
}


