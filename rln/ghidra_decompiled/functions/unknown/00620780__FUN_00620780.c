/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00620780
 * Function: FUN_00620780
 * Signature: undefined FUN_00620780(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


ulong FUN_00620780(long param_1,ulong param_2,ulong param_3,long param_4)

{
  int iVar1;
  wctype_t __desc;
  wctype_t *pwVar2;
  long lVar3;
  byte bVar4;
  byte *pbVar5;
  
                    /* try { // try from 006207a4 to 007207cb has its CatchHandler @ 006207e4 */
  if (param_2 < param_3) {
    lVar3 = 0;
                    /* try { // try from 006207cc to 007207d3 has its CatchHandler @ 006207f8 */
    do {
      bVar4 = 0;
      pwVar2 = (wctype_t *)(param_1 + 0x4b0);
      pbVar5 = (byte *)(param_1 + 0x49c);
      do {
        __desc = *pwVar2;
                    /* catch() { ... } // from try @ 006207a4 with catch @ 006207e4 */
        pwVar2 = pwVar2 + 1;
                    /* try { // try from 006207e8 to 007207ef has its CatchHandler @ 006207f4 */
        iVar1 = iswctype(*(wint_t *)(param_2 + lVar3 * 4),__desc);
                    /* try { // try from 006207f0 to 0072080b has its CatchHandler @ 00620764 */
                    /* catch() { ... } // from try @ 006207e8 with catch @ 006207f4 */
        if (iVar1 != 0) {
                    /* catch() { ... } // from try @ 006207cc with catch @ 006207f8 */
          bVar4 = *pbVar5 | bVar4;
        }
        pbVar5 = pbVar5 + 1;
      } while (pwVar2 != (wctype_t *)(param_1 + 0x530));
      *(byte *)(param_4 + lVar3) = bVar4;
                    /* try { // try from 0062080c to 0072095b has its CatchHandler @ 0062080c
                       catch() { ... } // from try @ 0062080c with catch @ 0062080c
                       catch() { ... } // from try @ 006218f8 with catch @ 0062080c
                       catch() { ... } // from try @ 00622f7c with catch @ 0062080c */
      lVar3 = lVar3 + 1;
    } while (lVar3 != (~param_2 + param_3 >> 2) + 1);
  }
  return param_3;
}


