/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0062d268
 * Function: FUN_0062d268
 * Signature: undefined FUN_0062d268(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0062d268(undefined8 *param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
                    /* try { // try from 0062d294 to 0072d2bb has its CatchHandler @ 0062d2d4 */
  *param_1 = &PTR_FUN_007b6c50;
  uVar2 = FUN_0063be10();
  param_1[2] = uVar2;
  *param_1 = &PTR_FUN_007b6c90;
  iVar1 = strcmp(param_2,"C");
                    /* try { // try from 0062d2bc to 0072d2c3 has its CatchHandler @ 0062d2e8 */
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,"POSIX"), iVar1 != 0)) {
                    /* catch() { ... } // from try @ 0062d2d8 with catch @ 0062d2e4 */
                    /* catch() { ... } // from try @ 0062d2bc with catch @ 0062d2e8 */
    FUN_00670744(param_1 + 2);
    FUN_00670710(param_1 + 2,param_2,0);
    return;
  }
                    /* catch() { ... } // from try @ 0062d294 with catch @ 0062d2d4 */
                    /* try { // try from 0062d2d8 to 0072d2df has its CatchHandler @ 0062d2e4 */
                    /* try { // try from 0062d2e0 to 0072d2fb has its CatchHandler @ 0062d254 */
  return;
}


