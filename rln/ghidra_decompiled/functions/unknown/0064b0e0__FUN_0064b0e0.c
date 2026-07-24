/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b0e0
 * Function: FUN_0064b0e0
 * Signature: undefined FUN_0064b0e0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined4 FUN_0064b0e0(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x48))();
  uVar2 = 0xffffffff;
  if (iVar1 != -1) {
    uVar2 = *(undefined4 *)param_1[2];
    param_1[2] = (long)((undefined4 *)param_1[2] + 1);
  }
  return uVar2;
}


