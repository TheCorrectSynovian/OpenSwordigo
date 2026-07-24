/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620be4
 * Function: FUN_00620be4
 * Signature: undefined FUN_00620be4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00620be4(long param_1)

{
  if ((*(uint *)(param_1 + 0x20) & 5) != 0) {
    param_1 = 0;
  }
  return param_1;
}


