/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006677fc
 * Function: FUN_006677fc
 * Signature: undefined FUN_006677fc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_006677fc(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  if (sVar1 != 0) {
    FUN_00667254(param_1,param_2,sVar1);
  }
  return param_1;
}


