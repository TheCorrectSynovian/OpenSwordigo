/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004706e4
 * Function: Caver::PortalViewController::PortalViewController
 * Signature: undefined __thiscall PortalViewController(PortalViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalViewController::PortalViewController() */

void __thiscall Caver::PortalViewController::PortalViewController(PortalViewController *this)

{
  undefined *puVar1;
  
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e5808;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x50) = puVar1 + 0xd8;
  *(undefined **)(this + 0x48) = puVar1 + 0xb0;
  *(undefined **)(this + 0x60) = puVar1 + 0x108;
  *(undefined **)(this + 0x58) = puVar1 + 0xf0;
  return;
}


