/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00647c2c
 * Function: FUN_00647c2c
 * Signature: undefined FUN_00647c2c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00647c2c(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  FUN_0066918c(param_1 + 0x60,*param_2,*(undefined8 *)(*param_2 + -0x18));
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x58) & 3) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x60) + -0x18);
  }
  FUN_00645b8c(param_1 + 0x18,*(long *)(param_1 + 0x60),0,uVar1);
  return;
}


