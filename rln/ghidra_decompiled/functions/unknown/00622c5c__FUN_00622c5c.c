/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00622c5c
 * Function: FUN_00622c5c
 * Signature: undefined FUN_00622c5c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00622c5c(long param_1)

{
  undefined1 auStack_8 [8];
  
  *(undefined8 *)(param_1 + 8) = 6;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x1002;
  FUN_0063db28(auStack_8);
  FUN_0063c028(param_1 + 0xd0,auStack_8);
  FUN_0063c0c8(auStack_8);
  return;
}


