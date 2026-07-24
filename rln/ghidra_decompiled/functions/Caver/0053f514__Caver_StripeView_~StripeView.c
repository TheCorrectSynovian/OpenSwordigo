/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053f514
 * Function: Caver::StripeView::~StripeView
 * Signature: undefined __thiscall ~StripeView(StripeView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StripeView::~StripeView() */

void __thiscall Caver::StripeView::~StripeView(StripeView *this)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 0053f520 to 0063f52b has its CatchHandler @ 0053f538 */
  plVar2 = *(long **)(this + 0x128);
                    /* catch() { ... } // from try @ 0053f520 with catch @ 0053f538 */
  *(undefined **)this = PTR_vtable_007e7f20 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 0053f55c to 0063f583 has its CatchHandler @ 0053f58c */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x118);
                    /* try { // try from 0053f584 to 0063f59f has its CatchHandler @ 0053f4d4 */
                    /* catch() { ... } // from try @ 0053f55c with catch @ 0053f58c */
                    /* catch() { ... } // from try @ 0053f4ec with catch @ 0053f590 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 0053f5a0 to 0063f5ab has its CatchHandler @ 0053f5ac */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* catch() { ... } // from try @ 0053f5a0 with catch @ 0053f5ac */
                    /* try { // try from 0053f5b0 to 0063f5b3 has its CatchHandler @ 0053f5b8 */
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 0053f5b0 with catch @ 0053f5b8 */
                    /* try { // try from 0053f5bc to 0063f5f7 has its CatchHandler @ 0053f5bc
                       catch() { ... } // from try @ 0053f5bc with catch @ 0053f5bc
                       catch() { ... } // from try @ 0053f600 with catch @ 0053f5bc
                       catch() { ... } // from try @ 0053f830 with catch @ 0053f5bc
                       catch() { ... } // from try @ 0053f8f8 with catch @ 0053f5bc
                       catch() { ... } // from try @ 0053f9d8 with catch @ 0053f5bc */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIFrameView::~GUIFrameView((GUIFrameView *)this);
  return;
}


