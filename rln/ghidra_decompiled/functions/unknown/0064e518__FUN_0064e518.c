/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064e518
 * Function: FUN_0064e518
 * Signature: undefined FUN_0064e518(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064e518(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 local_8;
  
  *param_1 = &PTR_FUN_007db130;
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  param_1[2] = 0;
  FUN_0063eb8c(param_1,0,0);
  *param_1 = &PTR_FUN_007b7a70;
  iVar1 = strcmp(param_2,"C");
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,"POSIX"), iVar1 != 0)) {
    FUN_00670710(&local_8,param_2,0);
    FUN_0063eb8c(param_1,local_8,0);
    FUN_00670744(&local_8);
    return;
  }
  return;
}


