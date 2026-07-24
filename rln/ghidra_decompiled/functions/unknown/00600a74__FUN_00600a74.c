/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00600a74
 * Function: FUN_00600a74
 * Signature: undefined FUN_00600a74(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00600a74(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  if (*piVar2 == 0x11f) {
    iVar1 = FUN_00600ac8(param_1,param_1 + 0x18);
    piVar2 = (int *)(param_1 + 0x10);
  }
  else {
    iVar1 = 0x11f;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)piVar2;
  }
  *piVar2 = iVar1;
  return;
}


