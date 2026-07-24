/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b8bc
 * Function: FUN_0064b8bc
 * Signature: undefined FUN_0064b8bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined4 FUN_0064b8bc(long *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[5];
  if (puVar2 < (undefined4 *)param_1[6]) {
    *puVar2 = param_2;
    param_1[5] = (long)(puVar2 + 1);
    return param_2;
  }
  uVar1 = (**(code **)(*param_1 + 0x68))();
  return uVar1;
}


