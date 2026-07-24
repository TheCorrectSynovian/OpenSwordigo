/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f30a8
 * Function: FUN_005f30a8
 * Signature: undefined FUN_005f30a8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005f30a8(undefined8 param_1,long param_2)

{
                    /* catch() { ... } // from try @ 005f2c78 with catch @ 005f30bc */
  FUN_005ed5f4(param_2,*(undefined8 *)(param_2 + 0x40));
  FUN_005eed74(param_1,*(undefined8 *)(param_2 + 0x50),(long)*(int *)(param_2 + 0x5c) * 0x28,0);
  FUN_005eed74(param_1,*(undefined8 *)(param_2 + 0x40),(long)*(int *)(param_2 + 0x58) << 4,0);
  FUN_005eed74(param_1,param_2,0xb8,0);
  return;
}


