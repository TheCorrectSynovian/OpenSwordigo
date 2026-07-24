/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004edbd4
 * Function: Caver::StoreProductView::~StoreProductView
 * Signature: undefined __thiscall ~StoreProductView(StoreProductView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreProductView::~StoreProductView() */

void __thiscall Caver::StoreProductView::~StoreProductView(StoreProductView *this)

{
  ~StoreProductView(this);
                    /* try { // try from 004edbec to 005edbef has its CatchHandler @ 004edd00 */
  operator_delete(this);
  return;
}


