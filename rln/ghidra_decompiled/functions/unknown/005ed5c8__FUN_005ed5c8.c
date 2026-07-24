/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ed5c8
 * Function: FUN_005ed5c8
 * Signature: undefined FUN_005ed5c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ed5c8(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != param_2 + 0x18) {
    *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  FUN_005eed74(param_1,param_2,0x28,0);
  return;
}


