/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00527990
 * Function: Caver::MapView::SelectNodeAtIndex
 * Signature: undefined __thiscall SelectNodeAtIndex(MapView * this, ulong param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::SelectNodeAtIndex(unsigned long) */

void __thiscall Caver::MapView::SelectNodeAtIndex(MapView *this,ulong param_1)

{
  this[0x3f8] = (MapView)0x1;
  *(ulong *)(this + 0x400) = param_1;
  UpdateSelectionSprite(this);
  return;
}


