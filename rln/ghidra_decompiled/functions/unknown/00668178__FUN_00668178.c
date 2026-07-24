/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668178
 * Function: FUN_00668178
 * Signature: undefined FUN_00668178(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00668178(undefined8 param_1,char *param_2,undefined8 param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
                    /* try { // try from 00668198 to 0076819b has its CatchHandler @ 006681bc */
                    /* try { // try from 0066819c to 007681df has its CatchHandler @ 006667ac */
                    /* catch() { ... } // from try @ 00668070 with catch @ 006681b0 */
  FUN_006680e0(param_1,param_2,param_3,sVar1);
  return;
}


