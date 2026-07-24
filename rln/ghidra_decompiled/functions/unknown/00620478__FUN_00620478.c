/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620478
 * Function: FUN_00620478
 * Signature: undefined FUN_00620478(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00620478(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  
                    /* try { // try from 00620490 to 00720493 has its CatchHandler @ 00620580 */
                    /* try { // try from 00620494 to 007205b3 has its CatchHandler @ 006202ec */
  FUN_006202a8(param_1,0,0,param_3);
  *param_1 = &PTR_FUN_007d9cd0;
  iVar1 = strcmp(param_2,"C");
  if ((iVar1 != 0) && (iVar1 = strcmp(param_2,"POSIX"), iVar1 != 0)) {
    FUN_00670744(param_1 + 2);
    FUN_00670710(param_1 + 2,param_2,0);
                    /* catch() { ... } // from try @ 00620468 with catch @ 00620500 */
                    /* catch() { ... } // from try @ 00620364 with catch @ 00620504 */
    return;
  }
  return;
}


