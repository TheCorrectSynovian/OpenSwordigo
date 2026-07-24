/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f3460
 * Function: thunk_FUN_005ed96c
 * Signature: undefined thunk_FUN_005ed96c(void)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void thunk_FUN_005ed96c(long param_1)

{
  while (*(long *)(*(long *)(param_1 + 0x20) + 0x50) != 0) {
    FUN_005ed9a0(param_1);
  }
  return;
}


