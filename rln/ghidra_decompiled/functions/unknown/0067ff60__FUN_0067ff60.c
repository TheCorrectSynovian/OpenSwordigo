/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0067ff60
 * Function: FUN_0067ff60
 * Signature: undefined FUN_0067ff60(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0067ff60(long param_1,long param_2)

{
  undefined8 *__dest;
  undefined8 *__src;
  long lVar1;
  undefined1 auStack_8 [8];
  
  if ((((*(ulong *)(param_2 + 0x340) >> 0x3e & 1) == 0) || (*(char *)(param_2 + 0x377) == '\0')) &&
     (*(long *)(param_2 + 0xf8) == 0)) {
    FUN_0067fecc(param_2,*(undefined8 *)(param_2 + 0x310),auStack_8);
  }
  lVar1 = 0;
  while( true ) {
    __dest = *(undefined8 **)(param_1 + lVar1 * 8);
    __src = *(undefined8 **)(param_2 + lVar1 * 8);
    if (*(char *)(param_1 + lVar1 + 0x358) != '\0') break;
                    /* catch() { ... } // from try @ 0067fe04 with catch @ 0067ffc0 */
                    /* catch() { ... } // from try @ 0067fcf4 with catch @ 0067ffc4 */
                    /* catch() { ... } // from try @ 0067fd20 with catch @ 0067ffc8 */
                    /* catch() { ... } // from try @ 0067fef0 with catch @ 0067ffcc */
                    /* catch() { ... } // from try @ 0067fe74 with catch @ 0067ffd0 */
    if ((*(char *)(param_2 + lVar1 + 0x358) == '\0') || (__dest == (undefined8 *)0x0)) {
                    /* try { // try from 0067fff4 to 00780057 has its CatchHandler @ 00680060 */
                    /* catch() { ... } // from try @ 0067fdbc with catch @ 0067fffc */
      if ((__dest != (undefined8 *)0x0 && __src != (undefined8 *)0x0) && (__src != __dest)) {
                    /* catch() { ... } // from try @ 0067fc8c with catch @ 0068000c */
        memcpy(__dest,__src,(ulong)(byte)(&DAT_007fe360)[lVar1]);
      }
    }
    else {
      if ((&DAT_007fe360)[lVar1] != '\b') break;
      *__dest = __src;
    }
    lVar1 = lVar1 + 1;
    if (lVar1 == 0x61) {
      if ((((*(ulong *)(param_1 + 0x340) >> 0x3e & 1) == 0) ||
          (lVar1 = 0, *(char *)(param_1 + 0x377) == '\0')) &&
         (lVar1 = 0, *(long *)(param_1 + 0xf8) == 0)) {
        lVar1 = FUN_0067ff08(param_2,0x1f);
                    /* try { // try from 00680058 to 00780063 has its CatchHandler @ 0067fb9c */
        lVar1 = (lVar1 - *(long *)(param_1 + 0x310)) + *(long *)(param_2 + 0x350);
      }
                    /* catch() { ... } // from try @ 0067fff4 with catch @ 00680060 */
      return lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0067ff48 with catch @ 0067ffbc */
  abort();
}


