/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f9ff0
 * Function: FUN_005f9ff0
 * Signature: undefined FUN_005f9ff0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_005f9ff0(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  if (param_2[1] != 0) {
    *param_3 = param_2[1];
    param_2[1] = 0;
    return *param_2;
  }
  return 0;
}


