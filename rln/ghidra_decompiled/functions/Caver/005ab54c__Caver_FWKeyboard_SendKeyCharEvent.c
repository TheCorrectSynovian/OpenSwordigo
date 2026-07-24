/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab54c
 * Function: Caver::FWKeyboard::SendKeyCharEvent
 * Signature: undefined __thiscall SendKeyCharEvent(FWKeyboard * this, uint param_1, double param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWKeyboard::SendKeyCharEvent(unsigned int, double) */

void __thiscall Caver::FWKeyboard::SendKeyCharEvent(FWKeyboard *this,uint param_1,double param_2)

{
  FWKeyboard *pFVar1;
  
  for (pFVar1 = *(FWKeyboard **)this; this != pFVar1; pFVar1 = *(FWKeyboard **)pFVar1) {
    (**(code **)(**(long **)(pFVar1 + 0x10) + 0x10))(param_2,*(long **)(pFVar1 + 0x10),param_1);
  }
  return;
}


