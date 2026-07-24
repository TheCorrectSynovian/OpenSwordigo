/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004700e4
 * Function: Caver::PauseViewController::PauseViewController
 * Signature: undefined __thiscall PauseViewController(PauseViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PauseViewController::PauseViewController() */

void __thiscall Caver::PauseViewController::PauseViewController(PauseViewController *this)

{
  undefined *puVar1;
  
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e6378;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x48) = puVar1 + 0x80;
  return;
}


