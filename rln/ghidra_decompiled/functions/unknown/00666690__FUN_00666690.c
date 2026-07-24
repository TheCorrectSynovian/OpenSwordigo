/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00666690
 * Function: FUN_00666690
 * Signature: undefined FUN_00666690(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00666690(byte *param_1,size_t param_2,byte param_3)

{
  if (param_2 != 1) {
    memset(param_1,(uint)param_3,param_2);
    return;
  }
  *param_1 = param_3;
  return;
}


