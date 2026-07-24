/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00579074
 * Function: Java_com_touchfoo_swordigo_Native_handleBackButtonPress
 * Signature: undefined Java_com_touchfoo_swordigo_Native_handleBackButtonPress(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_handleBackButtonPress(void)

{
  FWKeyboard *pFVar1;
  
  pFVar1 = (FWKeyboard *)Caver::FWKeyboard::sharedKeyboard();
  Caver::FWKeyboard::SendKeyDownEvent(pFVar1,0x21,0,0.0);
  pFVar1 = (FWKeyboard *)Caver::FWKeyboard::sharedKeyboard();
  Caver::FWKeyboard::SendKeyUpEvent(pFVar1,0x21,0,0.0);
  return;
}


