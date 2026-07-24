/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f04f0
 * Function: Caver::StoreViewController::StoreViewController
 * Signature: undefined __thiscall StoreViewController(StoreViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::StoreViewController() */

void __thiscall Caver::StoreViewController::StoreViewController(StoreViewController *this)

{
  undefined *puVar1;
  StoreViewController *pSVar2;
  
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e4b20;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x48) = puVar1 + 0x80;
  *(undefined8 *)(this + 0x50) = 0;
  pSVar2 = this + 0xa8;
  *(undefined8 *)pSVar2 = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  this[0x68] = (StoreViewController)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(StoreViewController **)(this + 0xb8) = pSVar2;
  *(StoreViewController **)(this + 0xc0) = pSVar2;
  *(undefined4 *)(this + 0xd0) = 0;
  return;
}


