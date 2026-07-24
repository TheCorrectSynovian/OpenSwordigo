/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064342c
 * Function: FUN_0064342c
 * Signature: undefined FUN_0064342c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064342c(long *param_1,short param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18) & 0x4a;
  if ((uVar1 != 8) && (uVar1 != 0x40)) {
    FUN_00643214(param_1,(long)param_2);
    return;
  }
  FUN_00643214(param_1,param_2);
  return;
}


