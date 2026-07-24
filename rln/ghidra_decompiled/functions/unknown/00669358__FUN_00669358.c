/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669358
 * Function: FUN_00669358
 * Signature: undefined FUN_00669358(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00669358(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
                    /* try { // try from 00669364 to 00769373 has its CatchHandler @ 00669680 */
  sVar1 = strlen(param_2);
                    /* try { // try from 00669374 to 0076937f has its CatchHandler @ 0066968c */
                    /* try { // try from 00669380 to 00769387 has its CatchHandler @ 006695f0 */
  FUN_0066918c(param_1,param_2,sVar1);
  return;
}


