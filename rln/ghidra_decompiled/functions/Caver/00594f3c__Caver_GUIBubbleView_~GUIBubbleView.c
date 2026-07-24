/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00594f3c
 * Function: Caver::GUIBubbleView::~GUIBubbleView
 * Signature: undefined __thiscall ~GUIBubbleView(GUIBubbleView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIBubbleView::~GUIBubbleView() */

void __thiscall Caver::GUIBubbleView::~GUIBubbleView(GUIBubbleView *this)

{
  long lVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 005947f8 with catch @ 00594f40 */
                    /* catch() { ... } // from try @ 005947b0 with catch @ 00594f50 */
  plVar2 = *(long **)(this + 0x110);
                    /* catch() { ... } // from try @ 00594768 with catch @ 00594f60 */
  *(undefined **)this = PTR_vtable_007e60c8 + 0x10;
                    /* catch() { ... } // from try @ 00594720 with catch @ 00594f70 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
                    /* try { // try from 00594f94 to 00695363 has its CatchHandler @ 00595660 */
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0xf8);
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


