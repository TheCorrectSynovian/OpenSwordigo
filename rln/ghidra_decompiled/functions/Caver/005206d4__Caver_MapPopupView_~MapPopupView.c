/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005206d4
 * Function: Caver::MapPopupView::~MapPopupView
 * Signature: undefined __thiscall ~MapPopupView(MapPopupView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapPopupView::~MapPopupView() */

void __thiscall Caver::MapPopupView::~MapPopupView(MapPopupView *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0xf8);
  *(undefined **)this = PTR_vtable_007e56b0 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


