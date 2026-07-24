/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066f074
 * Function: FUN_0066f074
 * Signature: undefined FUN_0066f074(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 * FUN_0066f074(undefined8 *param_1,undefined4 param_2,long *param_3)

{
                    /* try { // try from 0066f074 to 0076f077 has its CatchHandler @ 0066f094 */
                    /* catch() { ... } // from try @ 0066f074 with catch @ 0066f094 */
  *param_1 = &DAT_007fd318;
  FUN_0066e318(param_1,*(long *)(*param_3 + -0x18) + 1);
                    /* catch() { ... } // from try @ 0066eea0 with catch @ 0066f0b0 */
  FUN_0066e86c(param_1,1,param_2);
  FUN_0066e474(param_1,param_3);
  return param_1;
}


