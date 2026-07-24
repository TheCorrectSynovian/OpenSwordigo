/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066bb68
 * Function: FUN_0066bb68
 * Signature: undefined FUN_0066bb68(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066bb68(long *param_1,undefined8 *param_2,ulong param_3)

{
  wchar_t *pwVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  wchar_t *__s;
  size_t __n;
  
  __s = (wchar_t *)*param_2;
  lVar2 = *param_1;
  __n = *(size_t *)(__s + -6);
  if ((__n != 0) && (*(long *)(lVar2 + -0x18) != 0)) {
    uVar3 = *(long *)(lVar2 + -0x18) - 1;
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
    lVar4 = param_3 << 2;
    while( true ) {
      pwVar1 = (wchar_t *)(lVar2 + lVar4);
      lVar4 = lVar4 + -4;
      pwVar1 = wmemchr(__s,*pwVar1,__n);
      if (pwVar1 != (wchar_t *)0x0) {
        return param_3;
      }
      param_3 = param_3 - 1;
      if (param_3 == 0xffffffffffffffff) break;
      lVar2 = *param_1;
    }
  }
  return 0xffffffffffffffff;
}


