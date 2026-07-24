/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00579290
 * Function: Java_com_touchfoo_swordigo_Native_textInputDidFinish
 * Signature: undefined Java_com_touchfoo_swordigo_Native_textInputDidFinish(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_textInputDidFinish(void)

{
  if (DAT_007e9cb0 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005792a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_007e9cb0 + 8))();
    return;
  }
  return;
}


