/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a2628
 * Function: Caver::GUIWindow::Update
 * Signature: undefined __thiscall Update(GUIWindow * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIWindow::Update(float) */

void __thiscall Caver::GUIWindow::Update(GUIWindow *this,float param_1)

{
  GUIWindow *pGVar1;
  long *plVar2;
  long lVar3;
  GUIWindow *pGVar4;
  GUIWindow *pGVar5;
  float fVar6;
  float fVar7;
  undefined4 in_register_00005004;
  ulong uVar8;
  float fVar9;
  ulong uVar10;
  
  uVar8 = CONCAT44(in_register_00005004,param_1);
                    /* try { // try from 005a2638 to 006a263f has its CatchHandler @ 005a2770 */
                    /* try { // try from 005a2640 to 006a278f has its CatchHandler @ 005a25bc */
  pGVar1 = this + 0x1c0;
  uVar10 = uVar8;
  if (((*(GUIWindow **)(this + 0x1c0) != pGVar1) &&
      (lVar3 = *(long *)(*(GUIWindow **)(this + 0x1c0) + 0x10),
      *(float *)(lVar3 + 0x1fc) <= DAT_00683734)) && (uVar10 = 0, *(char *)(lVar3 + 0x1f8) != '\0'))
  {
    uVar10 = (ulong)(uint)param_1;
  }
  if (*(long **)(this + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x100) + 0x48))(uVar10);
  }
  GUIView::Update((GUIView *)this,(float)uVar10);
  if (*(GUIEffect **)(this + 0x1e8) != (GUIEffect *)0x0) {
    GUIEffect::Update(*(GUIEffect **)(this + 0x1e8),(float)uVar10);
  }
  fVar9 = DAT_00697158;
  fVar7 = DAT_00683734;
  if ((DAT_00683734 < *(float *)(this + 0x1fc)) &&
     (fVar6 = *(float *)(this + 0x1fc) - param_1, *(float *)(this + 0x1fc) = fVar6, fVar6 < fVar9))
  {
    this[0x1f8] = (GUIWindow)0x1;
    *(undefined4 *)(this + 0x1fc) = 0;
  }
                    /* catch() { ... } // from try @ 005a2614 with catch @ 005a26f4 */
  pGVar5 = *(GUIWindow **)pGVar1;
  while (pGVar5 != pGVar1) {
    plVar2 = *(long **)(pGVar5 + 0x10);
    if ((char)plVar2[0x3f] == '\0') {
                    /* catch() { ... } // from try @ 005a25f8 with catch @ 005a2770
                       catch() { ... } // from try @ 005a2638 with catch @ 005a2770 */
      *(undefined4 *)(plVar2 + 0x40) = *(undefined4 *)(this + 0x200);
      (**(code **)(*plVar2 + 0x48))(uVar8);
      pGVar5 = *(GUIWindow **)pGVar5;
    }
    else {
      plVar2[0x3a] = 0;
      pGVar4 = *(GUIWindow **)pGVar5;
      FUN_0062a9c8(pGVar5);
      plVar2 = *(long **)(pGVar5 + 0x18);
      if ((plVar2 != (long *)0x0) && (lVar3 = plVar2[1], plVar2[1] = lVar3 + -1, lVar3 + -1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar3 = plVar2[2];
        plVar2[2] = lVar3 + -1;
        if (lVar3 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
                    /* catch() { ... } // from try @ 005a260c with catch @ 005a2764 */
      operator_delete(pGVar5);
      pGVar5 = pGVar4;
    }
  }
  if (((*(long *)(this + 0x1d0) == 0) || (fVar7 < *(float *)(this + 0x1fc))) ||
     (this[0x1f8] != (GUIWindow)0x0)) {
                    /* try { // try from 005a27b8 to 006a27c3 has its CatchHandler @ 005a25bc */
                    /* catch() { ... } // from try @ 005a2790 with catch @ 005a27c0 */
    fVar7 = *(float *)(this + 0x1d8) + param_1 * -2.5;
    *(float *)(this + 0x1d8) = fVar7;
                    /* try { // try from 005a27cc to 006a284f has its CatchHandler @ 005a27cc
                       catch() { ... } // from try @ 005a27cc with catch @ 005a27cc
                       catch() { ... } // from try @ 005a2864 with catch @ 005a27cc
                       catch() { ... } // from try @ 005a294c with catch @ 005a27cc
                       catch() { ... } // from try @ 005a2a74 with catch @ 005a27cc */
    if (fVar7 < 0.0) {
      *(undefined4 *)(this + 0x1d8) = 0;
    }
  }
  else {
    fVar7 = *(float *)(this + 0x1dc);
    fVar9 = *(float *)(this + 0x1d8) + (fVar7 / DAT_00684318) * param_1;
    *(float *)(this + 0x1d8) = fVar9;
    if (fVar7 < fVar9) {
      *(float *)(this + 0x1d8) = fVar7;
    }
  }
  return;
}


