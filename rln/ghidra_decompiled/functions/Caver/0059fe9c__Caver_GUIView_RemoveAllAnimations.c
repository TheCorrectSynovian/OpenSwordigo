/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059fe9c
 * Function: Caver::GUIView::RemoveAllAnimations
 * Signature: undefined __thiscall RemoveAllAnimations(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::RemoveAllAnimations() */

void __thiscall Caver::GUIView::RemoveAllAnimations(GUIView *this)

{
  GUIView *pGVar1;
  long lVar2;
  long *plVar3;
  GUIView *pGVar4;
  GUIView *pGVar5;
  
  pGVar4 = this + 0x60;
  pGVar1 = *(GUIView **)pGVar4;
  while (pGVar1 != pGVar4) {
                    /* try { // try from 0059fec4 to 0069fed7 has its CatchHandler @ 005a0350 */
    plVar3 = *(long **)(pGVar1 + 0x18);
    pGVar5 = *(GUIView **)pGVar1;
                    /* try { // try from 0059fed8 to 0069fee7 has its CatchHandler @ 005a02f0 */
    if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      lVar2 = plVar3[2];
      plVar3[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
    }
                    /* try { // try from 0059ff14 to 0069ff3b has its CatchHandler @ 005a02ec */
    operator_delete(pGVar1);
    pGVar1 = pGVar5;
  }
  *(GUIView **)(this + 0x60) = pGVar4;
  *(GUIView **)(this + 0x68) = pGVar4;
  return;
}


