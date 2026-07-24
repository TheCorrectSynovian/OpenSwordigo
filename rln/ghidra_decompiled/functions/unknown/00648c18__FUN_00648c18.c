/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00648c18
 * Function: FUN_00648c18
 * Signature: undefined FUN_00648c18(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00648c18(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  FUN_0066cb34(param_1 + 0x58,*param_2,*(undefined8 *)(*param_2 + -0x18));
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x50) & 3) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x58) + -0x18);
  }
  FUN_00647ea4(param_1 + 0x10,*(long *)(param_1 + 0x58),0,uVar1);
  return;
}


