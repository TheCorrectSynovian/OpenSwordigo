/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066bc04
 * Function: FUN_0066bc04
 * Signature: undefined FUN_0066bc04(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066bc04(long *param_1,wchar_t *param_2,ulong param_3,size_t param_4)

{
  wchar_t *pwVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar2 = *param_1;
  if ((param_4 == 0) || (*(long *)(lVar2 + -0x18) == 0)) {
LAB_0066bc28:
    param_3 = 0xffffffffffffffff;
  }
  else {
    uVar3 = *(long *)(lVar2 + -0x18) - 1;
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
    lVar4 = param_3 << 2;
    while( true ) {
      pwVar1 = (wchar_t *)(lVar2 + lVar4);
      lVar4 = lVar4 + -4;
      pwVar1 = wmemchr(param_2,*pwVar1,param_4);
      if (pwVar1 != (wchar_t *)0x0) break;
      if (param_3 == 0) goto LAB_0066bc28;
      lVar2 = *param_1;
      param_3 = param_3 - 1;
    }
  }
  return param_3;
}


