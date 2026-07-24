/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062cfdc
 * Function: FUN_0062cfdc
 * Signature: undefined FUN_0062cfdc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062cfdc(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_007da260;
  uVar2 = FUN_0063be10();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_007da360;
  iVar1 = strcmp(param_2,"C");
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,"POSIX"), iVar1 != 0)) {
    FUN_00670744(param_1 + 2);
    FUN_00670710(param_1 + 2,param_2,0);
    return;
  }
  return;
}


