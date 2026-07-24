/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062c570
 * Function: FUN_0062c570
 * Signature: undefined FUN_0062c570(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062c570(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 local_8;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_007da130;
  param_1[2] = 0;
  FUN_0063efc4(param_1,0);
  *param_1 = &PTR_FUN_007b6cd0;
  iVar1 = strcmp(param_2,"C");
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,"POSIX"), iVar1 != 0)) {
    FUN_00670710(&local_8,param_2,0);
    FUN_0063efc4(param_1,local_8);
    FUN_00670744(&local_8);
    return;
  }
  return;
}


