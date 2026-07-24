/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005eee00
 * Function: FUN_005eee00
 * Signature: undefined FUN_005eee00(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


uint FUN_005eee00(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 8;
  if (0xf < param_1) {
    do {
      uVar1 = param_1 + 1;
      param_1 = uVar1 >> 1;
      uVar2 = uVar2 + 8;
    } while (0x1f < uVar1);
  }
  if (7 < param_1) {
    param_1 = uVar2 | param_1 - 8;
  }
  return param_1;
}


