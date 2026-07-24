/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059008c
 * Function: Caver::GUIAlertView::UpdateLayout
 * Signature: undefined __thiscall UpdateLayout(GUIAlertView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GUIAlertView::UpdateLayout() */

void __thiscall Caver::GUIAlertView::UpdateLayout(GUIAlertView *this)

{
  long lVar1;
  long lVar2;
  GUIView *pGVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined8 local_98;
  float local_90;
  float local_8c;
  long local_88;
  
                    /* try { // try from 00590094 to 0069009b has its CatchHandler @ 005928d0 */
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 005900c4 to 006900cf has its CatchHandler @ 00591afc */
  if (DAT_00683734 < *(float *)(this + 0x8c)) {
    lVar9 = *(long *)(this + 0x120);
    uVar8 = *(long *)(this + 0x148) - (long)*(long **)(this + 0x140);
                    /* try { // try from 005900f0 to 00690117 has its CatchHandler @ 0059136c */
    uVar7 = *(long *)(this + 400) - (long)*(long **)(this + 0x188);
    iVar5 = (int)(uVar8 >> 4);
    fVar14 = 8.0;
    if (iVar5 < 1) {
      fVar14 = 16.0;
    }
    iVar4 = (int)(uVar7 >> 4);
    fVar13 = 12.0;
    if (iVar4 < 1) {
      fVar13 = fVar14;
    }
    if (*(long *)(*(long *)(lVar9 + 0x100) + -0x18) == 0) {
      fVar14 = 0.0;
      local_8c = DAT_00695770;
    }
    else {
      fVar14 = *(float *)(lVar9 + 0x7c);
                    /* try { // try from 00590120 to 0069012f has its CatchHandler @ 005925e4 */
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      local_8c = fVar13 + *(float *)(lVar9 + 0x80);
    }
    lVar9 = *(long *)(this + 0x130);
    local_8c = local_8c - fVar13;
    local_90 = fVar14;
    if (*(long *)(*(long *)(lVar9 + 0x100) + -0x18) != 0) {
      local_90 = *(float *)(lVar9 + 0x7c);
      if (*(float *)(lVar9 + 0x7c) <= fVar14) {
        local_90 = fVar14;
      }
      local_8c = local_8c + fVar13 + *(float *)(lVar9 + 0x80);
    }
                    /* try { // try from 00590168 to 0069018f has its CatchHandler @ 0059131c */
    if (0 < (int)((ulong)(*(long *)(this + 0x160) - *(long *)(this + 0x158)) >> 4)) {
      local_8c = fVar13 + 4.0 + DAT_00690220 + -12.0 + local_8c;
    }
    if (0 < iVar5) {
      uVar8 = uVar8 >> 4 & 0xffffffff;
      plVar6 = *(long **)(this + 0x140);
      fVar14 = local_90;
      do {
        local_90 = *(float *)(*plVar6 + 0x7c);
                    /* try { // try from 005901b0 to 006901d7 has its CatchHandler @ 005925e4 */
        if (local_90 <= fVar14) {
          local_90 = fVar14;
        }
        uVar8 = uVar8 - 1;
        local_8c = local_8c + fVar13 + *(float *)(*plVar6 + 0x80);
        plVar6 = plVar6 + 2;
        fVar14 = local_90;
      } while (uVar8 != 0);
    }
    uVar8 = *(long *)(this + 0x178) - (long)*(long **)(this + 0x170);
    if (0 < (int)(uVar8 >> 4)) {
      lVar9 = 0;
      plVar6 = *(long **)(this + 0x170);
      fVar14 = local_90;
      do {
        lVar9 = lVar9 + 1;
        local_90 = *(float *)(*plVar6 + 0x7c);
                    /* try { // try from 005901f8 to 006901fb has its CatchHandler @ 00591220 */
        if (local_90 <= fVar14) {
          local_90 = fVar14;
        }
        local_8c = local_8c + *(float *)(*plVar6 + 0x80) + 20.0;
        plVar6 = plVar6 + 2;
        fVar14 = local_90;
      } while (lVar9 < (long)(uVar8 * 0x10000000) >> 0x20);
    }
    if (0 < iVar4) {
      uVar7 = uVar7 >> 4 & 0xffffffff;
      plVar6 = *(long **)(this + 0x188);
      fVar14 = local_90;
      do {
                    /* try { // try from 0059021c to 0069021f has its CatchHandler @ 0059121c */
        local_90 = *(float *)(*plVar6 + 0x7c);
        if (local_90 <= fVar14) {
          local_90 = fVar14;
        }
        uVar7 = uVar7 - 1;
        local_8c = local_8c + fVar13 + *(float *)(*plVar6 + 0x80);
        plVar6 = plVar6 + 2;
        fVar14 = local_90;
      } while (uVar7 != 0);
    }
    fVar14 = 12.0;
    if (iVar5 < 1) {
      fVar14 = 20.0;
    }
    fVar12 = 16.0;
    if (iVar4 < 1) {
      fVar12 = fVar14;
    }
    local_8c = fVar12 + local_8c;
    local_90 = fVar12 + fVar12 + local_90;
                    /* try { // try from 00590268 to 0069027b has its CatchHandler @ 00591ac8 */
    local_98 = 0;
    (**(code **)(*(long *)this + 0xf8))(this,&local_98);
    Rectangle::RectangleByInsetting((Rectangle *)(this + 0x84),fVar12);
    pGVar3 = *(GUIView **)(this + 0x120);
    fVar14 = fVar13 + local_98._4_4_ + local_8c;
                    /* try { // try from 0059029c to 006902a7 has its CatchHandler @ 005911f0 */
    if (*(long *)(*(long *)(pGVar3 + 0x100) + -0x18) != 0) {
      local_9c = *(float *)(pGVar3 + 0x80);
                    /* try { // try from 005902b0 to 006902b7 has its CatchHandler @ 005928d0 */
                    /* try { // try from 005902b8 to 006902c3 has its CatchHandler @ 005928b4 */
      fVar14 = fVar14 - (fVar13 + local_9c);
      local_a8 = (int)(float)local_98;
      local_a0 = local_90;
      local_a4 = fVar14;
      GUIView::SetFrame(pGVar3,(Rectangle *)&local_a8);
    }
    pGVar3 = *(GUIView **)(this + 0x130);
    if (*(long *)(*(long *)(pGVar3 + 0x100) + -0x18) != 0) {
      local_9c = *(float *)(pGVar3 + 0x80);
      fVar14 = fVar14 - (fVar13 + local_9c);
      local_a8 = (int)(float)local_98;
      local_a0 = local_90;
      local_a4 = fVar14;
      GUIView::SetFrame(pGVar3,(Rectangle *)&local_a8);
    }
                    /* try { // try from 0059030c to 0069033b has its CatchHandler @ 0059191c */
    lVar9 = *(long *)(this + 0x140);
    if (0 < (int)((ulong)(*(long *)(this + 0x148) - lVar9) >> 4)) {
      lVar10 = 0;
      lVar11 = 0;
      do {
        pGVar3 = *(GUIView **)(lVar9 + lVar10);
        local_a0 = *(float *)(pGVar3 + 0x7c);
        local_9c = *(float *)(pGVar3 + 0x80);
        local_a8 = (int)(float)local_98;
        fVar14 = fVar14 - (fVar13 + local_9c);
        local_a4 = fVar14;
        GUIView::SetFrame(pGVar3,(Rectangle *)&local_a8);
        lVar9 = *(long *)(this + 0x140);
        lVar11 = lVar11 + 1;
                    /* try { // try from 0059035c to 00690383 has its CatchHandler @ 005928b4 */
        lVar10 = lVar10 + 0x10;
      } while (lVar11 < (int)((ulong)(*(long *)(this + 0x148) - lVar9) >> 4));
    }
    lVar9 = *(long *)(this + 0x170);
    if (0 < (int)((ulong)(*(long *)(this + 0x178) - lVar9) >> 4)) {
      lVar10 = 0;
                    /* try { // try from 00590388 to 00690417 has its CatchHandler @ 005928d0 */
      lVar11 = 0;
      do {
        pGVar3 = *(GUIView **)(lVar9 + lVar10);
        local_a0 = *(float *)(pGVar3 + 0x7c);
        local_9c = *(float *)(pGVar3 + 0x80);
        fVar14 = fVar14 - (local_9c + 20.0);
        local_a8 = (int)(((float)local_98 + local_90 * 0.5) - local_a0 * 0.5);
        local_a4 = fVar14;
        GUIView::SetFrame(pGVar3,(Rectangle *)&local_a8);
        Rectangle::RectangleByOutsetting((Rectangle *)(pGVar3 + 0x84),10.0);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x10;
        *(undefined8 *)(pGVar3 + 0x9c) = uStack_b0;
        *(undefined8 *)(pGVar3 + 0x94) = local_b8;
        lVar9 = *(long *)(this + 0x170);
      } while (lVar11 < (int)((ulong)(*(long *)(this + 0x178) - lVar9) >> 4));
    }
    lVar9 = *(long *)(this + 0x188);
                    /* try { // try from 0059041c to 0069042f has its CatchHandler @ 00591ac4 */
    if (0 < (int)((ulong)(*(long *)(this + 400) - lVar9) >> 4)) {
      lVar10 = 0;
      lVar11 = 0;
      do {
                    /* try { // try from 00590430 to 0069043b has its CatchHandler @ 00591a60 */
        pGVar3 = *(GUIView **)(lVar9 + lVar10);
        local_a0 = *(float *)(pGVar3 + 0x7c);
        local_9c = *(float *)(pGVar3 + 0x80);
                    /* try { // try from 00590450 to 00690477 has its CatchHandler @ 005928cc */
        fVar14 = fVar14 - (fVar13 + local_9c);
        local_a8 = (int)(((float)local_98 + local_90 * 0.5) - local_a0 * 0.5);
        local_a4 = fVar14;
        GUIView::SetFrame(pGVar3,(Rectangle *)&local_a8);
        lVar9 = *(long *)(this + 0x188);
        lVar11 = lVar11 + 1;
        lVar10 = lVar10 + 0x10;
                    /* try { // try from 00590480 to 0069048b has its CatchHandler @ 00591a5c */
      } while (lVar11 < (int)((ulong)(*(long *)(this + 400) - lVar9) >> 4));
    }
    fVar14 = DAT_00688634;
    lVar9 = *(long *)(this + 0x158);
    uVar7 = (ulong)(*(long *)(this + 0x160) - lVar9) >> 4;
    if (0 < (int)uVar7) {
      fVar12 = *(float *)(this + 0x8c);
                    /* try { // try from 005904bc to 006904c7 has its CatchHandler @ 00591a0c */
      fVar13 = (fVar12 + -16.0 + 8.0) / (float)(int)uVar7 + -8.0;
      if (_DAT_0068782c < fVar13) {
        fVar13 = _DAT_0068782c;
      }
      lVar11 = 0;
      lVar10 = 0;
                    /* try { // try from 005904e8 to 0069050f has its CatchHandler @ 00591318 */
      while( true ) {
                    /* try { // try from 0059051c to 0069052b has its CatchHandler @ 005928d0 */
        pGVar3 = *(GUIView **)(lVar9 + lVar11);
                    /* try { // try from 00590530 to 00690537 has its CatchHandler @ 005918b4 */
                    /* try { // try from 00590538 to 0069054b has its CatchHandler @ 005918a0 */
                    /* try { // try from 0059054c to 0069055f has its CatchHandler @ 00591868 */
        local_a4 = *(float *)(this + 0x88) + -12.0;
        local_a8 = (int)((fVar13 + 8.0) * (float)(int)lVar10 +
                        ((*(float *)(this + 0x84) + fVar12 * 0.5) -
                        (fVar13 * (float)(int)uVar7 + (float)((int)uVar7 + -1) * 8.0) * 0.5));
        local_9c = 36.0;
        local_a0 = (float)(int)fVar13;
        GUIView::SetFrame(pGVar3,(Rectangle *)&local_a8);
                    /* try { // try from 00590570 to 00690577 has its CatchHandler @ 005918a4 */
        lVar9 = *(long *)(this + 0x140);
        lVar1 = *(long *)(this + 0x148);
                    /* try { // try from 00590578 to 0069058b has its CatchHandler @ 00591864 */
        fVar15 = *(float *)(pGVar3 + 0x88) + -10.0;
        *(undefined4 *)(pGVar3 + 0x94) = *(undefined4 *)(pGVar3 + 0x84);
                    /* try { // try from 0059058c to 0069059f has its CatchHandler @ 00591800 */
        fVar12 = fVar14;
        if (fVar15 + ((*(float *)(pGVar3 + 0x88) + *(float *)(pGVar3 + 0x90)) - fVar15) +
            (float)(int)((ulong)(lVar1 - lVar9) >> 4) <= 0.0) {
          fVar12 = 10.0;
        }
                    /* try { // try from 005905b0 to 006905bf has its CatchHandler @ 00591918 */
        *(undefined4 *)(pGVar3 + 0x9c) = *(undefined4 *)(pGVar3 + 0x8c);
        *(float *)(pGVar3 + 0x98) = fVar15;
        *(float *)(pGVar3 + 0xa0) = fVar12 - fVar15;
        lVar9 = *(long *)(this + 0x158);
        lVar10 = lVar10 + 1;
        uVar7 = (ulong)(*(long *)(this + 0x160) - lVar9) >> 4;
        if ((int)uVar7 <= lVar10) break;
        fVar12 = *(float *)(this + 0x8c);
        lVar11 = lVar11 + 0x10;
      }
    }
    GUIView::SetTouchBoundsToIncludeSubviewTouchBounds((GUIView *)this);
    (**(code **)(*(long *)this + 0x58))(this);
  }
  if (*(long *)(lVar2 + 0x28) == local_88) {
                    /* try { // try from 005905fc to 00690623 has its CatchHandler @ 005911a0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


