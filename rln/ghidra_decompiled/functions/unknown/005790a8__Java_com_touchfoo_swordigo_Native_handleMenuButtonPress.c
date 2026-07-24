/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005790a8
 * Function: Java_com_touchfoo_swordigo_Native_handleMenuButtonPress
 * Signature: undefined Java_com_touchfoo_swordigo_Native_handleMenuButtonPress(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_handleMenuButtonPress(void)

{
  FWKeyboard *pFVar1;
  
  pFVar1 = (FWKeyboard *)Caver::FWKeyboard::sharedKeyboard();
  Caver::FWKeyboard::SendKeyDownEvent(pFVar1,0x5d,0,0.0);
  pFVar1 = (FWKeyboard *)Caver::FWKeyboard::sharedKeyboard();
  Caver::FWKeyboard::SendKeyUpEvent(pFVar1,0x5d,0,0.0);
  return;
}


