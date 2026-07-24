/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050b15c
 * Function: Caver::InventoryItemPanel::SetTrinket
 * Signature: undefined __thiscall SetTrinket(InventoryItemPanel * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryItemPanel::SetTrinket(boost::shared_ptr<Caver::Item> const&) */

void __thiscall Caver::InventoryItemPanel::SetTrinket(InventoryItemPanel *this,shared_ptr *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 0050b15c to 0060b15f has its CatchHandler @ 0050b32c */
                    /* try { // try from 0050b160 to 0060b233 has its CatchHandler @ 0050af94 */
  lVar1 = *(long *)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x100);
  plVar2 = *(long **)(*(long *)(*(long *)(this + 0x130) + 0x110) + 0x108);
  if (plVar2 == (long *)0x0) {
    lVar4 = *(long *)param_1;
  }
  else {
    lVar4 = *(long *)param_1;
    if (plVar2[1] == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      lVar3 = plVar2[2];
      plVar2[2] = lVar3 + -1;
      if (lVar3 + -1 == 0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
    }
  }
  if (lVar4 == lVar1) {
    return;
  }
  InventoryTrinketSlot::SetTrinket(*(InventoryTrinketSlot **)(this + 0x130),param_1);
  UpdateLabels(this);
  return;
}


