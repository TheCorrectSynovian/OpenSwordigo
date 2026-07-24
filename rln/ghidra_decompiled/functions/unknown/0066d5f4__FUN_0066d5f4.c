/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d5f4
 * Function: FUN_0066d5f4
 * Signature: undefined FUN_0066d5f4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066d5f4(long *param_1,ulong param_2,ulong param_3,ulong param_4,wchar_t param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(*param_1 + -0x18);
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
                 param_2,uVar2);
  }
  uVar1 = uVar2 - param_2;
  if (param_3 < uVar2 - param_2) {
    uVar1 = param_3;
  }
  if (param_4 <= (0xffffffffffffffe - uVar2) + uVar1) {
    FUN_0066c650();
    if (param_4 != 0) {
      if (param_4 == 1) {
        *(wchar_t *)(*param_1 + param_2 * 4) = param_5;
        return param_1;
      }
      wmemset((wchar_t *)(*param_1 + param_2 * 4),param_5,param_4);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066554c("basic_string::_M_replace_aux");
}


