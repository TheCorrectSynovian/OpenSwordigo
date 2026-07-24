/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ee46c
 * Function: FUN_005ee46c
 * Signature: undefined FUN_005ee46c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_005ee46c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) & 0xfb;
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(lVar1 + 0x40);
  *(long *)(lVar1 + 0x40) = param_2;
  return;
}


