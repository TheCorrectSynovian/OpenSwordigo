/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006208b4
 * Function: FUN_006208b4
 * Signature: undefined FUN_006208b4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined4 * FUN_006208b4(long *param_1,undefined1 param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  
  if (param_3 < param_4) {
    while (cVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,*param_3), cVar1 != '\0') {
      param_3 = param_3 + 1;
      if (param_4 <= param_3) {
        return param_3;
      }
    }
  }
  return param_3;
}


