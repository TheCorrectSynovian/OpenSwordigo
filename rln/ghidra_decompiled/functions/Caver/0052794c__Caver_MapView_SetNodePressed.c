/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052794c
 * Function: Caver::MapView::SetNodePressed
 * Signature: undefined __thiscall SetNodePressed(MapView * this, ulong param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::SetNodePressed(unsigned long, bool) */

void __thiscall Caver::MapView::SetNodePressed(MapView *this,ulong param_1,bool param_2)

{
  if ((*(ulong *)(this + 0x3e0) == param_1) && ((MapView)param_2 == this[0x3d8])) {
    return;
  }
  *(ulong *)(this + 0x3e0) = param_1;
  this[0x3d8] = (MapView)param_2;
  UpdateNodesSprite(this);
  return;
}


