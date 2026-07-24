/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064b9cc
 * Function: FUN_0064b9cc
 * Signature: undefined FUN_0064b9cc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064b9cc(long *param_1)

{
                    /* catch() { ... } // from try @ 0064b674 with catch @ 0064b9d8 */
  if ((ulong)param_1[2] < (ulong)param_1[3]) {
    param_1[2] = param_1[2] + 4;
    return;
  }
  (**(code **)(*param_1 + 0x50))();
  return;
}


