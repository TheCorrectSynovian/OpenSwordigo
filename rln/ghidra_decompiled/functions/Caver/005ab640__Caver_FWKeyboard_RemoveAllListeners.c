/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab640
 * Function: Caver::FWKeyboard::RemoveAllListeners
 * Signature: undefined __thiscall RemoveAllListeners(FWKeyboard * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWKeyboard::RemoveAllListeners() */

void __thiscall Caver::FWKeyboard::RemoveAllListeners(FWKeyboard *this)

{
  FWKeyboard *pFVar1;
  FWKeyboard *pFVar2;
  
  pFVar1 = *(FWKeyboard **)this;
  while (pFVar1 != this) {
    pFVar2 = *(FWKeyboard **)pFVar1;
    operator_delete(pFVar1);
    pFVar1 = pFVar2;
  }
  *(FWKeyboard **)this = this;
  *(FWKeyboard **)(this + 8) = this;
  return;
}


