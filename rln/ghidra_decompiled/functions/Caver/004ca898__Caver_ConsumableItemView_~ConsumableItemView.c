/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ca898
 * Function: Caver::ConsumableItemView::~ConsumableItemView
 * Signature: undefined __thiscall ~ConsumableItemView(ConsumableItemView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConsumableItemView::~ConsumableItemView() */

void __thiscall Caver::ConsumableItemView::~ConsumableItemView(ConsumableItemView *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x1e8);
  *(undefined **)this = PTR_vtable_007e4e88 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x1d8);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIButton::~GUIButton((GUIButton *)this);
  return;
}


