/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004eb2b8
 * Function: Caver::PurchaseViewController::ViewDidAppear
 * Signature: undefined __thiscall ViewDidAppear(PurchaseViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseViewController::ViewDidAppear() */

void __thiscall Caver::PurchaseViewController::ViewDidAppear(PurchaseViewController *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(this + 0x50) + 0xf0))();
  *(undefined4 *)(lVar1 + 0x1dc) = 0x3f70a3d7;
  PurchaseView::AnimateIn();
  return;
}


