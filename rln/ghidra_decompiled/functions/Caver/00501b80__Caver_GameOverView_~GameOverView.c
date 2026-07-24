/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00501b80
 * Function: Caver::GameOverView::~GameOverView
 * Signature: undefined __thiscall ~GameOverView(GameOverView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverView::~GameOverView() */

void __thiscall Caver::GameOverView::~GameOverView(GameOverView *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x100);
  *(undefined **)this = PTR_vtable_007e4980 + 0x10;
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


