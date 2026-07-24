/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d918
 * Function: FUN_0066d918
 * Signature: undefined FUN_0066d918(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


undefined8 FUN_0066d918(undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  if (param_3 <= *(ulong *)(*param_2 + -0x18)) {
    FUN_0066d7f4(param_1,param_2,param_3,param_4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
               param_3,*(ulong *)(*param_2 + -0x18));
}


