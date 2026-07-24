/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059713c
 * Function: Caver::GUIDraggableItem::~GUIDraggableItem
 * Signature: undefined __thiscall ~GUIDraggableItem(GUIDraggableItem * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIDraggableItem::~GUIDraggableItem() */

void __thiscall Caver::GUIDraggableItem::~GUIDraggableItem(GUIDraggableItem *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0xf8);
  *(undefined **)this = PTR_vtable_007e6f98 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  operator_delete(this);
  return;
}


