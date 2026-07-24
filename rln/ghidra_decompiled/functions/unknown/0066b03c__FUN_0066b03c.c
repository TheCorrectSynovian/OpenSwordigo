/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b03c
 * Function: FUN_0066b03c
 * Signature: undefined FUN_0066b03c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0066b03c(long *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long extraout_x1;
  
                    /* catch() { ... } // from try @ 0066afb0 with catch @ 0066b044 */
  iVar1 = (**(code **)(*param_1 + 0x20))();
                    /* catch() { ... } // from try @ 0066b13c with catch @ 0066b060
                       catch() { ... } // from try @ 0066b1dc with catch @ 0066b060 */
  if (*(long *)(param_3 + 2) != extraout_x1) {
    return false;
  }
  return *param_3 == iVar1;
}


