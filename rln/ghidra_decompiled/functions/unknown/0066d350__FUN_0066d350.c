/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d350
 * Function: FUN_0066d350
 * Signature: undefined FUN_0066d350(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066d350(long *param_1,undefined4 param_2)

{
  FUN_0066c650(param_1,0,*(undefined8 *)(*param_1 + -0x18),1);
                    /* catch() { ... } // from try @ 0066d2a4 with catch @ 0066d37c */
  *(undefined4 *)*param_1 = param_2;
  return param_1;
}


