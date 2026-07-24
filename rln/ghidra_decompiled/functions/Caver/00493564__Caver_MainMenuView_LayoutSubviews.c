/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00493564
 * Function: Caver::MainMenuView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(MainMenuView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MainMenuView::LayoutSubviews() */

void __thiscall Caver::MainMenuView::LayoutSubviews(MainMenuView *this)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  Rectangle *this_00;
  GUIView *pGVar5;
  ulong uVar6;
  GUIView *pGVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  GUIView::safeBounds();
  pGVar7 = *(GUIView **)(this + 0xf8);
  fVar13 = (*(float *)(this + 0x8c) + (*(float *)(this + 0x90) * -16.0) / 9.0) * 0.5;
  this_00 = (Rectangle *)(this + 0x84);
  if (0.0 < fVar13) {
    Rectangle::RectangleByOutsetting
              (this_00,(float)(int)(*(float *)(this + 0x90) *
                                   ((fVar13 * DAT_006882c0) / *(float *)(this + 0x8c))));
    this_00 = (Rectangle *)&local_88;
  }
  GUIView::SetFrame(pGVar7,this_00);
  pGVar7 = *(GUIView **)(this + 0x118);
                    /* try { // try from 0049361c to 0059361f has its CatchHandler @ 004938a8 */
                    /* try { // try from 00493620 to 005938c7 has its CatchHandler @ 00493550 */
  fVar13 = (*(float *)(this + 0x84) + *(float *)(this + 0x8c)) - (local_a8 + local_a0);
  if (10.0 < fVar13) {
    fVar13 = 10.0;
  }
  if (*(long **)(pGVar7 + 0x128) == (long *)0x0) {
    fVar14 = fVar13 + 0.0;
    uVar9 = 0;
  }
  else {
    plVar3 = (long *)**(long **)(pGVar7 + 0x128);
    pGVar5 = pGVar7 + 0x128;
    fVar14 = _DAT_00000054;
    if ((plVar3 != (long *)0x0) && (fVar14 = *(float *)((long)plVar3 + 0x54), (int)plVar3[1] == 0))
    {
      (**(code **)(*plVar3 + 8))();
      pGVar5 = (GUIView *)(*(long *)(this + 0x118) + 0x128);
    }
    fVar14 = fVar13 + fVar14 + 0.0;
    if (*(long **)pGVar5 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      plVar3 = (long *)**(long **)pGVar5;
      uVar9 = _DAT_00000058;
      if ((plVar3 != (long *)0x0) && (lVar8 = plVar3[0xb], uVar9 = (int)lVar8, (int)plVar3[1] == 0))
      {
        (**(code **)(*plVar3 + 8))();
      }
    }
  }
  local_88 = *(ulong *)(pGVar7 + 0x74);
  uStack_80 = CONCAT44(uVar9,fVar14);
  GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  pGVar7 = *(GUIView **)(this + 0x128);
  plVar3 = *(long **)(pGVar7 + 0x128);
  if (plVar3 == (long *)0x0) {
    fVar14 = fVar13 + 30.0;
    uVar9 = 0;
  }
  else {
    plVar4 = (long *)*plVar3;
    fVar14 = _DAT_00000054;
    if ((plVar4 == (long *)0x0) || (fVar14 = *(float *)((long)plVar4 + 0x54), (int)plVar4[1] != 0))
    {
      fVar14 = fVar13 + fVar14 + 30.0;
    }
    else {
      (**(code **)(*plVar4 + 8))();
      plVar3 = *(long **)(*(long *)(this + 0x128) + 0x128);
      fVar14 = fVar13 + fVar14 + 30.0;
      if (plVar3 == (long *)0x0) {
        uVar9 = 0;
        goto LAB_0049378c;
      }
    }
    plVar3 = (long *)*plVar3;
    uVar9 = _DAT_00000058;
    if ((plVar3 != (long *)0x0) && (lVar8 = plVar3[0xb], uVar9 = (int)lVar8, (int)plVar3[1] == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
LAB_0049378c:
  local_88 = *(ulong *)(pGVar7 + 0x74);
  uStack_80 = CONCAT44(uVar9,fVar14);
  GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  pGVar7 = *(GUIView **)(this + 0x148);
  plVar3 = *(long **)(pGVar7 + 0x128);
  if (plVar3 == (long *)0x0) {
    fVar14 = fVar13 + 5.0;
    uVar9 = 0;
  }
  else {
    plVar4 = (long *)*plVar3;
    fVar14 = _DAT_00000054;
    if ((plVar4 == (long *)0x0) || (fVar14 = *(float *)((long)plVar4 + 0x54), (int)plVar4[1] != 0))
    {
      fVar14 = fVar13 + fVar14 + 5.0;
    }
    else {
      (**(code **)(*plVar4 + 8))();
      plVar3 = *(long **)(*(long *)(this + 0x148) + 0x128);
      fVar14 = fVar13 + fVar14 + 5.0;
      if (plVar3 == (long *)0x0) {
        uVar9 = 0;
        goto LAB_0049384c;
      }
    }
    plVar3 = (long *)*plVar3;
    uVar9 = _DAT_00000058;
    if ((plVar3 != (long *)0x0) && (lVar8 = plVar3[0xb], uVar9 = (int)lVar8, (int)plVar3[1] == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
LAB_0049384c:
  local_88 = *(ulong *)(pGVar7 + 0x74);
  uStack_80 = CONCAT44(uVar9,fVar14);
  GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  pGVar7 = *(GUIView **)(this + 0x158);
  plVar3 = *(long **)(pGVar7 + 0x128);
  if (plVar3 == (long *)0x0) {
    fVar14 = fVar13 + 15.0;
    uVar9 = 0;
  }
  else {
    plVar4 = (long *)*plVar3;
    fVar14 = _DAT_00000054;
    if ((plVar4 == (long *)0x0) || (fVar14 = *(float *)((long)plVar4 + 0x54), (int)plVar4[1] != 0))
    {
                    /* try { // try from 004938d0 to 005938db has its CatchHandler @ 00493550 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 004938c8 with catch @ 004938d8
                        */
      fVar14 = fVar13 + fVar14 + 15.0;
    }
    else {
      (**(code **)(*plVar4 + 8))();
      plVar3 = *(long **)(*(long *)(this + 0x158) + 0x128);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0049361c with catch @ 004938a8
                        */
      fVar14 = fVar13 + fVar14 + 15.0;
      if (plVar3 == (long *)0x0) {
        uVar9 = 0;
        goto LAB_0049390c;
      }
    }
    plVar3 = (long *)*plVar3;
    uVar9 = _DAT_00000058;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00493988 with catch @ 004938ec
                       catch(type#1 @ 00000000) { ... } // from try @ 004939e0 with catch @ 004938ec
                        */
    if ((plVar3 != (long *)0x0) && (lVar8 = plVar3[0xb], uVar9 = (int)lVar8, (int)plVar3[1] == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
  }
LAB_0049390c:
  local_88 = *(ulong *)(pGVar7 + 0x74);
  uStack_80 = CONCAT44(uVar9,fVar14);
  GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  lVar8 = *(long *)(this + 0x178);
  uVar6 = *(long *)(this + 0x180) - lVar8;
  if ((int)(uVar6 >> 4) < 1) {
                    /* catch() { ... } // from try @ 00493a00 with catch @ 004939ec */
    fVar14 = 3.0;
  }
  else {
    lVar10 = (long)(uVar6 * 0x10000000) >> 0x20;
    lVar11 = (long)(uVar6 * 0x10000000) >> 0x1c;
    fVar14 = 3.0;
                    /* try { // try from 00493950 to 00593953 has its CatchHandler @ 004939a0 */
    while( true ) {
      lVar11 = lVar11 + -0x10;
      pGVar7 = *(GUIView **)(lVar8 + lVar11);
      uStack_80 = *(undefined8 *)(pGVar7 + 0x7c);
                    /* try { // try from 00493984 to 00593987 has its CatchHandler @ 00493998 */
                    /* try { // try from 00493988 to 005939d3 has its CatchHandler @ 004938ec */
      local_88 = CONCAT44(fVar14,(*(float *)(*(long *)(this + 0x108) + 0x84) +
                                 *(float *)(*(long *)(this + 0x108) + 0x8c)) -
                                 *(float *)(pGVar7 + 0x7c));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00493984 with catch @ 00493998
                        */
      GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00493950 with catch @ 004939a0
                        */
      lVar8 = *(long *)(this + 0x178);
      lVar1 = *(long *)(this + 0x180);
      *(uint *)(pGVar7 + 0x19c) = *(uint *)(pGVar7 + 0x19c) | 2;
      *(float *)(pGVar7 + 0x1a4) = fVar13 + fVar13;
      fVar12 = 3.0;
      if ((ulong)(lVar1 - lVar8 >> 4) < 4) {
        fVar12 = 8.0;
      }
                    /* try { // try from 004939d4 to 005939df has its CatchHandler @ 004939e8 */
      fVar14 = fVar14 + *(float *)(pGVar7 + 0x80) + fVar12;
      (**(code **)(*(long *)pGVar7 + 0x58))(pGVar7);
                    /* try { // try from 004939e0 to 005939eb has its CatchHandler @ 004938ec */
      if (lVar10 < 2) break;
      lVar8 = *(long *)(this + 0x178);
      lVar10 = lVar10 + -1;
    }
  }
  pGVar7 = *(GUIView **)(this + 0x108);
                    /* try { // try from 004939fc to 005939ff has its CatchHandler @ 00493a10 */
  local_88 = *(ulong *)(pGVar7 + 0x74);
                    /* try { // try from 00493a00 to 00593a23 has its CatchHandler @ 004939ec */
  uStack_80 = CONCAT44(fVar14,*(undefined4 *)(pGVar7 + 0x7c));
                    /* catch() { ... } // from try @ 004939fc with catch @ 00493a10 */
  GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  pGVar7 = *(GUIView **)(this + 0x108);
                    /* try { // try from 00493a24 to 00593a3f has its CatchHandler @ 00493a24
                       catch() { ... } // from try @ 00493a24 with catch @ 00493a24
                       catch() { ... } // from try @ 00493a44 with catch @ 00493a24 */
  uStack_80 = *(undefined8 *)(pGVar7 + 0x7c);
                    /* try { // try from 00493a40 to 00593a43 has its CatchHandler @ 00493a70 */
                    /* try { // try from 00493a44 to 00593a83 has its CatchHandler @ 00493a24 */
  local_88 = CONCAT44((int)((*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5 + -10.0) -
                           *(float *)(pGVar7 + 0x80) * 0.5),
                      (*(float *)(this + 0x84) + *(float *)(this + 0x8c)) -
                      *(float *)(pGVar7 + 0x7c));
  GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  fVar13 = *(float *)(*(GUIView **)(this + 0x1a8) + 0x7c);
                    /* catch() { ... } // from try @ 00493a40 with catch @ 00493a70 */
  local_88 = (ulong)(uint)((*(float *)(this + 0x84) + *(float *)(this + 0x8c)) - fVar13);
  uStack_80 = CONCAT44(*(undefined4 *)(this + 0x90),fVar13);
  GUIView::SetFrame(*(GUIView **)(this + 0x1a8),(Rectangle *)&local_88);
  uStack_80 = *(undefined8 *)(*(GUIView **)(this + 0x1c8) + 0x7c);
  local_88 = CONCAT44(0x42180000,local_a8 + DAT_00684320);
  GUIView::SetFrame(*(GUIView **)(this + 0x1c8),(Rectangle *)&local_88);
  lVar8 = *(long *)(this + 0x1c8);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar8 + 0x84),10.0);
  *(undefined8 *)(lVar8 + 0x9c) = uStack_80;
  *(ulong *)(lVar8 + 0x94) = local_88;
  uStack_80 = *(undefined8 *)(*(GUIView **)(this + 0x1b8) + 0x7c);
  local_88 = CONCAT44(0x41e00000,local_a8 + _DAT_0068937c);
  GUIView::SetFrame(*(GUIView **)(this + 0x1b8),(Rectangle *)&local_88);
                    /* catch() { ... } // from try @ 00493b3c with catch @ 00493b0c */
  lVar8 = *(long *)(this + 0x1b8);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar8 + 0x84),10.0);
                    /* try { // try from 00493b28 to 00593b3b has its CatchHandler @ 00493b60 */
  *(undefined8 *)(lVar8 + 0x9c) = uStack_80;
  *(ulong *)(lVar8 + 0x94) = local_88;
                    /* try { // try from 00493b3c to 00593b63 has its CatchHandler @ 00493b0c */
  uStack_80 = *(undefined8 *)(*(GUIView **)(this + 0x1f8) + 0x7c);
                    /* catch() { ... } // from try @ 00493b28 with catch @ 00493b60 */
  local_88 = CONCAT44((int)(*(float *)(this + 0x88) + *(float *)(this + 0x90) * 0.5 + DAT_00683480),
                      local_a8 + 15.0);
  GUIView::SetFrame(*(GUIView **)(this + 0x1f8),(Rectangle *)&local_88);
  pGVar7 = *(GUIView **)(this + 600);
  uStack_80 = *(undefined8 *)(pGVar7 + 0x7c);
  local_88 = CONCAT44((6.0 - *(float *)(pGVar7 + 0x80)) +
                      (float)((ulong)*(undefined8 *)(*(long *)(this + 0x1f8) + 0x74) >> 0x20),
                      (float)*(undefined8 *)(*(long *)(this + 0x1f8) + 0x74) + 23.0);
  GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  lVar8 = *(long *)(this + 600);
  uStack_80 = *(undefined8 *)(*(GUIView **)(this + 0x248) + 0x7c);
  local_88 = CONCAT44(*(undefined4 *)(lVar8 + 0x78),
                      *(float *)(lVar8 + 0x74) + *(float *)(lVar8 + 0x7c) + 6.0);
  GUIView::SetFrame(*(GUIView **)(this + 0x248),(Rectangle *)&local_88);
  GUIView::safeBounds();
  pGVar7 = *(GUIView **)(this + 0x168) + 0x7c;
  uStack_80 = *(undefined8 *)pGVar7;
  local_88 = CONCAT44(fStack_94 + 9.0,(local_98 + local_90 + -10.0) - *(float *)pGVar7);
  GUIView::SetFrame(*(GUIView **)(this + 0x168),(Rectangle *)&local_88);
  if (*(long *)(this + 0x268) != 0) {
    pGVar7 = *(GUIView **)(this + 0x278);
    GUILabel::TextSize();
    local_88 = *(ulong *)(pGVar7 + 0x74);
    GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
    pGVar7 = *(GUIView **)(this + 0x278);
    Vector2::Rounded();
    uStack_80 = *(undefined8 *)(pGVar7 + 0x7c);
    GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
    pGVar7 = *(GUIView **)(this + 0x268);
    Vector2::Rounded();
    uStack_80 = *(undefined8 *)(pGVar7 + 0x7c);
    GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  }
  pGVar7 = *(GUIView **)(this + 0x208) + 0x7c;
  uStack_80 = *(undefined8 *)pGVar7;
  local_88 = CONCAT44(local_a4 + 24.0,
                      (int)((*(float *)(this + 0x84) + *(float *)(this + 0x8c) * 0.5) -
                           *(float *)pGVar7 * 0.5));
  GUIView::SetFrame(*(GUIView **)(this + 0x208),(Rectangle *)&local_88);
  lVar8 = *(long *)(this + 0x208);
  Rectangle::RectangleByOutsetting((Rectangle *)(lVar8 + 0x84),10.0);
  *(undefined8 *)(lVar8 + 0x9c) = uStack_80;
  *(ulong *)(lVar8 + 0x94) = local_88;
  pGVar7 = *(GUIView **)(this + 0x218);
  GUILabel::TextSize();
  local_88 = *(ulong *)(pGVar7 + 0x74);
  GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  lVar8 = *(long *)(this + 0x208);
  pGVar7 = *(GUIView **)(this + 0x218);
  uStack_80 = *(undefined8 *)(pGVar7 + 0x7c);
                    /* try { // try from 00493db4 to 00593e4b has its CatchHandler @ 00493db4
                       catch() { ... } // from try @ 00493db4 with catch @ 00493db4
                       catch() { ... } // from try @ 00493ebc with catch @ 00493db4
                       catch() { ... } // from try @ 004940c0 with catch @ 00493db4 */
  local_88 = CONCAT44((*(float *)(lVar8 + 0x78) + -10.0) - *(float *)(pGVar7 + 0x80),
                      (int)((*(float *)(lVar8 + 0x74) + *(float *)(lVar8 + 0x7c) * 0.5) -
                           *(float *)(pGVar7 + 0x7c) * 0.5));
  GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  pGVar7 = *(GUIView **)(this + 0x238);
  if (pGVar7 != (GUIView *)0x0) {
    uStack_80 = *(undefined8 *)(pGVar7 + 0x7c);
    local_88 = CONCAT44(0x41c00000,
                        (int)((*(float *)(this + 0x84) + *(float *)(this + 0x8c) * 0.5) -
                             *(float *)(pGVar7 + 0x7c) * 0.5));
    GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
    lVar8 = *(long *)(this + 0x238);
    Rectangle::RectangleByOutsetting((Rectangle *)(lVar8 + 0x84),10.0);
    *(undefined8 *)(lVar8 + 0x9c) = uStack_80;
    *(ulong *)(lVar8 + 0x94) = local_88;
    pGVar7 = *(GUIView **)(this + 0x228);
    GUILabel::TextSize();
    local_88 = *(ulong *)(pGVar7 + 0x74);
                    /* try { // try from 00493e4c to 00593e5f has its CatchHandler @ 0049403c */
    GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
    lVar8 = *(long *)(this + 0x238);
                    /* try { // try from 00493e60 to 00593e77 has its CatchHandler @ 00493fc8 */
    pGVar7 = *(GUIView **)(this + 0x228);
    uStack_80 = *(undefined8 *)(pGVar7 + 0x7c);
                    /* try { // try from 00493e90 to 00593ea3 has its CatchHandler @ 00493fb8 */
    local_88 = CONCAT44((*(float *)(lVar8 + 0x78) + -10.0) - *(float *)(pGVar7 + 0x80),
                        (int)((*(float *)(lVar8 + 0x74) + *(float *)(lVar8 + 0x7c) * 0.5) -
                             *(float *)(pGVar7 + 0x7c) * 0.5));
    GUIView::SetFrame(pGVar7,(Rectangle *)&local_88);
  }
                    /* try { // try from 00493ea4 to 00593ebb has its CatchHandler @ 00493f80 */
  AnimateButtonsIn(0.0);
  this[0xe9] = (MainMenuView)0x1;
                    /* try { // try from 00493ebc to 0059405f has its CatchHandler @ 00493db4 */
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


