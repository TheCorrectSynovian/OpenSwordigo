/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063df98
 * Function: FUN_0063df98
 * Signature: undefined FUN_0063df98(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0063df98(long param_1,long param_2,long param_3)

{
  wint_t wVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = 0;
  if (param_3 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    do {
      wVar1 = getwc(*(__FILE **)(param_1 + 0x40));
      if (wVar1 == 0xffffffff) {
        uVar2 = 0xffffffff;
        if (lVar3 == 0) goto LAB_0063dfec;
        break;
      }
                    /* try { // try from 0063dfc0 to 0073dfd7 has its CatchHandler @ 0063d4b0 */
      *(wint_t *)(param_2 + lVar3 * 4) = wVar1;
                    /* catch() { ... } // from try @ 0063dc70 with catch @ 0063dfc4 */
      lVar3 = lVar3 + 1;
                    /* catch() { ... } // from try @ 0063d948 with catch @ 0063dfc8
                       catch() { ... } // from try @ 0063d960 with catch @ 0063dfc8
                       catch() { ... } // from try @ 0063db8c with catch @ 0063dfc8 */
    } while (param_3 != lVar3);
    uVar2 = *(undefined4 *)(param_2 + lVar3 * 4 + -4);
  }
LAB_0063dfec:
  *(undefined4 *)(param_1 + 0x48) = uVar2;
  return lVar3;
}


