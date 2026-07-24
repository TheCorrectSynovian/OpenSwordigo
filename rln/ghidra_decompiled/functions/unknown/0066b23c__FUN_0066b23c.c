/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b23c
 * Function: FUN_0066b23c
 * Signature: undefined FUN_0066b23c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066b23c(long *param_1,ulong param_2,undefined8 param_3)

{
                    /* try { // try from 0066b23c to 0076b25f has its CatchHandler @ 0066b260 */
  if (param_2 <= *(ulong *)(*param_1 + -0x18)) {
    return;
  }
                    /* catch() { ... } // from try @ 0066b23c with catch @ 0066b260 */
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("%s: __pos (which is %zu) > this->size() (which is %zu)",param_3,param_2);
}


