/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab6f0
 * Function: Caver::FWMouse::~FWMouse
 * Signature: undefined __thiscall ~FWMouse(FWMouse * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWMouse::~FWMouse() */

void __thiscall Caver::FWMouse::~FWMouse(FWMouse *this)

{
  FWMouse *pFVar1;
  FWMouse *pFVar2;
  
  pFVar1 = *(FWMouse **)this;
  while (pFVar1 != this) {
    pFVar2 = *(FWMouse **)pFVar1;
    operator_delete(pFVar1);
    pFVar1 = pFVar2;
  }
  return;
}


