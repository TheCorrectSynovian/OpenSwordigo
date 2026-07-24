/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00651fc4
 * Function: FUN_00651fc4
 * Signature: undefined FUN_00651fc4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00651fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,long param_6,long param_7,int *param_8)

{
  long lVar1;
  
  lVar1 = FUN_00651bb0(param_6,param_4,param_2,param_3,param_7,param_7 + (long)*param_8 * 4);
  *param_8 = (int)(lVar1 - param_6 >> 2);
  return;
}


