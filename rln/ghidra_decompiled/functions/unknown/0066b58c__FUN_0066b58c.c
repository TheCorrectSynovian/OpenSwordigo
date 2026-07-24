/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066b58c
 * Function: FUN_0066b58c
 * Signature: undefined FUN_0066b58c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_0066b58c(long *param_1,ulong param_2)

{
                    /* catch() { ... } // from try @ 0066b550 with catch @ 0066b594 */
  if (param_2 < *(ulong *)(*param_1 + -0x18)) {
    return *param_1 + param_2 * 4;
  }
                    /* try { // try from 0066b5b0 to 0076b5cb has its CatchHandler @ 0066b5b0
                       catch() { ... } // from try @ 0066b5b0 with catch @ 0066b5b0
                       catch() { ... } // from try @ 0066b5d4 with catch @ 0066b5b0 */
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)");
}


