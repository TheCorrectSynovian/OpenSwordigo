/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ee48c
 * Function: FUN_005ee48c
 * Signature: undefined FUN_005ee48c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ee48c(long param_1,undefined8 *param_2,undefined1 param_3)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  *param_2 = *(undefined8 *)(lVar2 + 0x28);
  bVar1 = *(byte *)(lVar2 + 0x20);
  *(undefined8 **)(lVar2 + 0x28) = param_2;
  *(undefined1 *)(param_2 + 1) = param_3;
  *(byte *)((long)param_2 + 9) = bVar1 & 3;
  return;
}


