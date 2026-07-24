/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b7f8
 * Function: FUN_0066b7f8
 * Signature: undefined FUN_0066b7f8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0066b7f8(long *param_1,wchar_t param_2,ulong param_3)

{
  wchar_t *pwVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if ((param_3 < *(ulong *)(lVar2 + -0x18)) &&
     (pwVar1 = wmemchr((wchar_t *)(lVar2 + param_3 * 4),param_2,*(ulong *)(lVar2 + -0x18) - param_3)
     , pwVar1 != (wchar_t *)0x0)) {
                    /* catch() { ... } // from try @ 0066b81c with catch @ 0066b83c */
                    /* catch() { ... } // from try @ 0066b874 with catch @ 0066b840 */
    return (long)pwVar1 - lVar2 >> 2;
  }
                    /* try { // try from 0066b81c to 0076b81f has its CatchHandler @ 0066b83c */
                    /* try { // try from 0066b820 to 0076b83f has its CatchHandler @ 0066b7ec */
  return -1;
}


