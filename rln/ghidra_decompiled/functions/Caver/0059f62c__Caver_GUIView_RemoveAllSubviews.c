/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059f62c
 * Function: Caver::GUIView::RemoveAllSubviews
 * Signature: undefined __thiscall RemoveAllSubviews(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::RemoveAllSubviews() */

void __thiscall Caver::GUIView::RemoveAllSubviews(GUIView *this)

{
  GUIView *pGVar1;
  long lVar2;
  GUIView *pGVar3;
  long *plVar4;
  GUIView *pGVar5;
  
  pGVar5 = this + 0x20;
  pGVar3 = *(GUIView **)pGVar5;
  for (pGVar1 = pGVar3; pGVar5 != pGVar1; pGVar1 = *(GUIView **)pGVar1) {
    *(undefined8 *)(*(long *)(pGVar1 + 0x10) + 0x58) = 0;
  }
  while (pGVar3 != pGVar5) {
                    /* catch() { ... } // from try @ 0059ee48 with catch @ 0059f674
                       catch() { ... } // from try @ 0059eee4 with catch @ 0059f674 */
    plVar4 = *(long **)(pGVar3 + 0x18);
    pGVar1 = *(GUIView **)pGVar3;
    if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar2 = plVar4[2];
      plVar4[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    operator_delete(pGVar3);
    pGVar3 = pGVar1;
  }
  *(GUIView **)(this + 0x20) = pGVar5;
  *(GUIView **)(this + 0x28) = pGVar5;
  return;
}


