/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e8308
 * Function: Caver::PurchaseViewController::PurchaseViewController
 * Signature: undefined __thiscall PurchaseViewController(PurchaseViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseViewController::PurchaseViewController() */

void __thiscall Caver::PurchaseViewController::PurchaseViewController(PurchaseViewController *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar2 = PTR_vtable_007e7250;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  puVar1 = PTR_DAT_007e5de8;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined **)(this + 0x60) = puVar1 + 0x18;
  this[0x78] = (PurchaseViewController)0x0;
  return;
}


