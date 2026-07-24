/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051cd08
 * Function: Caver::LoadingView::~LoadingView
 * Signature: undefined __thiscall ~LoadingView(LoadingView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LoadingView::~LoadingView() */

void __thiscall Caver::LoadingView::~LoadingView(LoadingView *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x110);
  *(undefined **)this = PTR_vtable_007e62e0 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x100);
                    /* try { // try from 0051cd84 to 0061cd87 has its CatchHandler @ 0051ce98 */
                    /* try { // try from 0051cd88 to 0061cdd7 has its CatchHandler @ 0051cc2c */
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


