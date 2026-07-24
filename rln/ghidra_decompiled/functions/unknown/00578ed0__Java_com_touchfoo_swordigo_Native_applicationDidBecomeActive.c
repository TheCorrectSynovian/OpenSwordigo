/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00578ed0
 * Function: Java_com_touchfoo_swordigo_Native_applicationDidBecomeActive
 * Signature: undefined Java_com_touchfoo_swordigo_Native_applicationDidBecomeActive(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_applicationDidBecomeActive(void)

{
  AudioSystem *this;
  
  DAT_007e9c7a = 0;
  this = (AudioSystem *)Caver::AudioSystem::sharedSystem();
  Caver::AudioSystem::AudioInterruptionDidEnd(this);
  if (DAT_007e9c50 != (StoreController_Android *)0x0) {
    Caver::StoreController_Android::ResetHasRestoredPurchases(DAT_007e9c50);
  }
  if (DAT_007e9c20 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00578f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_007e9c20 + 0x48))();
    return;
  }
  return;
}


