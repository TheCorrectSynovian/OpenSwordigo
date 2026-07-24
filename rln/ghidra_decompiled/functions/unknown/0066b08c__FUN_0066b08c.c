/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b08c
 * Function: FUN_0066b08c
 * Signature: undefined FUN_0066b08c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


bool FUN_0066b08c(long param_1,int *param_2,int param_3)

{
  if (*(long *)(param_2 + 2) != param_1) {
    return false;
  }
  return *param_2 == param_3;
}


