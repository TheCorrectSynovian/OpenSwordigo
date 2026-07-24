/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00512784
 * Function: Caver::InventoryView::~InventoryView
 * Signature: undefined __thiscall ~InventoryView(InventoryView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryView::~InventoryView() */

void __thiscall Caver::InventoryView::~InventoryView(InventoryView *this)

{
  ~InventoryView(this);
  operator_delete(this);
  return;
}


