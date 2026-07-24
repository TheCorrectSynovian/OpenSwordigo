/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c8a8
 * Function: FUN_0066c8a8
 * Signature: undefined FUN_0066c8a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066c8a8(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)*param_1;
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd318)) {
    if (*(int *)(puVar1 + -8) != 0) {
      FUN_0066c650(param_1,0,0,0);
      puVar1 = (undefined *)*param_1;
    }
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
  return;
}


