/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668bf0
 * Function: FUN_00668bf0
 * Signature: undefined FUN_00668bf0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00668bf0(long *param_1,long param_2)

{
  if (param_1 == &DAT_007fd2e0) {
    return;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_2;
  *(undefined1 *)((long)param_1 + param_2 + 0x18) = 0;
  return;
}


