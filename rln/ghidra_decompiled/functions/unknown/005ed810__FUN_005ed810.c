/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ed810
 * Function: FUN_005ed810
 * Signature: undefined FUN_005ed810(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_005ed810(long param_1,int param_2,int param_3)

{
  long lVar1;
  int *piVar2;
  
  if (0 < *(int *)(param_1 + 0x5c)) {
    lVar1 = 0;
                    /* catch() { ... } // from try @ 005ed9f8 with catch @ 005ed824
                       catch() { ... } // from try @ 005edbc8 with catch @ 005ed824 */
    piVar2 = (int *)(*(long *)(param_1 + 0x30) + 0xc);
    do {
      if (param_3 < piVar2[-1]) {
        return 0;
      }
      if ((param_3 < *piVar2) && (param_2 = param_2 + -1, param_2 == 0)) {
                    /* try { // try from 005ed868 to 006ed88f has its CatchHandler @ 005eda54 */
        return *(long *)(piVar2 + -3) + 0x18;
      }
      lVar1 = lVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (lVar1 < *(int *)(param_1 + 0x5c));
  }
  return 0;
}


