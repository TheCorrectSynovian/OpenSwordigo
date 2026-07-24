/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00578f1c
 * Function: Java_com_touchfoo_swordigo_Native_applicationDidBecomeInactive
 * Signature: undefined Java_com_touchfoo_swordigo_Native_applicationDidBecomeInactive(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_applicationDidBecomeInactive(void)

{
  AudioSystem *this;
  
  DAT_007e9c7a = 1;
  if (DAT_007e9c20 != (long *)0x0) {
    (**(code **)(*DAT_007e9c20 + 0x40))(DAT_007e9c20,1);
  }
  this = (AudioSystem *)Caver::AudioSystem::sharedSystem();
  Caver::AudioSystem::AudioInterruptionDidBegin(this);
  return;
}


