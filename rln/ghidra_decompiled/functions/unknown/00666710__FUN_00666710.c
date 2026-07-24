/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666710
 * Function: FUN_00666710
 * Signature: undefined FUN_00666710(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666710(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  if (param_3 - (long)param_2 != 1) {
    memcpy(param_1,param_2,param_3 - (long)param_2);
    return;
  }
  *param_1 = *param_2;
  return;
}


