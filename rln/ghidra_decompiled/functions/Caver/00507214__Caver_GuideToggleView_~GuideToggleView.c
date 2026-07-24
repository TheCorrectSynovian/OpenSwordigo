/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00507214
 * Function: Caver::GuideToggleView::~GuideToggleView
 * Signature: undefined __thiscall ~GuideToggleView(GuideToggleView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuideToggleView::~GuideToggleView() */

void __thiscall Caver::GuideToggleView::~GuideToggleView(GuideToggleView *this)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 00507214 to 00607217 has its CatchHandler @ 005072a8 */
                    /* try { // try from 00507218 to 00607267 has its CatchHandler @ 00507070 */
  plVar2 = *(long **)(this + 0x110);
  *(undefined **)this = PTR_vtable_007e6f00 + 0x10;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* try { // try from 00507268 to 0060726b has its CatchHandler @ 005072a4 */
    plVar2[2] = lVar1 + -1;
                    /* try { // try from 0050726c to 006072bf has its CatchHandler @ 00507070 */
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x100);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00507268 with catch @ 005072a4 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* catch() { ... } // from try @ 00507214 with catch @ 005072a8 */
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 005070b8 with catch @ 005072bc */
                    /* try { // try from 005072c0 to 006072c7 has its CatchHandler @ 005072d0 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* try { // try from 005072c8 to 006072d3 has its CatchHandler @ 00507070 */
                    /* catch() { ... } // from try @ 005072c0 with catch @ 005072d0 */
                    /* catch() { ... } // from try @ 005073d0 with catch @ 005072d4
                       catch() { ... } // from try @ 00507478 with catch @ 005072d4 */
  GUIView::~GUIView((GUIView *)this);
  return;
}


