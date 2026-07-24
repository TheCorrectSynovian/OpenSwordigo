/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ed6c8
 * Function: FUN_005ed6c8
 * Signature: undefined FUN_005ed6c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005ed6c8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_005eed74(param_1,0,0,0x78);
  FUN_005ee48c(param_1,lVar1,9);
  memset((void *)(lVar1 + 0x10),0,0x58);
  *(undefined4 *)(lVar1 + 0x70) = 0;
  return lVar1;
}


