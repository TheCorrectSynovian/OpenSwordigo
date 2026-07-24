/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00661f98
 * Function: FUN_00661f98
 * Signature: undefined FUN_00661f98(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00661f98(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(long *)(param_1 + 8) = param_1 + 0xac;
    *(long *)(param_1 + 0x10) = param_1 + 0xac;
    *(undefined8 *)(param_1 + 0xb0) = uVar1;
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_1 + 0xb0;
    *(undefined1 *)(param_1 + 0xc0) = 1;
  }
  return;
}


