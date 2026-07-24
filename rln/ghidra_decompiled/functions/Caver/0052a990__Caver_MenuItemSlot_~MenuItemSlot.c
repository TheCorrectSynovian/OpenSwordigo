/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052a990
 * Function: Caver::MenuItemSlot::~MenuItemSlot
 * Signature: undefined __thiscall ~MenuItemSlot(MenuItemSlot * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MenuItemSlot::~MenuItemSlot() */

void __thiscall Caver::MenuItemSlot::~MenuItemSlot(MenuItemSlot *this)

{
  ~MenuItemSlot(this);
  operator_delete(this);
  return;
}


