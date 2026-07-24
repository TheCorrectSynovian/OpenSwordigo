/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00647fbc
 * Function: FUN_00647fbc
 * Signature: undefined FUN_00647fbc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_00647fbc(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (-1 < param_3)) {
    FUN_0066c650(param_1 + 0x48,0,*(undefined8 *)(*(long *)(param_1 + 0x48) + -0x18),0);
    FUN_00647ea4(param_1,param_2,param_3,0);
  }
  return param_1;
}


