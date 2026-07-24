/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666674
 * Function: FUN_00666674
 * Signature: undefined FUN_00666674(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666674(undefined1 *param_1,undefined1 *param_2,size_t param_3)

{
  if (param_3 != 1) {
    memmove(param_1,param_2,param_3);
    return;
  }
  *param_1 = *param_2;
  return;
}


