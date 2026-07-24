/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050b35c
 * Function: Caver::InventoryItemPanel::DraggableItemDidEnterView
 * Signature: undefined __thiscall DraggableItemDidEnterView(InventoryItemPanel * this, GUIDraggableItem * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::InventoryItemPanel::DraggableItemDidEnterView(Caver::GUIDraggableItem*) */

void __thiscall
Caver::InventoryItemPanel::DraggableItemDidEnterView
          (InventoryItemPanel *this,GUIDraggableItem *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(this + 0x120);
  lVar6 = *(long *)(lVar5 + 0x100);
  plVar1 = *(long **)(lVar5 + 0x108);
  if (plVar1 != (long *)0x0) {
    plVar1[1] = plVar1[1] + 1;
  }
  if (lVar6 == 0) {
    plVar2 = *(long **)(lVar5 + 0x118);
    if (plVar2 == (long *)0x0) {
      bVar4 = *(long *)(lVar5 + 0x110) == 0;
    }
    else {
      bVar4 = *(long *)(lVar5 + 0x110) == 0;
      if (plVar2[1] == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar6 = plVar2[2];
        plVar2[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
    }
  }
  else {
    bVar4 = false;
  }
  if ((plVar1 != (long *)0x0) && (lVar6 = plVar1[1], plVar1[1] = lVar6 + -1, lVar6 + -1 == 0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
    lVar6 = plVar1[2];
    plVar1[2] = lVar6 + -1;
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  if ((param_1 != (GUIDraggableItem *)0x0 && !bVar4) &&
     (lVar6 = __dynamic_cast(param_1,PTR_typeinfo_007e5980,PTR_typeinfo_007e6148,0), lVar6 != 0)) {
    plVar1 = *(long **)(lVar6 + 0x108);
    if (plVar1 == (long *)0x0) {
      iVar3 = **(int **)(lVar6 + 0x100);
    }
    else {
      iVar3 = **(int **)(lVar6 + 0x100);
      if (plVar1[1] == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar6 = plVar1[2];
        plVar1[2] = lVar6 + -1;
        if (lVar6 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
    }
    if (iVar3 == 3) {
      MenuItemSlot::SetSelected(*(MenuItemSlot **)(*(long *)(this + 0x130) + 0x110),true);
      return;
    }
  }
  return;
}


