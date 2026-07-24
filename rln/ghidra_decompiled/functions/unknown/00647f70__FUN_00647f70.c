/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00647f70
 * Function: FUN_00647f70
 * Signature: undefined FUN_00647f70(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00647f70(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  FUN_0066cb34(param_1 + 0x48,*param_2,*(undefined8 *)(*param_2 + -0x18));
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x40) & 3) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x48) + -0x18);
  }
  FUN_00647ea4(param_1,*(long *)(param_1 + 0x48),0,uVar1);
  return;
}


