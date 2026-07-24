/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b694
 * Function: FUN_0066b694
 * Signature: undefined FUN_0066b694(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066b694(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
                    /* catch() { ... } // from try @ 0066b678 with catch @ 0066b698 */
                    /* try { // try from 0066b69c to 0076b6ef has its CatchHandler @ 0066b69c
                       catch() { ... } // from try @ 0066b69c with catch @ 0066b69c
                       catch() { ... } // from try @ 0066b6f4 with catch @ 0066b69c */
  if (*(int *)(lVar2 + -8) < 0) {
    *(undefined4 *)(lVar2 + -8) = 0;
  }
  lVar1 = *param_2;
  if (*(int *)(lVar1 + -8) < 0) {
    *(undefined4 *)(lVar1 + -8) = 0;
  }
  *param_1 = lVar1;
  *param_2 = lVar2;
  return;
}


