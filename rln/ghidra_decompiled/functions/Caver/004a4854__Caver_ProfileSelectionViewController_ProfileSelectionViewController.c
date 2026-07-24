/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a4854
 * Function: Caver::ProfileSelectionViewController::ProfileSelectionViewController
 * Signature: undefined __thiscall ProfileSelectionViewController(ProfileSelectionViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionViewController::ProfileSelectionViewController() */

void __thiscall
Caver::ProfileSelectionViewController::ProfileSelectionViewController
          (ProfileSelectionViewController *this)

{
  undefined *puVar1;
  
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e60f0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x48) = puVar1 + 0x88;
  *(undefined8 *)(this + 0x50) = 0;
  return;
}


