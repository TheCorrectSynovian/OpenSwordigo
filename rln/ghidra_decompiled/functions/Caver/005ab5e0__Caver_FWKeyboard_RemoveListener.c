/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab5e0
 * Function: Caver::FWKeyboard::RemoveListener
 * Signature: undefined __thiscall RemoveListener(FWKeyboard * this, IFWKeyboardListener * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWKeyboard::RemoveListener(Caver::IFWKeyboardListener*) */

void __thiscall Caver::FWKeyboard::RemoveListener(FWKeyboard *this,IFWKeyboardListener *param_1)

{
  FWKeyboard *pFVar1;
  FWKeyboard *pFVar2;
  
                    /* try { // try from 005ab5e8 to 006ab60f has its CatchHandler @ 005ab8fc */
  pFVar2 = *(FWKeyboard **)this;
  while (pFVar1 = pFVar2, this != pFVar1) {
    pFVar2 = *(FWKeyboard **)pFVar1;
                    /* try { // try from 005ab610 to 006ab69f has its CatchHandler @ 005ab174 */
    if (*(IFWKeyboardListener **)(pFVar1 + 0x10) == param_1) {
      FUN_0062a9c8(pFVar1);
      operator_delete(pFVar1);
    }
  }
  return;
}


