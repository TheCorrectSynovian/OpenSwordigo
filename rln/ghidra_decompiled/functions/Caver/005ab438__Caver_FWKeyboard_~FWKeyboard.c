/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab438
 * Function: Caver::FWKeyboard::~FWKeyboard
 * Signature: undefined __thiscall ~FWKeyboard(FWKeyboard * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWKeyboard::~FWKeyboard() */

void __thiscall Caver::FWKeyboard::~FWKeyboard(FWKeyboard *this)

{
  FWKeyboard *pFVar1;
  FWKeyboard *pFVar2;
  
  pFVar1 = *(FWKeyboard **)this;
  while (pFVar1 != this) {
    pFVar2 = *(FWKeyboard **)pFVar1;
    operator_delete(pFVar1);
                    /* try { // try from 005ab464 to 006ab533 has its CatchHandler @ 005ab174 */
    pFVar1 = pFVar2;
  }
  return;
}


