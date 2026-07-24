/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066e804
 * Function: FUN_0066e804
 * Signature: undefined FUN_0066e804(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0066e804(undefined8 param_1,wchar_t *param_2)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_2);
  if (sVar1 != 0) {
    FUN_0066e634(param_1,param_2,sVar1);
  }
  return param_1;
}


