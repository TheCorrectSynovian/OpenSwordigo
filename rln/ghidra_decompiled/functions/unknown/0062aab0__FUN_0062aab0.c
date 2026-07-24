/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062aab0
 * Function: FUN_0062aab0
 * Signature: undefined FUN_0062aab0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0062aab0(undefined8 param_1,byte *param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = 0;
  if (param_2 < param_3) {
    do {
      pbVar2 = param_2 + 1;
      uVar1 = (ulong)*param_2 + (uVar1 >> 0x39 | uVar1 << 7);
      param_2 = pbVar2;
    } while (pbVar2 != param_3);
  }
  return uVar1;
}


