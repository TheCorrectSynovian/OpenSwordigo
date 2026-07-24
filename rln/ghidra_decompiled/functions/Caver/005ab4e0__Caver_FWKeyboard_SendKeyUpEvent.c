/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab4e0
 * Function: Caver::FWKeyboard::SendKeyUpEvent
 * Signature: undefined __thiscall SendKeyUpEvent(FWKeyboard * this, uint param_1, uint param_2, double param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWKeyboard::SendKeyUpEvent(unsigned int, unsigned int, double) */

void __thiscall
Caver::FWKeyboard::SendKeyUpEvent(FWKeyboard *this,uint param_1,uint param_2,double param_3)

{
  FWKeyboard *pFVar1;
  
  for (pFVar1 = *(FWKeyboard **)this; this != pFVar1; pFVar1 = *(FWKeyboard **)pFVar1) {
    (**(code **)(**(long **)(pFVar1 + 0x10) + 8))(param_3,*(long **)(pFVar1 + 0x10),param_1,param_2)
    ;
                    /* try { // try from 005ab534 to 006ab53f has its CatchHandler @ 005aba3c */
  }
                    /* try { // try from 005ab540 to 006ab5e7 has its CatchHandler @ 005ab174 */
  return;
}


