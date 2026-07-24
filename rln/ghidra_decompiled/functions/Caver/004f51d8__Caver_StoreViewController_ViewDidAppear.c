/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f51d8
 * Function: Caver::StoreViewController::ViewDidAppear
 * Signature: undefined __thiscall ViewDidAppear(StoreViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::ViewDidAppear() */

void __thiscall Caver::StoreViewController::ViewDidAppear(StoreViewController *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(this + 0x58) + 0xf0))();
  *(undefined4 *)(lVar1 + 0x1dc) = 0x3f6b851f;
  StoreView::AnimateIn();
  return;
}


