/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eee30
 * Function: FUN_005eee30
 * Signature: undefined FUN_005eee30(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_005eee30(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1 >> 3 & 0x1f;
  if (uVar1 != 0) {
    param_1 = (ulong)(((uint)param_1 & 7 | 8) << (ulong)(uVar1 - 1 & 0x1f));
  }
  return param_1;
}


