/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab5b0
 * Function: Caver::FWKeyboard::AddListener
 * Signature: undefined __thiscall AddListener(FWKeyboard * this, IFWKeyboardListener * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FWKeyboard::AddListener(Caver::IFWKeyboardListener*) */

void __thiscall Caver::FWKeyboard::AddListener(FWKeyboard *this,IFWKeyboardListener *param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x18);
  *(IFWKeyboardListener **)((long)pvVar1 + 0x10) = param_1;
  FUN_0062a9ac(pvVar1,this);
  return;
}


