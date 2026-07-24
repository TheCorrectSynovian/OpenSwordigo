/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066bd7c
 * Function: FUN_0066bd7c
 * Signature: undefined FUN_0066bd7c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066bd7c(long *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  wchar_t *pwVar2;
  long lVar3;
  wchar_t *__s;
  size_t __n;
  
  lVar1 = *param_1;
  __s = (wchar_t *)*param_2;
  lVar3 = param_3 << 2;
  __n = *(size_t *)(__s + -6);
  if (param_3 < *(ulong *)(lVar1 + -0x18)) {
    do {
      pwVar2 = (wchar_t *)(lVar1 + lVar3);
      lVar3 = lVar3 + 4;
      pwVar2 = wmemchr(__s,*pwVar2,__n);
      if (pwVar2 == (wchar_t *)0x0) {
        return param_3;
      }
      lVar1 = *param_1;
      param_3 = param_3 + 1;
    } while (param_3 < *(ulong *)(lVar1 + -0x18));
  }
  return 0xffffffffffffffff;
}


