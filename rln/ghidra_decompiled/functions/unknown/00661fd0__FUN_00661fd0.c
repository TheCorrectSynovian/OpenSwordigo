/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00661fd0
 * Function: FUN_00661fd0
 * Signature: undefined FUN_00661fd0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00661fd0(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xc0) != '\0') {
    lVar1 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x98);
    lVar1 = *(long *)(param_1 + 0xb0) + (ulong)(*(long *)(param_1 + 0x10) != lVar1) * 4;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
    *(long *)(param_1 + 0xb0) = lVar1;
    *(long *)(param_1 + 0x10) = lVar1;
    *(undefined1 *)(param_1 + 0xc0) = 0;
  }
  return;
}


