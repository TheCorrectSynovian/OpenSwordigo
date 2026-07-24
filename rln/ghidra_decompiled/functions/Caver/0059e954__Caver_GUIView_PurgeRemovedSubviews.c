/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059e954
 * Function: Caver::GUIView::PurgeRemovedSubviews
 * Signature: undefined __thiscall PurgeRemovedSubviews(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::PurgeRemovedSubviews() */

void __thiscall Caver::GUIView::PurgeRemovedSubviews(GUIView *this)

{
  long *plVar1;
  long lVar2;
  GUIView *pGVar3;
  long *plVar4;
  GUIView *pGVar5;
  
  pGVar3 = *(GUIView **)(this + 0x20);
LAB_0059e988:
  do {
    if (this + 0x20 == pGVar3) {
      return;
    }
    lVar2 = *(long *)(pGVar3 + 0x10);
    plVar1 = *(long **)(pGVar3 + 0x18);
    if (plVar1 != (long *)0x0) {
                    /* try { // try from 0059e9a0 to 0069eaf3 has its CatchHandler @ 0059edc8 */
      plVar1[1] = plVar1[1] + 1;
    }
    if (*(GUIView **)(lVar2 + 0x58) == this) goto LAB_0059ea1c;
    *(undefined1 *)(lVar2 + 0x50) = 0;
    pGVar5 = *(GUIView **)pGVar3;
    FUN_0062a9c8(pGVar3);
    plVar4 = *(long **)(pGVar3 + 0x18);
                    /* catch() { ... } // from try @ 0059e6c8 with catch @ 0059e9cc */
    if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar2 = plVar4[2];
      plVar4[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
                    /* catch() { ... } // from try @ 0059e60c with catch @ 0059ea0c */
    operator_delete(pGVar3);
    pGVar3 = pGVar5;
  } while (plVar1 == (long *)0x0);
  goto LAB_0059ea24;
LAB_0059ea1c:
  pGVar5 = *(GUIView **)pGVar3;
  pGVar3 = pGVar5;
  if (plVar1 != (long *)0x0) {
LAB_0059ea24:
    lVar2 = plVar1[1];
    plVar1[1] = lVar2 + -1;
    pGVar3 = pGVar5;
    if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 0059e5e4 with catch @ 0059ea3c */
                    /* catch() { ... } // from try @ 0059e5dc with catch @ 0059ea40 */
      (**(code **)(*plVar1 + 0x10))(plVar1);
                    /* catch() { ... } // from try @ 0059e574 with catch @ 0059ea44 */
      lVar2 = plVar1[2];
                    /* catch() { ... } // from try @ 0059e560 with catch @ 0059ea48 */
                    /* catch() { ... } // from try @ 0059e524 with catch @ 0059ea4c */
      plVar1[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* catch() { ... } // from try @ 0059e6fc with catch @ 0059e978 */
                    /* catch() { ... } // from try @ 0059e3c8 with catch @ 0059e97c */
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
    }
  }
  goto LAB_0059e988;
}


