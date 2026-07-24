/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b824
 * Function: FUN_0064b824
 * Signature: undefined FUN_0064b824(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064b824(long *param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[2];
  if (((ulong)param_1[1] < uVar1) && (*(int *)(uVar1 - 4) == param_2)) {
    param_1[2] = uVar1 - 4;
    return;
  }
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}


