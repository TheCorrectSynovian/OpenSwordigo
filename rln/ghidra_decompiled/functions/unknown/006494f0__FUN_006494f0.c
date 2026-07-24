/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006494f0
 * Function: FUN_006494f0
 * Signature: undefined FUN_006494f0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006494f0(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  FUN_0066cb34(param_1 + 0x50,*param_2,*(undefined8 *)(*param_2 + -0x18));
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x48) & 3) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x50) + -0x18);
  }
  FUN_00647ea4(param_1 + 8,*(long *)(param_1 + 0x50),0,uVar1);
  return;
}


