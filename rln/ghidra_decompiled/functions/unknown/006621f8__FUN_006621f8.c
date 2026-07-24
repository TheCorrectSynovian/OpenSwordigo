/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006621f8
 * Function: FUN_006621f8
 * Signature: undefined FUN_006621f8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006621f8(long param_1)

{
  if (*(char *)(param_1 + 0xa8) != '\0') {
    if (*(void **)(param_1 + 0x98) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 0x98));
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(void **)(param_1 + 0xd0) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0xd0));
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  return;
}


