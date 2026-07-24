/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b5d8
 * Function: FUN_0066b5d8
 * Signature: undefined FUN_0066b5d8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066b5d8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + -8) < 0) {
                    /* catch() { ... } // from try @ 0066b634 with catch @ 0066b600 */
    *(undefined4 *)(lVar2 + -8) = 0;
  }
  lVar1 = *param_2;
                    /* catch() { ... } // from try @ 0066b5cc with catch @ 0066b5ec */
  if (*(int *)(lVar1 + -8) < 0) {
    *(undefined4 *)(lVar1 + -8) = 0;
  }
  *param_1 = lVar1;
  *param_2 = lVar2;
  return;
}


