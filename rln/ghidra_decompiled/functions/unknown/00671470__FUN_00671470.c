/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00671470
 * Function: FUN_00671470
 * Signature: undefined FUN_00671470(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00671470(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  FUN_00662010();
  *param_1 = &PTR_FUN_007dbce0;
  FUN_0061f4d0(param_1 + 0xd,param_2,param_3);
  cVar1 = FUN_0061f654(param_1 + 0xd);
  if (cVar1 == '\0') {
    return;
  }
  *(undefined4 *)(param_1 + 0xf) = param_3;
  param_1[0x14] = param_4;
  FUN_0066219c(param_1);
  uVar2 = param_1[0x13];
  *(undefined1 *)((long)param_1 + 0xa9) = 0;
  *(undefined1 *)((long)param_1 + 0xaa) = 0;
  param_1[1] = uVar2;
  param_1[2] = uVar2;
  param_1[3] = uVar2;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  return;
}


