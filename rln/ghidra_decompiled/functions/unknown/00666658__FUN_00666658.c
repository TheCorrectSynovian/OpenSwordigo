/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666658
 * Function: FUN_00666658
 * Signature: undefined FUN_00666658(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666658(undefined1 *param_1,undefined1 *param_2,size_t param_3)

{
  if (param_3 != 1) {
    memcpy(param_1,param_2,param_3);
    return;
  }
  *param_1 = *param_2;
  return;
}


