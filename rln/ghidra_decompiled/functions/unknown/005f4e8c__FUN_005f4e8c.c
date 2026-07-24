/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005f4e8c
 * Function: FUN_005f4e8c
 * Signature: undefined FUN_005f4e8c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005f4e8c(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_005f40c4(param_1,param_3);
  if (*(int *)(lVar1 + 8) == 0) {
    lVar1 = 0;
    *(byte *)(param_1 + 10) = (byte)(1 << (ulong)(param_2 & 0x1f)) | *(byte *)(param_1 + 10);
  }
  return lVar1;
}


