/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b56c
 * Function: FUN_0064b56c
 * Signature: undefined FUN_0064b56c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064b56c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  *param_1 = &PTR_FUN_007b7710;
  param_1[6] = *(undefined8 *)(param_2 + 0x28);
  param_1[1] = uVar4;
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  FUN_0063b7dc(param_1 + 7,param_2 + 0x38);
  return;
}


