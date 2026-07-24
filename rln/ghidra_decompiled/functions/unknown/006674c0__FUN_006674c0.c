/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006674c0
 * Function: FUN_006674c0
 * Signature: undefined FUN_006674c0(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long FUN_006674c0(long *param_1,ulong param_2)

{
                    /* try { // try from 006674d4 to 007674db has its CatchHandler @ 00668040 */
  if (param_2 < *(ulong *)(*param_1 + -0x18)) {
    return *param_1 + param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_006656b4("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)");
}


