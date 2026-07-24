/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066be14
 * Function: FUN_0066be14
 * Signature: undefined FUN_0066be14(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066be14(long *param_1,wchar_t *param_2,ulong param_3,size_t param_4)

{
  long lVar1;
  wchar_t *pwVar2;
  long lVar3;
  
  lVar1 = *param_1;
  lVar3 = param_3 << 2;
  if (param_3 < *(ulong *)(lVar1 + -0x18)) {
    do {
      pwVar2 = (wchar_t *)(lVar1 + lVar3);
      lVar3 = lVar3 + 4;
      pwVar2 = wmemchr(param_2,*pwVar2,param_4);
      if (pwVar2 == (wchar_t *)0x0) {
                    /* try { // try from 0066be88 to 0076bea7 has its CatchHandler @ 0066be88
                       catch() { ... } // from try @ 0066be88 with catch @ 0066be88
                       catch() { ... } // from try @ 0066beb0 with catch @ 0066be88
                       catch() { ... } // from try @ 0066bef0 with catch @ 0066be88 */
        return param_3;
      }
      lVar1 = *param_1;
      param_3 = param_3 + 1;
    } while (param_3 < *(ulong *)(lVar1 + -0x18));
  }
                    /* try { // try from 0066bea8 to 0076beaf has its CatchHandler @ 0066bed8 */
  return 0xffffffffffffffff;
}


