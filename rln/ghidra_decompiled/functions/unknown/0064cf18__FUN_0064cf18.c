/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064cf18
 * Function: FUN_0064cf18
 * Signature: undefined FUN_0064cf18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0064cf18(undefined8 param_1,uint *param_2,uint *param_3)

{
  ulong uVar1;
  
  uVar1 = 0;
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    uVar1 = (ulong)*param_2 + (uVar1 >> 0x39 | uVar1 << 7);
                    /* catch() { ... } // from try @ 0064ce88 with catch @ 0064cf34 */
  }
  return uVar1;
}


