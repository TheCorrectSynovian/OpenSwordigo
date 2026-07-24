/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059e304
 * Function: Caver::GUIView::~GUIView
 * Signature: undefined __thiscall ~GUIView(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::~GUIView() */

void __thiscall Caver::GUIView::~GUIView(GUIView *this)

{
  GUIView *pGVar1;
  long lVar2;
  GUIView *pGVar3;
  long *plVar4;
  GUIView *pGVar5;
  GUIView *pGVar6;
  
                    /* try { // try from 0059e320 to 0069e337 has its CatchHandler @ 0059eb78 */
  *(undefined **)this = PTR_vtable_007e47b0 + 0x10;
  pGVar6 = this + 0x20;
  pGVar3 = *(GUIView **)pGVar6;
  for (pGVar1 = pGVar3; pGVar6 != pGVar1; pGVar1 = *(GUIView **)pGVar1) {
    *(undefined8 *)(*(long *)(pGVar1 + 0x10) + 0x58) = 0;
                    /* try { // try from 0059e34c to 0069e35f has its CatchHandler @ 0059eb00 */
  }
  pGVar5 = this + 0x60;
  pGVar1 = *(GUIView **)pGVar5;
                    /* try { // try from 0059e360 to 0069e373 has its CatchHandler @ 0059eaf8 */
  if (*(GUIView **)pGVar5 != pGVar5) {
    do {
      plVar4 = *(long **)(pGVar1 + 0x18);
      pGVar3 = *(GUIView **)pGVar1;
                    /* try { // try from 0059e374 to 0069e38f has its CatchHandler @ 0059ebe4 */
      if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        lVar2 = plVar4[2];
        plVar4[2] = lVar2 + -1;
        if (lVar2 + -1 == 0) {
          (**(code **)(*plVar4 + 0x18))(plVar4);
        }
      }
      operator_delete(pGVar1);
      pGVar1 = pGVar3;
    } while (pGVar3 != pGVar5);
    pGVar3 = *(GUIView **)pGVar6;
  }
                    /* try { // try from 0059e3c8 to 0069e3ef has its CatchHandler @ 0059e97c */
  while (pGVar3 != pGVar6) {
    plVar4 = *(long **)(pGVar3 + 0x18);
    pGVar1 = *(GUIView **)pGVar3;
    if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[1], plVar4[1] = lVar2 + -1, lVar2 + -1 == 0)) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      lVar2 = plVar4[2];
      plVar4[2] = lVar2 + -1;
      if (lVar2 + -1 == 0) {
                    /* try { // try from 0059e410 to 0069e437 has its CatchHandler @ 0059ebe4 */
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
    operator_delete(pGVar3);
    pGVar3 = pGVar1;
  }
  plVar4 = *(long **)(this + 0x10);
  if ((plVar4 != (long *)0x0) && (lVar2 = plVar4[2], plVar4[2] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 0059e46c to 0069e47b has its CatchHandler @ 0059eca4 */
                    /* WARNING: Could not recover jumptable at 0x0059e474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x18))();
    return;
  }
  return;
}


