/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061f664
 * Function: FUN_0061f664
 * Signature: undefined FUN_0061f664(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


int FUN_0061f664(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = fileno((FILE *)*param_1);
                    /* catch() { ... } // from try @ 0061f2d4 with catch @ 0061f678 */
  return iVar1;
}


