/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f3fb8
 * Function: FUN_005f3fb8
 * Signature: undefined FUN_005f3fb8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f3fb8(undefined8 param_1,long param_2)

{
  if (*(undefined1 **)(param_2 + 0x20) != &LAB_0069a2a0) {
                    /* catch() { ... } // from try @ 005f3e70 with catch @ 005f3ff0 */
    FUN_005eed74(param_1,*(undefined1 **)(param_2 + 0x20),
                 (long)(1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) * 0x28,0);
  }
  FUN_005eed74(param_1,*(undefined8 *)(param_2 + 0x18),(long)*(int *)(param_2 + 0x38) << 4,0);
                    /* catch() { ... } // from try @ 005f3d64 with catch @ 005f4030 */
  FUN_005eed74(param_1,param_2,0x40,0);
  return;
}


