/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00645c54
 * Function: FUN_00645c54
 * Signature: undefined FUN_00645c54(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00645c54(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  FUN_0066918c(param_1 + 0x48,*param_2,*(undefined8 *)(*param_2 + -0x18));
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x40) & 3) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x48) + -0x18);
  }
  FUN_00645b8c(param_1,*(long *)(param_1 + 0x48),0,uVar1);
  return;
}


