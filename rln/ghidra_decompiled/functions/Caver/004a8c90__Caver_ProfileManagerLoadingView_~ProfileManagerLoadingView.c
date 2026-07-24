/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a8c90
 * Function: Caver::ProfileManagerLoadingView::~ProfileManagerLoadingView
 * Signature: undefined __thiscall ~ProfileManagerLoadingView(ProfileManagerLoadingView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileManagerLoadingView::~ProfileManagerLoadingView() */

void __thiscall
Caver::ProfileManagerLoadingView::~ProfileManagerLoadingView(ProfileManagerLoadingView *this)

{
  long lVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 004a7378 with catch @ 004a8c98 */
                    /* catch() { ... } // from try @ 004a7334 with catch @ 004a8c9c */
  plVar2 = *(long **)(this + 0x108);
  *(undefined **)this = PTR_vtable_007e6130 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004a72b8 with catch @ 004a8cd4 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0xf8);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch() { ... } // from try @ 004a8088 with catch @ 004a8d14 */
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


