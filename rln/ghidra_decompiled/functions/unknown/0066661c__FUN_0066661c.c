/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066661c
 * Function: FUN_0066661c
 * Signature: undefined FUN_0066661c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066661c(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(long *)(*param_1 + -0x18) - param_2;
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  return uVar1;
}


