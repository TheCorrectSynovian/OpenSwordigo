/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0065c3d8
 * Function: FUN_0065c3d8
 * Signature: undefined FUN_0065c3d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0065c3d8(void)

{
  uint uVar1;
  long in_x5;
  undefined8 *in_x7;
  undefined8 local_8;
  
  uVar1 = *(uint *)(in_x5 + 0x18);
  *(uint *)(in_x5 + 0x18) = uVar1 & 0xffffffb5 | 8;
  FUN_0065babc();
  *(uint *)(in_x5 + 0x18) = uVar1;
  *in_x7 = local_8;
  return;
}


