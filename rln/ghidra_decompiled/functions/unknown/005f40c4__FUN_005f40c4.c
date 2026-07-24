/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f40c4
 * Function: FUN_005f40c4
 * Signature: undefined FUN_005f40c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_005f40c4(long param_1,long param_2)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 005f3de0 with catch @ 005f40e0 */
  puVar1 = (undefined8 *)
           (*(long *)(param_1 + 0x20) +
           (long)(int)((1 << (ulong)(*(byte *)(param_1 + 0xb) & 0x1f)) - 1U &
                      *(uint *)(param_2 + 0xc)) * 0x28);
  while ((*(int *)(puVar1 + 3) != 4 || (puVar1[2] != param_2))) {
    puVar1 = (undefined8 *)puVar1[4];
    if (puVar1 == (undefined8 *)0x0) {
      return &DAT_00699bc8;
    }
  }
  return puVar1;
}


