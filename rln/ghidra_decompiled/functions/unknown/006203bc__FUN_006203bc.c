/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006203bc
 * Function: FUN_006203bc
 * Signature: undefined FUN_006203bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


byte FUN_006203bc(long param_1,byte param_2)

{
  if ((*(byte *)(*(long *)(param_1 + 0x30) + (ulong)param_2) & 1) != 0) {
    param_2 = param_2 + 0x20;
  }
  return param_2;
}


