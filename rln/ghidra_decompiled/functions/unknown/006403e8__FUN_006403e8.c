/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006403e8
 * Function: FUN_006403e8
 * Signature: undefined FUN_006403e8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006403e8(long *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  if (param_2 == 8) {
    *(uint *)((long)param_1 + lVar1 + 0x18) =
         *(uint *)((long)param_1 + lVar1 + 0x18) & 0xffffffb5 | 0x40;
    return;
  }
  if (param_2 != 10) {
                    /* catch() { ... } // from try @ 0063ff8c with catch @ 00640404 */
                    /* catch() { ... } // from try @ 0063ff84 with catch @ 00640408 */
    uVar2 = 8;
                    /* catch() { ... } // from try @ 0063ff10 with catch @ 0064040c */
                    /* catch() { ... } // from try @ 0063feb0 with catch @ 00640410 */
    if (param_2 != 0x10) {
      uVar2 = 0;
    }
    *(uint *)((long)param_1 + lVar1 + 0x18) =
         uVar2 | *(uint *)((long)param_1 + lVar1 + 0x18) & 0xffffffb5;
    return;
  }
  *(uint *)((long)param_1 + lVar1 + 0x18) = *(uint *)((long)param_1 + lVar1 + 0x18) & 0xffffffb5 | 2
  ;
  return;
}


