/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668308
 * Function: FUN_00668308
 * Signature: undefined FUN_00668308(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00668308(long *param_1,char *param_2,ulong param_3)

{
  size_t __n;
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
                    /* catch() { ... } // from try @ 00668220 with catch @ 00668324
                       catch() { ... } // from try @ 00668294 with catch @ 00668324 */
  __n = strlen(param_2);
  lVar4 = *param_1;
                    /* catch() { ... } // from try @ 0066827c with catch @ 00668330 */
  lVar2 = *(long *)(lVar4 + -0x18);
  if ((__n != 0) && (lVar2 != 0)) {
                    /* try { // try from 00668358 to 00768363 has its CatchHandler @ 006681e0 */
    uVar3 = lVar2 - 1;
                    /* catch() { ... } // from try @ 00668350 with catch @ 00668360 */
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
    do {
      pvVar1 = memchr(param_2,(uint)*(byte *)(lVar4 + param_3),__n);
      if (pvVar1 != (void *)0x0) {
        return param_3;
      }
      param_3 = param_3 - 1;
    } while (param_3 != 0xffffffffffffffff);
    return 0xffffffffffffffff;
  }
                    /* try { // try from 00668350 to 00768357 has its CatchHandler @ 00668360 */
  return 0xffffffffffffffff;
}


