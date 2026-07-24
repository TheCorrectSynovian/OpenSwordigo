/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab474
 * Function: Caver::FWKeyboard::SendKeyDownEvent
 * Signature: undefined __thiscall SendKeyDownEvent(FWKeyboard * this, uint param_1, uint param_2, double param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWKeyboard::SendKeyDownEvent(unsigned int, unsigned int, double) */

void __thiscall
Caver::FWKeyboard::SendKeyDownEvent(FWKeyboard *this,uint param_1,uint param_2,double param_3)

{
  FWKeyboard *pFVar1;
  
  for (pFVar1 = *(FWKeyboard **)this; this != pFVar1; pFVar1 = *(FWKeyboard **)pFVar1) {
    (**(code **)**(undefined8 **)(pFVar1 + 0x10))
              (param_3,*(undefined8 **)(pFVar1 + 0x10),param_1,param_2);
  }
  return;
}


