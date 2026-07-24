/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d1f8
 * Function: FUN_0066d1f8
 * Signature: undefined FUN_0066d1f8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_0066d1f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_2;
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd318)) {
    if (*(int *)(puVar1 + -8) != 0) {
      FUN_0066c650(param_2,0,0,0);
      puVar1 = (undefined *)*param_2;
    }
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
  *param_1 = puVar1 + *(long *)(puVar1 + -0x18) * 4;
  return param_1;
}


