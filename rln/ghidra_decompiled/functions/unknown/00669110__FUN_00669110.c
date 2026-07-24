/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00669110
 * Function: FUN_00669110
 * Signature: undefined FUN_00669110(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00669110(long *param_1,long param_2,undefined8 param_3,undefined1 *param_4,size_t param_5
                   )

{
  FUN_00668cb8();
  if (param_5 != 0) {
    if (param_5 == 1) {
      *(undefined1 *)(*param_1 + param_2) = *param_4;
      return param_1;
    }
    memcpy((void *)(*param_1 + param_2),param_4,param_5);
  }
  return param_1;
}


