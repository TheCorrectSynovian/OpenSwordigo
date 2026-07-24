/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066c0b0
 * Function: FUN_0066c0b0
 * Signature: undefined FUN_0066c0b0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066c0b0(long *param_1,wchar_t *param_2,ulong param_3)

{
  size_t __n;
  long lVar1;
  wchar_t *pwVar2;
  ulong uVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 0066c114 with catch @ 0066c0b8 */
  __n = wcslen(param_2);
  lVar1 = *param_1;
  if (*(long *)(lVar1 + -0x18) != 0) {
    uVar3 = *(long *)(lVar1 + -0x18) - 1;
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
                    /* try { // try from 0066c110 to 0076c113 has its CatchHandler @ 0066c1ac */
    lVar4 = param_3 << 2;
                    /* try { // try from 0066c114 to 0076c21b has its CatchHandler @ 0066c0b8 */
    while( true ) {
      pwVar2 = (wchar_t *)(lVar1 + lVar4);
      lVar4 = lVar4 + -4;
      pwVar2 = wmemchr(param_2,*pwVar2,__n);
      if (pwVar2 == (wchar_t *)0x0) {
        return param_3;
      }
      param_3 = param_3 - 1;
      if (param_3 == 0xffffffffffffffff) break;
      lVar1 = *param_1;
    }
  }
  return 0xffffffffffffffff;
}


