/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00668468
 * Function: FUN_00668468
 * Signature: undefined FUN_00668468(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00668468(long *param_1,void *param_2,ulong param_3,size_t param_4)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *param_1;
                    /* try { // try from 0066847c to 00768483 has its CatchHandler @ 0066848c */
                    /* try { // try from 00668484 to 0076848f has its CatchHandler @ 00668364 */
  uVar3 = *(ulong *)(lVar2 + -0x18);
                    /* catch() { ... } // from try @ 0066847c with catch @ 0066848c */
                    /* catch() { ... } // from try @ 0066864c with catch @ 00668490
                       catch() { ... } // from try @ 006687b0 with catch @ 00668490 */
  while( true ) {
    if (uVar3 <= param_3) {
      return 0xffffffffffffffff;
    }
    pvVar1 = memchr(param_2,(uint)*(byte *)(lVar2 + param_3),param_4);
    if (pvVar1 == (void *)0x0) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}


