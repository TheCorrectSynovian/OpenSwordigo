/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e040c
 * Function: Caver::ManaBar::~ManaBar
 * Signature: undefined __thiscall ~ManaBar(ManaBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ManaBar::~ManaBar() */

void __thiscall Caver::ManaBar::~ManaBar(ManaBar *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0xf8);
  *(undefined **)this = PTR_vtable_007e6780 + 0x10;
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


