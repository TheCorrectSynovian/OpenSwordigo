/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064f420
 * Function: FUN_0064f420
 * Signature: undefined FUN_0064f420(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064f420(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_00670a0c(param_1,param_3);
  *param_1 = &PTR_FUN_007db2b0;
  iVar1 = strcmp(param_2,"C");
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,"POSIX"), iVar1 != 0)) {
    FUN_00670744(param_1 + 2);
    FUN_00670710(param_1 + 2,param_2,0);
    return;
  }
  return;
}


