/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005422ec
 * Function: Caver::TabbedMenuView::~TabbedMenuView
 * Signature: undefined __thiscall ~TabbedMenuView(TabbedMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabbedMenuView::~TabbedMenuView() */

void __thiscall Caver::TabbedMenuView::~TabbedMenuView(TabbedMenuView *this)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x180);
  puVar1 = PTR_vtable_007e7c98 + 0x158;
  *(undefined **)this = PTR_vtable_007e7c98 + 0x10;
  *(undefined **)(this + 0xf0) = puVar1;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* try { // try from 00542340 to 00642367 has its CatchHandler @ 00542388 */
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x170);
                    /* try { // try from 00542368 to 0064238b has its CatchHandler @ 00541fac */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* catch() { ... } // from try @ 00542230 with catch @ 00542388
                       catch() { ... } // from try @ 00542340 with catch @ 00542388 */
    lVar2 = plVar3[2];
                    /* catch() { ... } // from try @ 0054243c with catch @ 0054238c */
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 005423a4 to 006423ab has its CatchHandler @ 00542448 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x160);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
                    /* try { // try from 005423d8 to 006423e3 has its CatchHandler @ 005423f0 */
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* catch() { ... } // from try @ 005423d8 with catch @ 005423f0 */
  plVar3 = *(long **)(this + 0x150);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 00542414 to 0064243b has its CatchHandler @ 00542444 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x140);
                    /* try { // try from 0054243c to 00642457 has its CatchHandler @ 0054238c */
                    /* catch() { ... } // from try @ 00542414 with catch @ 00542444 */
                    /* catch() { ... } // from try @ 005423a4 with catch @ 00542448 */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 00542458 to 00642463 has its CatchHandler @ 00542464 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
                    /* catch() { ... } // from try @ 00542458 with catch @ 00542464 */
                    /* try { // try from 00542468 to 0064246b has its CatchHandler @ 00542470 */
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 00542468 with catch @ 00542470 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x130);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00542508 with catch @ 00542498
                       catch() { ... } // from try @ 005425ac with catch @ 00542498 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x118);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 00542504 to 00642507 has its CatchHandler @ 00542564 */
                    /* try { // try from 00542508 to 00642583 has its CatchHandler @ 00542498 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x108);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* catch() { ... } // from try @ 00542504 with catch @ 00542564 */
  GUIView::~GUIView((GUIView *)this);
  return;
}


