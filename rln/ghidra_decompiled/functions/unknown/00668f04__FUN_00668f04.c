/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668f04
 * Function: FUN_00668f04
 * Signature: undefined FUN_00668f04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00668f04(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  if ((-1 < *(int *)(puVar1 + -8)) && (puVar1 != &DAT_007fd2f8)) {
    if (*(int *)(puVar1 + -8) != 0) {
      FUN_00668cb8(param_1,0,0,0);
      puVar1 = (undefined1 *)*param_1;
    }
    *(undefined4 *)(puVar1 + -8) = 0xffffffff;
  }
  return;
}


