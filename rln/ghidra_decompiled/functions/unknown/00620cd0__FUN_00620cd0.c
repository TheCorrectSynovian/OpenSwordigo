/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620cd0
 * Function: FUN_00620cd0
 * Signature: undefined FUN_00620cd0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_00620cd0(long param_1)

{
  return *(uint *)(param_1 + 0x20) >> 1 & 1;
}


