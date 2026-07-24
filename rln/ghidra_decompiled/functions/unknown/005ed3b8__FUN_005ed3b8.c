/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ed3b8
 * Function: FUN_005ed3b8
 * Signature: undefined FUN_005ed3b8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005ed3b8(undefined8 param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_005eed74(param_1,0,0,(long)(param_2 * 0x10 + 0x28));
  FUN_005ee48c(param_1,lVar1,6);
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined1 *)(lVar1 + 10) = 1;
  *(char *)(lVar1 + 0xb) = (char)param_2;
  return lVar1;
}


