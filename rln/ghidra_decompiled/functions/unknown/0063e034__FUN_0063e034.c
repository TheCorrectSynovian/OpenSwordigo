/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0063e034
 * Function: FUN_0063e034
 * Signature: undefined FUN_0063e034(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


wint_t FUN_0063e034(long param_1,wint_t param_2)

{
  wint_t wVar1;
  
  if (param_2 == 0xffffffff) {
                    /* try { // try from 0063e070 to 0073e123 has its CatchHandler @ 0063e070
                       catch(type#1 @ 00000000) { ... } // from try @ 0063e070 with catch @ 0063e070
                       catch(type#1 @ 00000000) { ... } // from try @ 0063e130 with catch @ 0063e070
                       catch(type#1 @ 00000000) { ... } // from try @ 0063e214 with catch @ 0063e070
                        */
    wVar1 = 0xffffffff;
    if (*(wint_t *)(param_1 + 0x48) != 0xffffffff) {
      wVar1 = ungetwc(*(wint_t *)(param_1 + 0x48),*(__FILE **)(param_1 + 0x40));
      *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
      return wVar1;
    }
  }
  else {
    wVar1 = ungetwc(param_2,*(__FILE **)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  return wVar1;
}


