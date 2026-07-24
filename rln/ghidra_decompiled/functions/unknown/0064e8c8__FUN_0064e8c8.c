/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064e8c8
 * Function: FUN_0064e8c8
 * Signature: undefined FUN_0064e8c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064e8c8(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 local_8;
  
                    /* try { // try from 0064e8d4 to 0074e95b has its CatchHandler @ 0064edd8 */
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_007db0e0;
  param_1[2] = 0;
  FUN_0063f19c(param_1,0);
  *param_1 = &PTR_FUN_007b7890;
  iVar1 = strcmp(param_2,"C");
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,"POSIX"), iVar1 != 0)) {
    FUN_00670710(&local_8,param_2,0);
    FUN_0063f19c(param_1,local_8);
    FUN_00670744(&local_8);
    return;
  }
  return;
}


