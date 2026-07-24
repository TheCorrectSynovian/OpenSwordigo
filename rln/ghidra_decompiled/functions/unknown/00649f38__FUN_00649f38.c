/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00649f38
 * Function: FUN_00649f38
 * Signature: undefined FUN_00649f38(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00649f38(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  FUN_0066cb34(param_1 + 0x60,*param_2,*(undefined8 *)(*param_2 + -0x18));
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x58) & 3) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + -0x18);
  }
  FUN_00647ea4(param_1 + 0x18,*(long *)(param_1 + 0x60),0,uVar1);
  return;
}


