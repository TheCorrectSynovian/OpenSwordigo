/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00645ca0
 * Function: FUN_00645ca0
 * Signature: undefined FUN_00645ca0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00645ca0(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (-1 < param_3)) {
    FUN_00668cb8(param_1 + 0x48,0,*(undefined8 *)(*(long *)(param_1 + 0x48) + -0x18),0);
    FUN_00645b8c(param_1,param_2,param_3,0);
  }
  return param_1;
}


