/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00527978
 * Function: Caver::MapView::SelectNode
 * Signature: undefined __thiscall SelectNode(MapView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapView::SelectNode(boost::shared_ptr<Caver::MapNode> const&) */

void __thiscall Caver::MapView::SelectNode(MapView *this,shared_ptr *param_1)

{
  undefined8 uVar1;
  
  uVar1 = **(undefined8 **)param_1;
  this[0x3f8] = (MapView)0x1;
  *(undefined8 *)(this + 0x400) = uVar1;
  UpdateSelectionSprite(this);
  return;
}


