/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064690c
 * Function: FUN_0064690c
 * Signature: undefined FUN_0064690c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064690c(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  FUN_0066918c(param_1 + 0x58,*param_2,*(undefined8 *)(*param_2 + -0x18));
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x50) & 3) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x58) + -0x18);
  }
  FUN_00645b8c(param_1 + 0x10,*(long *)(param_1 + 0x58),0,uVar1);
  return;
}


