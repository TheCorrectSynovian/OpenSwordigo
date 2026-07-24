/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053a60c
 * Function: Caver::SettingsView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(SettingsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SettingsView::LayoutSubviews() */

void __thiscall Caver::SettingsView::LayoutSubviews(SettingsView *this)

{
  long *plVar1;
  long lVar2;
  GUIView *pGVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float local_b0;
  undefined8 local_a8;
  float fStack_a0;
  float fStack_9c;
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  fVar14 = *(float *)(this + 0x84);
  fVar8 = *(float *)(this + 0x88);
  fVar11 = *(float *)(this + 0x90);
  GUIView::safeBounds();
  fVar13 = DAT_00687824;
  fVar15 = (local_b8 + local_b0) - fVar14;
  fVar10 = (fVar15 + DAT_00694ca0) * DAT_00687824 + DAT_00690224;
  fVar9 = (float)(int)((fVar11 + DAT_00694c9c) * DAT_00683484);
  fVar12 = fVar9 + DAT_00683480;
  local_a8 = CONCAT44(fVar12,0x42200000);
  fStack_9c = 36.0;
  fStack_a0 = fVar10;
  GUIView::SetFrame(*(GUIView **)(this + 0x110),(Rectangle *)&local_a8);
  fStack_9c = 36.0;
  local_a8 = CONCAT44(*(float *)(*(long *)(this + 0x110) + 0x78) +
                      *(float *)(*(long *)(this + 0x110) + 0x80) + 15.0,0x42200000);
  fStack_a0 = fVar10;
  GUIView::SetFrame(*(GUIView **)(this + 0x120),(Rectangle *)&local_a8);
  fStack_9c = *(float *)(*(long *)(*(GUIView **)(this + 0x130) + 0xf0) + 0x48);
  local_a8 = CONCAT44((*(float *)(*(long *)(this + 0x110) + 0x78) + -15.0) - fStack_9c,0x42200000);
  fStack_a0 = fVar10;
  GUIView::SetFrame(*(GUIView **)(this + 0x130),(Rectangle *)&local_a8);
  lVar4 = *(long *)(this + 0x160);
  if (*(long *)(this + 0x168) == lVar4) {
    fVar10 = fVar14 + fVar15 + -30.0;
  }
  else {
    fVar10 = fVar14 + fVar15 + -30.0;
    lVar5 = 0;
    uVar6 = 0;
    fVar13 = (fVar15 + DAT_00694ca4) * fVar13 + DAT_00694ca8;
    lVar7 = -1;
    do {
      pGVar3 = *(GUIView **)(lVar4 + lVar5);
      plVar1 = (long *)((undefined8 *)(lVar4 + lVar5))[1];
      if (plVar1 != (long *)0x0) {
        plVar1[1] = plVar1[1] + 1;
      }
      local_a8 = *(undefined8 *)(pGVar3 + 0x74);
      fStack_9c = 36.0;
      fStack_a0 = fVar13;
      GUIView::SetFrame(pGVar3,(Rectangle *)&local_a8);
      fStack_a0 = *(float *)(pGVar3 + 0x7c);
      fStack_9c = *(float *)(pGVar3 + 0x80);
      local_a8 = CONCAT44(fVar12 + (fStack_9c + 15.0) *
                                   (float)(ulong)(lVar7 + (*(long *)(this + 0x168) -
                                                           *(long *)(this + 0x160) >> 4)),
                          fVar10 - fStack_a0);
                    /* try { // try from 0053a7f8 to 0063a7fb has its CatchHandler @ 0053a9f8 */
      GUIView::SetFrame(pGVar3,(Rectangle *)&local_a8);
                    /* try { // try from 0053a7fc to 0063aa0b has its CatchHandler @ 00539d60 */
      if ((plVar1 != (long *)0x0) && (lVar4 = plVar1[1], plVar1[1] = lVar4 + -1, lVar4 + -1 == 0)) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        lVar4 = plVar1[2];
        plVar1[2] = lVar4 + -1;
        if (lVar4 + -1 == 0) {
          (**(code **)(*plVar1 + 0x18))(plVar1);
        }
      }
      lVar4 = *(long *)(this + 0x160);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
      lVar7 = lVar7 + -1;
    } while (uVar6 < (ulong)(*(long *)(this + 0x168) - lVar4 >> 4));
  }
  pGVar3 = *(GUIView **)(this + 0x178);
  fVar8 = fVar8 + fVar11;
  fStack_9c = *(float *)(pGVar3 + 0x80);
  fStack_a0 = *(float *)(pGVar3 + 0x7c);
  fVar13 = (fVar8 + DAT_00694cac) - fVar9;
  local_a8 = CONCAT44((int)(fVar13 - fStack_9c * 0.5),0x420c0000);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_a8);
  fStack_9c = *(float *)(*(GUIView **)(this + 0x198) + 0x80);
  fVar10 = fVar10 + DAT_00694cb0;
  local_a8 = CONCAT44((int)(fVar13 - fStack_9c * 0.5),0x42b40000);
  fStack_a0 = fVar10;
  GUIView::SetFrame(*(GUIView **)(this + 0x198),(Rectangle *)&local_a8);
  pGVar3 = *(GUIView **)(this + 0x188);
  fStack_9c = *(float *)(pGVar3 + 0x80);
  fStack_a0 = *(float *)(pGVar3 + 0x7c);
  fVar9 = (fVar8 + DAT_00694c48) - fVar9;
  local_a8 = CONCAT44((int)(fVar9 - fStack_9c * 0.5),0x420c0000);
  GUIView::SetFrame(pGVar3,(Rectangle *)&local_a8);
  fStack_9c = *(float *)(*(long *)(this + 0x198) + 0x80);
  local_a8 = CONCAT44((int)(fVar9 - *(float *)(*(GUIView **)(this + 0x1a8) + 0x80) * 0.5),0x42b40000
                     );
  fStack_a0 = fVar10;
  GUIView::SetFrame(*(GUIView **)(this + 0x1a8),(Rectangle *)&local_a8);
  Rectangle::RectangleByOutsetting((Rectangle *)(*(long *)(this + 0x198) + 0x84),20.0);
  fStack_a0 = ((float)local_a8 + fStack_a0 + 20.0) - (float)local_a8;
  lVar4 = *(long *)(this + 0x178);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar4 + 0x84),10.0);
  *(undefined8 *)(lVar4 + 0x9c) = uStack_c0;
  *(undefined8 *)(lVar4 + 0x94) = local_c8;
  lVar4 = *(long *)(this + 0x198);
  *(ulong *)(lVar4 + 0x9c) = CONCAT44(fStack_9c,fStack_a0);
  *(undefined8 *)(lVar4 + 0x94) = local_a8;
  lVar4 = *(long *)(this + 0x188);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar4 + 0x84),10.0);
  *(undefined8 *)(lVar4 + 0x9c) = uStack_c0;
  *(undefined8 *)(lVar4 + 0x94) = local_c8;
  lVar4 = *(long *)(this + 0x1a8);
  *(ulong *)(lVar4 + 0x9c) = CONCAT44(fStack_9c,fStack_a0);
  *(undefined8 *)(lVar4 + 0x94) = local_a8;
  AnimateIn(this);
  if (*(long *)(lVar2 + 0x28) == local_98) {
                    /* catch() { ... } // from try @ 0053a7f8 with catch @ 0053a9f8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


