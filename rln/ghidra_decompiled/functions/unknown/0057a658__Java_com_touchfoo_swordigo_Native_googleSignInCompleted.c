/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057a658
 * Function: Java_com_touchfoo_swordigo_Native_googleSignInCompleted
 * Signature: undefined Java_com_touchfoo_swordigo_Native_googleSignInCompleted(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_googleSignInCompleted
               (undefined8 param_1,undefined8 param_2,char param_3)

{
  DAT_007e9c7c = param_3 != '\0';
  if (DAT_007e9c30 != (OnlineController_Android *)0x0) {
    Caver::OnlineController_Android::HandleGoogleSignInCompleted(DAT_007e9c30,param_3 != '\0');
    return;
  }
  return;
}


