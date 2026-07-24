/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab934
 * Function: Caver::FWMouse::AddListener
 * Signature: undefined __thiscall AddListener(FWMouse * this, IFWMouseListener * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWMouse::AddListener(Caver::IFWMouseListener*) */

void __thiscall Caver::FWMouse::AddListener(FWMouse *this,IFWMouseListener *param_1)

{
  void *pvVar1;
  
                    /* catch() { ... } // from try @ 005ab810 with catch @ 005ab94c */
  pvVar1 = operator_new(0x18);
  *(IFWMouseListener **)((long)pvVar1 + 0x10) = param_1;
  FUN_0062a9ac(pvVar1,this);
  return;
}


