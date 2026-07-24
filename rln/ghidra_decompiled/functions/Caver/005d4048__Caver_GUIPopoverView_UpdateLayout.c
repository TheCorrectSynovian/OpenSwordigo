/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4048
 * Function: Caver::GUIPopoverView::UpdateLayout
 * Signature: undefined __thiscall UpdateLayout(GUIPopoverView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIPopoverView::UpdateLayout() */

void __thiscall Caver::GUIPopoverView::UpdateLayout(GUIPopoverView *this)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Rectangle aRStack_48 [16];
  undefined8 local_38;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(this + 0x114) = 0;
  local_30 = *(float *)(*(long *)(this + 0x100) + 0x7c);
  local_2c = *(float *)(*(long *)(this + 0x100) + 0x80);
  local_38._0_4_ = 0.0;
  local_38._4_4_ = 0.0;
  uVar1 = *(uint *)(this + 0x110);
  if ((uVar1 >> 1 & 1) == 0) {
LAB_005d4154:
    bVar3 = (uVar1 & 1) == 0;
    if (!bVar3) {
      *(undefined4 *)(this + 0x114) = 1;
    }
    if ((uVar1 >> 2 & 1) == 0) {
                    /* catch() { ... } // from try @ 005d40d4 with catch @ 005d4168 */
      if (bVar3) {
        if ((uVar1 >> 3 & 1) != 0) {
          lVar7 = *(long *)(this + 0x58);
          if (local_30 < *(float *)(this + 0xec) - *(float *)(lVar7 + 0x84)) {
            fVar10 = (*(float *)(this + 0xec) - local_30) + -15.0;
            *(undefined4 *)(this + 0x114) = 8;
            fVar12 = (float)(int)((*(float *)(this + 0xf0) + *(float *)(this + 0xf8) * 0.5) -
                                 local_2c * 0.5);
                    /* try { // try from 005d41d8 to 006d42b7 has its CatchHandler @ 005d41d8
                       catch() { ... } // from try @ 005d41d8 with catch @ 005d41d8
                       catch() { ... } // from try @ 005d42c4 with catch @ 005d41d8
                       catch() { ... } // from try @ 005d4558 with catch @ 005d41d8
                       catch() { ... } // from try @ 005d47e8 with catch @ 005d41d8 */
            fVar11 = *(float *)(lVar7 + 0x88) + 10.0;
            fVar8 = fVar11;
            if (fVar11 <= fVar12) {
              fVar8 = fVar12;
            }
            fVar13 = *(float *)(lVar7 + 0x88) + *(float *)(lVar7 + 0x90) + -10.0;
            fVar14 = fVar13 - local_2c;
            if (fVar8 + local_2c <= fVar13) {
              fVar14 = fVar8;
            }
            bVar3 = false;
            bVar4 = false;
            bVar5 = false;
            if (fVar8 + local_2c <= fVar13) {
              bVar3 = false;
              bVar4 = false;
              bVar5 = true;
              if (!NAN(fVar11) && !NAN(fVar12)) {
                bVar3 = fVar11 < fVar12;
                bVar4 = fVar11 == fVar12;
                bVar5 = false;
              }
            }
            local_38._4_4_ = fVar14;
            if (bVar4 || bVar3 != bVar5) {
              local_38._4_4_ = fVar12;
            }
            if (fVar14 < fVar11) {
              local_2c = (fVar14 + local_2c) - fVar11;
              local_38._4_4_ = fVar11;
            }
            goto LAB_005d414c;
          }
        }
        goto LAB_005d4328;
      }
LAB_005d4264:
      iVar6 = 1;
    }
    else {
      if ((!bVar3) &&
         (fVar10 = *(float *)(*(long *)(this + 0x58) + 0x88),
         (fVar10 + *(float *)(*(long *)(this + 0x58) + 0x90)) -
         (*(float *)(this + 0xf0) + *(float *)(this + 0xf8)) <= *(float *)(this + 0xf0) - fVar10))
      goto LAB_005d4264;
      iVar6 = 4;
      *(undefined4 *)(this + 0x114) = 4;
    }
    local_38._0_4_ =
         (float)(int)((*(float *)(this + 0xec) + *(float *)(this + 0xf4) * 0.5) - local_30 * 0.5);
    lVar7 = *(long *)(this + 0x58);
    fVar10 = *(float *)(lVar7 + 0x84) + 10.0;
    if ((float)local_38 < fVar10) {
      local_38._0_4_ = fVar10;
    }
    if (iVar6 == 1) {
                    /* try { // try from 005d42b8 to 006d42c3 has its CatchHandler @ 005d46c8 */
      local_38._4_4_ = (float)(int)((*(float *)(this + 0xf0) - local_2c) + -15.0);
                    /* try { // try from 005d42c4 to 006d438f has its CatchHandler @ 005d41d8 */
      fVar10 = *(float *)(lVar7 + 0x88) + 10.0;
      if (local_38._4_4_ < fVar10) {
        local_2c = (local_38._4_4_ + local_2c) - fVar10;
        local_38._4_4_ = fVar10;
      }
    }
    else {
      local_38._4_4_ = (float)(int)(*(float *)(this + 0xf0) + *(float *)(this + 0xf8) + 15.0);
      fVar10 = *(float *)(lVar7 + 0x88) + *(float *)(lVar7 + 0x90) + -10.0;
      if (fVar10 < local_38._4_4_ + local_2c) {
        local_2c = fVar10 - local_38._4_4_;
      }
    }
  }
  else {
    lVar7 = *(long *)(this + 0x58);
                    /* catch() { ... } // from try @ 005d3e84 with catch @ 005d40a4 */
                    /* catch() { ... } // from try @ 005d3e94 with catch @ 005d40b0 */
    if ((*(float *)(lVar7 + 0x84) + *(float *)(lVar7 + 0x8c)) -
        (*(float *)(this + 0xec) + *(float *)(this + 0xf4)) <= local_30) goto LAB_005d4154;
    fVar10 = *(float *)(this + 0xec) + *(float *)(this + 0xf4) + 15.0;
    *(undefined4 *)(this + 0x114) = 2;
                    /* try { // try from 005d40d4 to 006d40fb has its CatchHandler @ 005d4168 */
    fVar12 = (float)(int)((*(float *)(this + 0xf0) + *(float *)(this + 0xf8) * 0.5) - local_2c * 0.5
                         );
                    /* try { // try from 005d40fc to 006d41d7 has its CatchHandler @ 005d3d94 */
    fVar11 = *(float *)(lVar7 + 0x88) + 10.0;
    fVar8 = fVar11;
    if (fVar11 <= fVar12) {
      fVar8 = fVar12;
    }
    fVar13 = *(float *)(lVar7 + 0x88) + *(float *)(lVar7 + 0x90) + -10.0;
    fVar14 = fVar13 - local_2c;
    if (fVar8 + local_2c <= fVar13) {
      fVar14 = fVar8;
    }
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    if (fVar8 + local_2c <= fVar13) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar11) && !NAN(fVar12)) {
        bVar3 = fVar11 < fVar12;
        bVar4 = fVar11 == fVar12;
        bVar5 = false;
      }
    }
    local_38._4_4_ = fVar14;
    if (bVar4 || bVar3 != bVar5) {
      local_38._4_4_ = fVar12;
    }
    if (fVar14 < fVar11) {
      local_2c = (fVar14 + local_2c) - fVar11;
      local_38._4_4_ = fVar11;
    }
LAB_005d414c:
    local_38._0_4_ = (float)(int)fVar10;
  }
LAB_005d4328:
  Rectangle::RectangleByOutsetting((Rectangle *)&local_38,10.0);
  GUIView::SetFrame((GUIView *)this,aRStack_48);
  local_38 = CONCAT44(local_38._4_4_ - (float)((ulong)*(undefined8 *)(this + 0x74) >> 0x20),
                      (float)local_38 - (float)*(undefined8 *)(this + 0x74));
  GUIView::SetFrame(*(GUIView **)(this + 0x100),(Rectangle *)&local_38);
  GUIRoundedRect::CreateWithInnerBounds
            (*(GUIRoundedRect **)(this + 0x128),(Rectangle *)(*(long *)(this + 0x100) + 0x74),5.0);
  iVar6 = *(int *)(this + 0x114);
  if (iVar6 == 1) {
                    /* try { // try from 005d446c to 006d4473 has its CatchHandler @ 005d479c */
    lVar7 = *(long *)(this + 0x128);
                    /* try { // try from 005d4480 to 006d4487 has its CatchHandler @ 005d478c */
    fVar8 = *(float *)(this + 0xf4) * 0.5 + (*(float *)(this + 0xec) - *(float *)(this + 0x74));
                    /* try { // try from 005d4488 to 006d4493 has its CatchHandler @ 005d4718 */
    *(float *)(this + 0x11c) = *(float *)(lVar7 + 0x10) + *(float *)(lVar7 + 0x18) + -4.5;
    fVar10 = *(float *)(lVar7 + 0x1c) + 8.0;
    fVar11 = *(float *)(lVar7 + 0x1c) + *(float *)(lVar7 + 0x24) + -8.0;
    if (fVar10 <= fVar8) {
      fVar10 = fVar8;
    }
    if (fVar11 <= fVar10) {
      fVar10 = fVar11;
    }
    *(float *)(this + 0x118) = fVar10;
    uVar9 = 0;
  }
  else {
                    /* try { // try from 005d4390 to 006d43e3 has its CatchHandler @ 005d479c */
    if (iVar6 == 8) {
      lVar7 = *(long *)(this + 0x128);
                    /* try { // try from 005d4418 to 006d4423 has its CatchHandler @ 005d467c */
      fVar8 = *(float *)(this + 0xf8) * 0.5 + (*(float *)(this + 0xf0) - *(float *)(this + 0x78));
      *(float *)(this + 0x118) = *(float *)(lVar7 + 0xc) + *(float *)(lVar7 + 0x14) + -4.5;
                    /* try { // try from 005d4440 to 006d4467 has its CatchHandler @ 005d4714 */
      fVar10 = *(float *)(lVar7 + 0x20) + 8.0;
      fVar11 = *(float *)(lVar7 + 0x20) + *(float *)(lVar7 + 0x28) + -8.0;
      uVar9 = DAT_00698190;
      if (fVar10 <= fVar8) {
        fVar10 = fVar8;
      }
    }
    else {
      if (iVar6 != 2) {
        lVar7 = *(long *)(this + 0x128);
        fVar8 = *(float *)(this + 0xf4) * 0.5 + (*(float *)(this + 0xec) - *(float *)(this + 0x74));
        *(float *)(this + 0x11c) = *(float *)(lVar7 + 0x10) + 4.5;
        uVar9 = DAT_006896e0;
                    /* try { // try from 005d4500 to 006d4557 has its CatchHandler @ 005d479c */
        fVar10 = *(float *)(lVar7 + 0x1c) + 8.0;
        if (fVar10 <= fVar8) {
          fVar10 = fVar8;
        }
        fVar8 = *(float *)(lVar7 + 0x1c) + *(float *)(lVar7 + 0x24) + -8.0;
        if (fVar8 <= fVar10) {
          fVar10 = fVar8;
        }
        *(float *)(this + 0x118) = fVar10;
        goto LAB_005d452c;
      }
      lVar7 = *(long *)(this + 0x128);
      fVar8 = *(float *)(this + 0xf8) * 0.5 + (*(float *)(this + 0xf0) - *(float *)(this + 0x78));
      *(float *)(this + 0x118) = *(float *)(lVar7 + 0xc) + 4.5;
      fVar10 = *(float *)(lVar7 + 0x20) + 8.0;
                    /* try { // try from 005d43ec to 006d43ef has its CatchHandler @ 005d4714 */
      if (fVar10 <= fVar8) {
        fVar10 = fVar8;
      }
      fVar11 = *(float *)(lVar7 + 0x20) + *(float *)(lVar7 + 0x28) + -8.0;
      uVar9 = DAT_006896e4;
    }
    if (fVar11 <= fVar10) {
      fVar10 = fVar11;
    }
    *(float *)(this + 0x11c) = fVar10;
  }
LAB_005d452c:
  *(undefined4 *)(this + 0x120) = uVar9;
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


