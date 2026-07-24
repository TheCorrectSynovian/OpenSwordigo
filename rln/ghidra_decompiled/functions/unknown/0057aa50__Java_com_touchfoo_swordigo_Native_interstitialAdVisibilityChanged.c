/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057aa50
 * Function: Java_com_touchfoo_swordigo_Native_interstitialAdVisibilityChanged
 * Signature: undefined Java_com_touchfoo_swordigo_Native_interstitialAdVisibilityChanged(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_interstitialAdVisibilityChanged
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0057aa6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_007e9c20 + 0x40))(DAT_007e9c20,0);
    return;
  }
  if ((DAT_007e9c7a & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0057aa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_007e9c20 + 0x48))();
  return;
}


