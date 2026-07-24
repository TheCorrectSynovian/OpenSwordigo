/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006422e4
 * Function: FUN_006422e4
 * Signature: undefined FUN_006422e4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006422e4(long *param_1,long *param_2)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00642558 with catch @ 006422ec
                       catch() { ... } // from try @ 006427d8 with catch @ 006422ec */
  lVar1 = *param_2;
  *param_1 = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  *(long *)((long)param_1 + lVar1) = param_2[1];
  FUN_006219c8((long)param_1 + lVar1,0);
  return;
}


