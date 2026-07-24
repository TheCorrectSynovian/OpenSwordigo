/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00511d48
 * Function: Caver::InventoryView::Update
 * Signature: undefined __thiscall Update(InventoryView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryView::Update(float) */

void __thiscall Caver::InventoryView::Update(InventoryView *this,float param_1)

{
  GUIView::Update((GUIView *)this,param_1);
  if (this[0x178] != (InventoryView)0x0) {
    this[0x178] = (InventoryView)0x0;
    ButtonPressed(this,*(GUIEvent **)(this + 0x168));
    return;
  }
  return;
}


