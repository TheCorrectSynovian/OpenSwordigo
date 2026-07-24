/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00578ccc
 * Function: Java_com_touchfoo_swordigo_Native_updateApplication
 * Signature: undefined Java_com_touchfoo_swordigo_Native_updateApplication(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_updateApplication(void)

{
  if (DAT_007e9c20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00578ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_007e9c20 + 0x68))();
    return;
  }
  return;
}


