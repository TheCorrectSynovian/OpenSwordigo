/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00644a78
 * Function: FUN_00644a78
 * Signature: undefined FUN_00644a78(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined4 FUN_00644a78(long param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if ((*(uint *)(param_1 + 0x40) >> 3 & 1) != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x28);
    puVar2 = *(undefined4 **)(param_1 + 0x18);
    if ((puVar1 != (undefined4 *)0x0) && (puVar2 < puVar1)) {
      *(undefined4 **)(param_1 + 0x18) = puVar1;
      puVar2 = puVar1;
    }
    if (*(undefined4 **)(param_1 + 0x10) < puVar2) {
      return **(undefined4 **)(param_1 + 0x10);
    }
  }
  return 0xffffffff;
}


