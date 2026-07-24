/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00647f50
 * Function: FUN_00647f50
 * Signature: undefined FUN_00647f50(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00647f50(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x40) = param_2;
  uVar1 = 0;
  if ((param_2 & 3) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x48) + -0x18);
  }
  FUN_00647ea4(param_1,*(long *)(param_1 + 0x48),0,uVar1);
  return;
}


