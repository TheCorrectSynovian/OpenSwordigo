/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006541c0
 * Function: FUN_006541c0
 * Signature: undefined FUN_006541c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006541c0(void)

{
  uint uVar1;
  long in_x3;
  
  uVar1 = *(uint *)(in_x3 + 0x18);
  *(uint *)(in_x3 + 0x18) = uVar1 & 0xffffbfb5 | 0x208;
  FUN_00653f40();
  *(uint *)(in_x3 + 0x18) = uVar1;
  return;
}


