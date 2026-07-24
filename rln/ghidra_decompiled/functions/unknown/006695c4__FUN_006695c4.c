/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006695c4
 * Function: FUN_006695c4
 * Signature: undefined FUN_006695c4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006695c4(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_3);
                    /* try { // try from 006695e4 to 007695eb has its CatchHandler @ 00669768 */
                    /* try { // try from 006695ec to 007696af has its CatchHandler @ 00669290 */
                    /* catch() { ... } // from try @ 00669380 with catch @ 006695f0 */
  FUN_00669390(param_1,param_2,param_3,sVar1);
  return;
}


