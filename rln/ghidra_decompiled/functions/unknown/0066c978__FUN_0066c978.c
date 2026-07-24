/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c978
 * Function: FUN_0066c978
 * Signature: undefined FUN_0066c978(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0066c978(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  FUN_0066c650(param_1,param_2 - lVar2 >> 2,1,0);
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + -8) = 0xffffffff;
  return lVar1 + (param_2 - lVar2);
}


