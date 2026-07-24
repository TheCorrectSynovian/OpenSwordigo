/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00645c34
 * Function: FUN_00645c34
 * Signature: undefined FUN_00645c34(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00645c34(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 0x40) = param_2;
  uVar1 = 0;
  if ((param_2 & 3) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x48) + -0x18);
  }
  FUN_00645b8c(param_1,*(long *)(param_1 + 0x48),0,uVar1);
  return;
}


