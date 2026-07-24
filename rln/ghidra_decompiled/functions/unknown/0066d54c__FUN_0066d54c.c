/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066d54c
 * Function: FUN_0066d54c
 * Signature: undefined FUN_0066d54c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066d54c(long *param_1,long param_2,long param_3,ulong param_4,wchar_t param_5)

{
  long lVar1;
  
  lVar1 = param_2 - *param_1;
  if ((ulong)((0xffffffffffffffe - *(long *)(*param_1 + -0x18)) + (param_3 - param_2 >> 2)) <
      param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_0066554c("basic_string::_M_replace_aux",lVar1 >> 2);
  }
  FUN_0066c650();
  if (param_4 != 0) {
    if (param_4 == 1) {
      *(wchar_t *)(*param_1 + lVar1) = param_5;
      return param_1;
    }
    wmemset((wchar_t *)(*param_1 + lVar1),param_5,param_4);
  }
  return param_1;
}


