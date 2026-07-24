/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00681ab8
 * Function: FUN_00681ab8
 * Signature: undefined FUN_00681ab8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00681ab8(long param_1)

{
                    /* catch() { ... } // from try @ 00681788 with catch @ 00681ac0 */
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(1,param_1);
  }
  return;
}


