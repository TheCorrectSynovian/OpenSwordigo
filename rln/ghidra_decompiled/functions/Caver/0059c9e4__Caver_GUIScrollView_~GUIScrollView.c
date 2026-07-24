/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059c9e4
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
  
                    /* try { // try from 0059c9f0 to 0069ca03 has its CatchHandler @ 0059cad0 */
  plVar2 = *(long **)(this + 0x1a8);
  *(undefined **)this = PTR_vtable_007e7448 + 0x10;
                    /* try { // try from 0059ca0c to 0069ca17 has its CatchHandler @ 0059cae0 */
                    /* try { // try from 0059ca18 to 0069ca4b has its CatchHandler @ 0059c958 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* try { // try from 0059ca4c to 0069ca5f has its CatchHandler @ 0059cad4 */
  GUIView::~GUIView((GUIView *)this);
  return;
}


