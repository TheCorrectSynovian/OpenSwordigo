/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b6dc
 * Function: FUN_0066b6dc
 * Signature: undefined FUN_0066b6dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066b6dc(long *param_1,wchar_t *param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  wchar_t *__s1;
  ulong uVar3;
  ulong uVar4;
  
                    /* try { // try from 0066b6f0 to 0076b6f3 has its CatchHandler @ 0066b738 */
                    /* try { // try from 0066b6f4 to 0076b753 has its CatchHandler @ 0066b69c */
  uVar4 = *(ulong *)(*param_1 + -0x18);
  if (param_4 == 0) {
    if (uVar4 < param_3) {
      param_3 = 0xffffffffffffffff;
    }
    return param_3;
  }
  if ((param_4 <= uVar4) && (param_3 <= uVar4 - param_4)) {
                    /* try { // try from 0066b754 to 0076b76f has its CatchHandler @ 0066b754
                       catch() { ... } // from try @ 0066b754 with catch @ 0066b754
                       catch() { ... } // from try @ 0066b778 with catch @ 0066b754 */
    __s1 = (wchar_t *)(*param_1 + (param_3 + 1) * 4);
    uVar3 = param_3 + 1;
    do {
                    /* try { // try from 0066b778 to 0076b7a3 has its CatchHandler @ 0066b754 */
                    /* catch() { ... } // from try @ 0066b770 with catch @ 0066b790 */
                    /* catch() { ... } // from try @ 0066b7d8 with catch @ 0066b7a4 */
      if ((__s1[-1] == *param_2) && (iVar2 = wmemcmp(__s1,param_2 + 1,param_4 - 1), iVar2 == 0)) {
        return uVar3 - 1;
      }
                    /* try { // try from 0066b770 to 0076b777 has its CatchHandler @ 0066b790 */
      __s1 = __s1 + 1;
      bVar1 = uVar3 <= uVar4 - param_4;
      uVar3 = uVar3 + 1;
    } while (bVar1);
  }
                    /* catch() { ... } // from try @ 0066b6f0 with catch @ 0066b738 */
  return 0xffffffffffffffff;
}


