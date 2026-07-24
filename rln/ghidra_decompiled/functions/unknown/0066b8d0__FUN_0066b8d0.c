/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b8d0
 * Function: FUN_0066b8d0
 * Signature: undefined FUN_0066b8d0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066b8d0(long *param_1,wchar_t *param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  wchar_t *__s1;
  
                    /* catch() { ... } // from try @ 0066b8c0 with catch @ 0066b8d4 */
                    /* catch() { ... } // from try @ 0066b90c with catch @ 0066b8d8 */
  uVar3 = *(ulong *)(*param_1 + -0x18);
  if (param_4 <= uVar3) {
    uVar3 = uVar3 - param_4;
                    /* try { // try from 0066b908 to 0076b90b has its CatchHandler @ 0066b928 */
                    /* try { // try from 0066b90c to 0076b92b has its CatchHandler @ 0066b8d8 */
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    __s1 = (wchar_t *)(*param_1 + uVar3 * 4);
    do {
                    /* catch() { ... } // from try @ 0066b908 with catch @ 0066b928 */
      iVar2 = wmemcmp(__s1,param_2,param_4);
      if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 0066b9a4 with catch @ 0066b950 */
        return uVar3;
      }
      bVar1 = uVar3 != 0;
      uVar3 = uVar3 - 1;
      __s1 = __s1 + -1;
    } while (bVar1);
  }
  return 0xffffffffffffffff;
}


