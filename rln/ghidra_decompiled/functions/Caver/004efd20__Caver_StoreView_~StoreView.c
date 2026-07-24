/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004efd20
 * Function: Caver::StoreView::~StoreView
 * Signature: undefined __thiscall ~StoreView(StoreView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreView::~StoreView() */

void __thiscall Caver::StoreView::~StoreView(StoreView *this)

{
  ~StoreView(this);
  operator_delete(this);
  return;
}


