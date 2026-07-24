/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059ca74
 * Function: Caver::GUIScrollView::~GUIScrollView
 * Signature: undefined __thiscall ~GUIScrollView(GUIScrollView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::~GUIScrollView() */

void __thiscall Caver::GUIScrollView::~GUIScrollView(GUIScrollView *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x1a8);
  *(undefined **)this = PTR_vtable_007e7448 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 0059c9f0 with catch @ 0059cad0 */
                    /* catch() { ... } // from try @ 0059ca4c with catch @ 0059cad4 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 0059ca0c with catch @ 0059cae0 */
  GUIView::~GUIView((GUIView *)this);
  operator_delete(this);
  return;
}


