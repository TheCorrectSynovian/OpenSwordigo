/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062d0c8
 * Function: FUN_0062d0c8
 * Signature: undefined FUN_0062d0c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062d0c8(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_00670964(param_1,param_3);
  *param_1 = &PTR_FUN_007da300;
  iVar1 = strcmp(param_2,"C");
                    /* catch() { ... } // from try @ 0062cf40 with catch @ 0062d10c
                       catch() { ... } // from try @ 0062cfd0 with catch @ 0062d10c */
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,"POSIX"), iVar1 != 0)) {
                    /* try { // try from 0062d130 to 0072d157 has its CatchHandler @ 0062d160 */
    FUN_00670744(param_1 + 2);
    FUN_00670710(param_1 + 2,param_2,0);
    return;
  }
  return;
}


