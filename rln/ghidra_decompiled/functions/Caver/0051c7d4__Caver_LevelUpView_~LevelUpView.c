/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051c7d4
 * Function: Caver::LevelUpView::~LevelUpView
 * Signature: undefined __thiscall ~LevelUpView(LevelUpView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LevelUpView::~LevelUpView() */

void __thiscall Caver::LevelUpView::~LevelUpView(LevelUpView *this)

{
  long lVar1;
  long *plVar2;
  
  *(undefined **)this = PTR_vtable_007e6d88 + 0x10;
  boost::checked_array_delete<boost::shared_ptr<Caver::GUIView>>(*(shared_ptr **)(this + 0x120));
                    /* try { // try from 0051c800 to 0061c8af has its CatchHandler @ 0051c800
                       catch() { ... } // from try @ 0051c800 with catch @ 0051c800
                       catch() { ... } // from try @ 0051c8b4 with catch @ 0051c800 */
  plVar2 = *(long **)(this + 0x110);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x100);
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


