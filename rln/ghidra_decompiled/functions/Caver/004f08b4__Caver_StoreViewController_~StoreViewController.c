/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f08b4
 * Function: Caver::StoreViewController::~StoreViewController
 * Signature: undefined __thiscall ~StoreViewController(StoreViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreViewController::~StoreViewController() */

void __thiscall Caver::StoreViewController::~StoreViewController(StoreViewController *this)

{
  ~StoreViewController(this);
  operator_delete(this);
  return;
}


