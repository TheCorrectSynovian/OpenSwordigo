/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052a548
 * Function: Caver::MenuItemSlot::SetSelected
 * Signature: undefined __thiscall SetSelected(MenuItemSlot * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MenuItemSlot::SetSelected(bool) */

void __thiscall Caver::MenuItemSlot::SetSelected(MenuItemSlot *this,bool param_1)

{
  if ((MenuItemSlot)param_1 != this[0x121]) {
    this[0x121] = (MenuItemSlot)param_1;
  }
  return;
}


