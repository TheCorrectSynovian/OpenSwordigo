/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059e55c
 * Function: Caver::GUIView::Update
 * Signature: undefined __thiscall Update(GUIView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::Update(float) */

void __thiscall Caver::GUIView::Update(GUIView *this,float param_1)

{
  GUIView *pGVar1;
  GUIWindow *this_00;
  long lVar2;
  long *plVar3;
  long *plVar4;
  GUIView *pGVar5;
  GUIView *pGVar6;
  undefined4 in_register_00005004;
  
                    /* try { // try from 0059e560 to 0069e567 has its CatchHandler @ 0059ea48 */
                    /* try { // try from 0059e574 to 0069e57f has its CatchHandler @ 0059ea44 */
  pGVar5 = this + 0x60;
  pGVar1 = *(GUIView **)pGVar5;
  while (pGVar1 != pGVar5) {
    lVar2 = *(long *)(pGVar1 + 0x10);
    plVar4 = *(long **)(pGVar1 + 0x18);
    if (plVar4 != (long *)0x0) {
      plVar4[1] = plVar4[1] + 1;
    }
    if (*(char *)(lVar2 + 0x54) != '\0') {
      if (*(char *)(lVar2 + 0xb9) == '\0') {
        if (*(char *)(lVar2 + 0xba) == '\0') {
          pGVar6 = *(GUIView **)pGVar1;
          if (*(char *)(lVar2 + 0xb8) != '\0') {
            FUN_0062a9c8(pGVar1);
            plVar3 = *(long **)(pGVar1 + 0x18);
                    /* try { // try from 0059e5d4 to 0069e5db has its CatchHandler @ 0059ecbc */
                    /* try { // try from 0059e5dc to 0069e5e3 has its CatchHandler @ 0059ea40 */
                    /* try { // try from 0059e5e4 to 0069e5f7 has its CatchHandler @ 0059ea3c */
            if ((plVar3 != (long *)0x0) &&
               (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* try { // try from 0059e5f8 to 0069e60b has its CatchHandler @ 0059eb84 */
              lVar2 = plVar3[2];
              plVar3[2] = lVar2 + -1;
              if (lVar2 + -1 == 0) {
                    /* try { // try from 0059e60c to 0069e61b has its CatchHandler @ 0059ea0c */
                (**(code **)(*plVar3 + 0x18))(plVar3);
              }
            }
            operator_delete(pGVar1);
          }
          goto joined_r0x0059e620;
        }
        this_00 = (GUIWindow *)(**(code **)(*(long *)this + 0xf0))(this);
        if (this_00 != (GUIWindow *)0x0) {
          GUIWindow::DismissModalView(this_00,(GUIView *)0x0);
        }
      }
      else {
                    /* try { // try from 0059e6c8 to 0069e6db has its CatchHandler @ 0059e9cc */
        (**(code **)(*(long *)this + 0x78))(this);
      }
LAB_0059e6ec:
                    /* try { // try from 0059e6fc to 0069e707 has its CatchHandler @ 0059e978 */
      if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar2 = plVar4[2];
        plVar4[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      break;
    }
    pGVar6 = *(GUIView **)pGVar1;
    GUIAnimation::Update(param_1);
                    /* try { // try from 0059e63c to 0069e63f has its CatchHandler @ 0059eb84 */
                    /* try { // try from 0059e654 to 0069e66f has its CatchHandler @ 0059ecbc */
    for (pGVar1 = *(GUIView **)pGVar5; (pGVar5 != pGVar1 && (*(long *)(pGVar1 + 0x10) != lVar2));
        pGVar1 = *(GUIView **)pGVar1) {
    }
    if (pGVar5 == pGVar1) goto LAB_0059e6ec;
joined_r0x0059e620:
    pGVar1 = pGVar6;
    if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar2 = plVar4[2];
      plVar4[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  pGVar1 = *(GUIView **)(this + 0x20);
                    /* try { // try from 0059e738 to 0069e74b has its CatchHandler @ 0059ecbc */
LAB_0059e74c:
  do {
    if (this + 0x20 == pGVar1) {
      return;
    }
    plVar4 = *(long **)(pGVar1 + 0x10);
    plVar3 = *(long **)(pGVar1 + 0x18);
    if (plVar3 != (long *)0x0) {
      plVar3[1] = plVar3[1] + 1;
    }
                    /* try { // try from 0059e76c to 0069e793 has its CatchHandler @ 0059eca4 */
    if ((GUIView *)plVar4[0xb] == this) goto LAB_0059e7e0;
    *(undefined1 *)(plVar4 + 10) = 0;
    pGVar5 = *(GUIView **)pGVar1;
    FUN_0062a9c8(pGVar1);
    plVar4 = *(long **)(pGVar1 + 0x18);
                    /* try { // try from 0059e794 to 0069e99f has its CatchHandler @ 0059e2f8 */
    if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar2 = plVar4[2];
      plVar4[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    operator_delete(pGVar1);
    pGVar1 = pGVar5;
  } while (plVar3 == (long *)0x0);
  goto LAB_0059e800;
LAB_0059e7e0:
  pGVar5 = *(GUIView **)pGVar1;
  if (*(char *)((long)plVar4 + 0xe4) == '\0') {
    (**(code **)(*plVar4 + 0x48))(CONCAT44(in_register_00005004,param_1));
  }
  pGVar1 = pGVar5;
  if (plVar3 != (long *)0x0) {
LAB_0059e800:
    lVar2 = plVar3[1];
    plVar3[1] = lVar2 + -1;
    pGVar1 = pGVar5;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
  }
  goto LAB_0059e74c;
}


