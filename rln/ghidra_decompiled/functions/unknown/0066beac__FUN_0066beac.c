/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066beac
 * Function: FUN_0066beac
 * Signature: undefined FUN_0066beac(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066beac(long *param_1,wchar_t *param_2,ulong param_3)

{
  size_t __n;
  long lVar1;
  wchar_t *pwVar2;
  long lVar3;
  
                    /* try { // try from 0066beb0 to 0076bee3 has its CatchHandler @ 0066be88 */
  lVar3 = param_3 << 2;
  __n = wcslen(param_2);
                    /* catch() { ... } // from try @ 0066bea8 with catch @ 0066bed8 */
  lVar1 = *param_1;
                    /* try { // try from 0066bee4 to 0076bee7 has its CatchHandler @ 0066bee8 */
                    /* catch() { ... } // from try @ 0066bee4 with catch @ 0066bee8 */
  if (param_3 < *(ulong *)(lVar1 + -0x18)) {
    do {
      pwVar2 = (wchar_t *)(lVar1 + lVar3);
      lVar3 = lVar3 + 4;
      pwVar2 = wmemchr(param_2,*pwVar2,__n);
      if (pwVar2 == (wchar_t *)0x0) {
        return param_3;
      }
                    /* try { // try from 0066bef0 to 0076befb has its CatchHandler @ 0066be88 */
      lVar1 = *param_1;
      param_3 = param_3 + 1;
                    /* catch() { ... } // from try @ 0066beec with catch @ 0066bef8 */
    } while (param_3 < *(ulong *)(lVar1 + -0x18));
  }
  return 0xffffffffffffffff;
}


