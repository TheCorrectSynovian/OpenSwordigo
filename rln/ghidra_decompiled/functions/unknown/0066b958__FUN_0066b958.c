/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b958
 * Function: FUN_0066b958
 * Signature: undefined FUN_0066b958(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066b958(long *param_1,wchar_t *param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  size_t __n;
  ulong uVar3;
  wchar_t *__s1;
  
  __n = wcslen(param_2);
  uVar3 = *(ulong *)(*param_1 + -0x18);
  if (__n <= uVar3) {
    uVar3 = uVar3 - __n;
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    __s1 = (wchar_t *)(*param_1 + uVar3 * 4);
    do {
      iVar2 = wmemcmp(__s1,param_2,__n);
      if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 0066b9a0 with catch @ 0066b9e0 */
        return uVar3;
      }
      bVar1 = uVar3 != 0;
      uVar3 = uVar3 - 1;
      __s1 = __s1 + -1;
    } while (bVar1);
  }
                    /* try { // try from 0066b9a0 to 0076b9a3 has its CatchHandler @ 0066b9e0 */
                    /* try { // try from 0066b9a4 to 0076b9f3 has its CatchHandler @ 0066b950 */
  return 0xffffffffffffffff;
}


