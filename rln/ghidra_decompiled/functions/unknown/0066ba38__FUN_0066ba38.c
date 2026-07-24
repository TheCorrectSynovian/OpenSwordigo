/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066ba38
 * Function: FUN_0066ba38
 * Signature: undefined FUN_0066ba38(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066ba38(long *param_1,wchar_t *param_2,ulong param_3,size_t param_4)

{
  long lVar1;
  wchar_t *pwVar2;
  long lVar3;
  
  if ((param_4 != 0) && (lVar1 = *param_1, param_3 < *(ulong *)(lVar1 + -0x18))) {
    lVar3 = param_3 << 2;
    do {
      pwVar2 = (wchar_t *)(lVar1 + lVar3);
      lVar3 = lVar3 + 4;
      pwVar2 = wmemchr(param_2,*pwVar2,param_4);
      if (pwVar2 != (wchar_t *)0x0) {
        return param_3;
      }
      lVar1 = *param_1;
      param_3 = param_3 + 1;
    } while (param_3 < *(ulong *)(lVar1 + -0x18));
  }
  return 0xffffffffffffffff;
}


