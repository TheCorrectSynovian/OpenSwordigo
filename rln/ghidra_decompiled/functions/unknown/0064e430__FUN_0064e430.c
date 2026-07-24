/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064e430
 * Function: FUN_0064e430
 * Signature: undefined FUN_0064e430(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064e430(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 local_8;
  
  *param_1 = &PTR_FUN_007db1a0;
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  param_1[2] = 0;
  FUN_0063ecf0(param_1,0,0);
                    /* try { // try from 0064e47c to 0074e487 has its CatchHandler @ 0064e094 */
  *param_1 = &PTR_FUN_007b7a00;
                    /* catch() { ... } // from try @ 0064e3a4 with catch @ 0064e484 */
  iVar1 = strcmp(param_2,"C");
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,"POSIX"), iVar1 != 0)) {
    FUN_00670710(&local_8,param_2,0);
    FUN_0063ecf0(param_1,local_8,0);
    FUN_00670744(&local_8);
    return;
  }
  return;
}


