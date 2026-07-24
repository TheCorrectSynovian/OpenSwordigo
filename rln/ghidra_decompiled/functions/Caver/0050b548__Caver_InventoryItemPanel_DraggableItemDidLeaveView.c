/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050b548
 * Function: Caver::InventoryItemPanel::DraggableItemDidLeaveView
 * Signature: undefined __thiscall DraggableItemDidLeaveView(InventoryItemPanel * this, GUIDraggableItem * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryItemPanel::DraggableItemDidLeaveView(Caver::GUIDraggableItem*) */

void __thiscall
Caver::InventoryItemPanel::DraggableItemDidLeaveView
          (InventoryItemPanel *this,GUIDraggableItem *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  if ((param_1 != (GUIDraggableItem *)0x0) &&
     (lVar3 = __dynamic_cast(param_1,PTR_typeinfo_007e5980,PTR_typeinfo_007e6148,0), lVar3 != 0)) {
    plVar1 = *(long **)(lVar3 + 0x108);
    if (plVar1 == (long *)0x0) {
      iVar2 = **(int **)(lVar3 + 0x100);
    }
    else {
      iVar2 = **(int **)(lVar3 + 0x100);
      if (plVar1[1] == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar3 = plVar1[2];
        plVar1[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
                    /* try { // try from 0050b604 to 0060b617 has its CatchHandler @ 0050b63c */
          (**(code **)(*plVar1 + 0x18))(plVar1);
          if (iVar2 != 3) {
            return;
          }
          goto LAB_0050b5c0;
        }
      }
    }
    if (iVar2 == 3) {
LAB_0050b5c0:
      MenuItemSlot::SetSelected(*(MenuItemSlot **)(*(long *)(this + 0x130) + 0x110),false);
      return;
    }
  }
                    /* catch() { ... } // from try @ 0050b618 with catch @ 0050b5e8 */
  return;
}


