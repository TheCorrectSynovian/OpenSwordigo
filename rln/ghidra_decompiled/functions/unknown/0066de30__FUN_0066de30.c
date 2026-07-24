/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066de30
 * Function: FUN_0066de30
 * Signature: undefined FUN_0066de30(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066de30(long *param_1,long param_2,long param_3,wchar_t *param_4)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_4);
  FUN_0066da58(param_1,param_2 - *param_1 >> 2,param_3 - param_2 >> 2,param_4,sVar1);
  return;
}


