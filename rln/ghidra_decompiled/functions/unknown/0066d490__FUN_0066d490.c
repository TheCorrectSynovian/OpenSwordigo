/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d490
 * Function: FUN_0066d490
 * Signature: undefined FUN_0066d490(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066d490(long *param_1,ulong param_2,ulong param_3,wchar_t param_4)

{
  if (*(ulong *)(*param_1 + -0x18) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::insert",
                 param_2);
  }
  if (param_3 <= 0xffffffffffffffe - *(ulong *)(*param_1 + -0x18)) {
    FUN_0066c650(param_1,param_2,0,param_3);
    if (param_3 != 0) {
      if (param_3 == 1) {
        *(wchar_t *)(*param_1 + param_2 * 4) = param_4;
        return param_1;
      }
      wmemset((wchar_t *)(*param_1 + param_2 * 4),param_4,param_3);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066554c("basic_string::_M_replace_aux");
}


