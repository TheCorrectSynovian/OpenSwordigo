/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c9bc
 * Function: FUN_0066c9bc
 * Signature: undefined FUN_0066c9bc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0066c9bc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_3 - param_2 >> 2;
  if (lVar1 == 0) {
    return param_2;
  }
  lVar2 = *param_1;
  FUN_0066c650(param_1,param_2 - lVar2 >> 2,lVar1,0);
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + -8) = 0xffffffff;
  return lVar1 + (param_2 - lVar2);
}


