/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064f5c0
 * Function: FUN_0064f5c0
 * Signature: undefined FUN_0064f5c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064f5c0(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0064f5e8 to 0074f5ef has its CatchHandler @ 0064f814 */
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_007b7810;
  uVar2 = FUN_0063be10();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_007b7850;
  iVar1 = strcmp(param_2,"C");
                    /* try { // try from 0064f628 to 0074f633 has its CatchHandler @ 0064f91c */
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,"POSIX"), iVar1 != 0)) {
    FUN_00670744(param_1 + 2);
                    /* try { // try from 0064f650 to 0074f6db has its CatchHandler @ 0064f81c */
    FUN_00670710(param_1 + 2,param_2,0);
    return;
  }
  return;
}


