/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059fc54
 * Function: Caver::GUIView::BringSubviewToFront
 * Signature: undefined __thiscall BringSubviewToFront(GUIView * this, GUIView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::BringSubviewToFront(Caver::GUIView*) */

void __thiscall Caver::GUIView::BringSubviewToFront(GUIView *this,GUIView *param_1)

{
  GUIView *pGVar1;
  bool bVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  GUIView *pGVar6;
  GUIView *pGVar7;
  long *plVar8;
  GUIView *pGVar9;
  
  pGVar6 = this + 0x20;
  pGVar1 = pGVar6;
  do {
    if (*(GUIView **)pGVar6 == pGVar1) {
      return;
    }
    pGVar7 = *(GUIView **)(pGVar1 + 8);
    bVar2 = pGVar6 == pGVar1;
    pGVar1 = pGVar7;
  } while ((bVar2) ||
          (pGVar9 = *(GUIView **)(pGVar7 + 0x10), pGVar9 != param_1
                    /* try { // try from 0059fc8c to 0069fc8f has its CatchHandler @ 005a0524 */));
  plVar5 = *(long **)(pGVar7 + 0x18);
                    /* try { // try from 0059fca8 to 0069fddb has its CatchHandler @ 005a0528 */
  if (plVar5 != (long *)0x0) {
    plVar5[1] = plVar5[1] + 1;
  }
  FUN_0062a9c8(pGVar7);
  plVar8 = *(long **)(pGVar7 + 0x18);
  if ((plVar8 != (long *)0x0) && (lVar4 = plVar8[1], plVar8[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar4 = plVar8[2];
    plVar8[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  operator_delete(pGVar7);
  if (pGVar9 != (GUIView *)0x0) {
    pvVar3 = operator_new(0x20);
    *(GUIView **)((long)pvVar3 + 0x10) = pGVar9;
    *(long **)((long)pvVar3 + 0x18) = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar5[1] = plVar5[1] + 1;
    }
    FUN_0062a9ac(pvVar3,pGVar6);
  }
  if ((plVar5 != (long *)0x0) && (lVar4 = plVar5[1], plVar5[1] = lVar4 + -1, lVar4 + -1 == 0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = plVar5[2];
    plVar5[2] = lVar4 + -1;
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0059fd9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5);
      return;
    }
  }
  return;
}


