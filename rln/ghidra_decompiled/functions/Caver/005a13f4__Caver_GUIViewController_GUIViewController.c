/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a13f4
 * Function: Caver::GUIViewController::GUIViewController
 * Signature: undefined __thiscall GUIViewController(GUIViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIViewController::GUIViewController() */

void __thiscall Caver::GUIViewController::GUIViewController(GUIViewController *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e7040;
                    /* catch() { ... } // from try @ 005a146c with catch @ 005a13fc
                       catch() { ... } // from try @ 005a1510 with catch @ 005a13fc */
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x30) = 0;
  return;
}


