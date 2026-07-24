/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4708
 * Function: Caver::GUIPopoverView::~GUIPopoverView
 * Signature: undefined __thiscall ~GUIPopoverView(GUIPopoverView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIPopoverView::~GUIPopoverView() */

void __thiscall Caver::GUIPopoverView::~GUIPopoverView(GUIPopoverView *this)

{
  long lVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 005d43ec with catch @ 005d4714
                       catch() { ... } // from try @ 005d4440 with catch @ 005d4714 */
                    /* catch() { ... } // from try @ 005d4488 with catch @ 005d4718 */
  plVar2 = *(long **)(this + 0x140);
  *(undefined **)this = PTR_vtable_007e5d40 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x130);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch() { ... } // from try @ 005d4480 with catch @ 005d478c */
    (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* catch() { ... } // from try @ 005d4390 with catch @ 005d479c
                       catch() { ... } // from try @ 005d446c with catch @ 005d479c
                       catch() { ... } // from try @ 005d4500 with catch @ 005d479c */
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x108);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* try { // try from 005d47e8 to 006d47f3 has its CatchHandler @ 005d41d8 */
    plVar2[2] = lVar1 + -1;
                    /* catch() { ... } // from try @ 005d469c with catch @ 005d47f0 */
    if (lVar1 + -1 == 0) {
                    /* try { // try from 005d47f4 to 006d488b has its CatchHandler @ 005d47f4
                       catch() { ... } // from try @ 005d47f4 with catch @ 005d47f4
                       catch() { ... } // from try @ 005d48f8 with catch @ 005d47f4
                       catch() { ... } // from try @ 005d4a0c with catch @ 005d47f4 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


