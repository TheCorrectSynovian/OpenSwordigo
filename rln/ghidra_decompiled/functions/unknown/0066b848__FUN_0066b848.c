/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b848
 * Function: FUN_0066b848
 * Signature: undefined FUN_0066b848(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_0066b848(long *param_1,undefined8 *param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  wchar_t *__s1;
  ulong __n;
  wchar_t *__s2;
  
  __s2 = (wchar_t *)*param_2;
  uVar3 = *(ulong *)(*param_1 + -0x18);
  __n = *(ulong *)(__s2 + -6);
  if (__n <= uVar3) {
    uVar3 = uVar3 - __n;
                    /* catch() { ... } // from try @ 0066b870 with catch @ 0066b88c */
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
                    /* catch() { ... } // from try @ 0066b8c4 with catch @ 0066b890 */
    __s1 = (wchar_t *)(*param_1 + param_3 * 4);
    do {
      iVar2 = wmemcmp(__s1,__s2,__n);
      if (iVar2 == 0) {
                    /* try { // try from 0066b8c0 to 0076b8c3 has its CatchHandler @ 0066b8d4 */
                    /* try { // try from 0066b8c4 to 0076b8d7 has its CatchHandler @ 0066b890 */
        return param_3;
      }
      bVar1 = param_3 != 0;
      param_3 = param_3 - 1;
      __s1 = __s1 + -1;
    } while (bVar1);
  }
                    /* try { // try from 0066b870 to 0076b873 has its CatchHandler @ 0066b88c */
                    /* try { // try from 0066b874 to 0076b88f has its CatchHandler @ 0066b840 */
  return 0xffffffffffffffff;
}


