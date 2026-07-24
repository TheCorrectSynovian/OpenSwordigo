/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab964
 * Function: Caver::FWMouse::RemoveListener
 * Signature: undefined __thiscall RemoveListener(FWMouse * this, IFWMouseListener * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWMouse::RemoveListener(Caver::IFWMouseListener*) */

void __thiscall Caver::FWMouse::RemoveListener(FWMouse *this,IFWMouseListener *param_1)

{
  FWMouse *pFVar1;
  FWMouse *pFVar2;
  
  pFVar2 = *(FWMouse **)this;
  while (pFVar1 = pFVar2, this != pFVar1) {
    pFVar2 = *(FWMouse **)pFVar1;
    if (*(IFWMouseListener **)(pFVar1 + 0x10) == param_1) {
                    /* catch() { ... } // from try @ 005ab758 with catch @ 005ab99c */
      FUN_0062a9c8(pFVar1);
      operator_delete(pFVar1);
    }
  }
  return;
}


