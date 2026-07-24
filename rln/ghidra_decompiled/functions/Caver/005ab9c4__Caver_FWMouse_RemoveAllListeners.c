/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab9c4
 * Function: Caver::FWMouse::RemoveAllListeners
 * Signature: undefined __thiscall RemoveAllListeners(FWMouse * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWMouse::RemoveAllListeners() */

void __thiscall Caver::FWMouse::RemoveAllListeners(FWMouse *this)

{
  FWMouse *pFVar1;
  FWMouse *pFVar2;
  
  pFVar1 = *(FWMouse **)this;
  while (pFVar1 != this) {
    pFVar2 = *(FWMouse **)pFVar1;
    operator_delete(pFVar1);
                    /* catch() { ... } // from try @ 005ab6a0 with catch @ 005ab9ec */
    pFVar1 = pFVar2;
  }
  *(FWMouse **)this = this;
  *(FWMouse **)(this + 8) = this;
  return;
}


