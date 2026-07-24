/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00631ed4
 * Function: FUN_00631ed4
 * Signature: undefined FUN_00631ed4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00631ed4(void)

{
  uint uVar1;
  long in_x3;
  
  uVar1 = *(uint *)(in_x3 + 0x18);
  *(uint *)(in_x3 + 0x18) = uVar1 & 0xffffbfb5 | 0x208;
  FUN_00631c5c();
                    /* catch() { ... } // from try @ 006320f0 with catch @ 00631f0c
                       catch() { ... } // from try @ 00632274 with catch @ 00631f0c */
  *(uint *)(in_x3 + 0x18) = uVar1;
  return;
}


