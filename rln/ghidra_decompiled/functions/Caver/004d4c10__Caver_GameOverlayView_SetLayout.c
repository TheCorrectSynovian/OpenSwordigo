/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004d4c10
 * Function: Caver::GameOverlayView::SetLayout
 * Signature: undefined __thiscall SetLayout(GameOverlayView * this, shared_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&) */

void __thiscall Caver::GameOverlayView::SetLayout(GameOverlayView *this,shared_ptr *param_1)

{
  float *pfVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  int iVar8;
  GameOptions *this_00;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long *plVar20;
  string *psVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  long local_108;
  long *plStack_100;
  long local_f8;
  long *plStack_f0;
  long local_e8;
  long *plStack_e0;
  long local_d8;
  long *plStack_d0;
  undefined1 auStack_c8 [8];
  long local_c0;
  long *plStack_b8;
  long *local_a8;
  float local_98 [2];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 local_80 [2];
  float local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 local_5c;
  
  lVar5 = tpidr_el0;
  lVar10 = *(long *)(lVar5 + 0x28);
  uVar22 = *(undefined8 *)param_1;
  lVar11 = *(long *)(param_1 + 8);
  if (lVar11 != 0) {
    *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
  }
  plVar20 = *(long **)(this + 0x280);
  *(undefined8 *)(this + 0x278) = uVar22;
  *(long *)(this + 0x280) = lVar11;
  if ((plVar20 != (long *)0x0) && (lVar11 = plVar20[1], plVar20[1] = lVar11 + -1, lVar11 + -1 == 0))
  {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    lVar11 = plVar20[2];
    plVar20[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plVar20 + 0x18))(plVar20);
    }
  }
  this_00 = (GameOptions *)RenderingContext::CurrentContext();
  fVar25 = *(float *)(this_00 + 0x5c);
  GameOptions::sharedOptions(this_00);
  iVar8 = CurrentDeviceType();
  lVar11 = *(long *)(this + 0x140);
  local_98[0] = 0.75;
  pfVar1 = (float *)(lVar11 + 0x198);
  if (iVar8 != 1) {
    local_98[0] = 1.0;
  }
  pfVar14 = pfVar1;
  if (pfVar1 <= (float *)(lVar11 + 0x15cU)) {
    pfVar14 = (float *)(lVar11 + 0x15cU);
  }
  uVar2 = ((ulong)((long)pfVar14 + (-0x159 - lVar11)) >> 2) + 1;
  local_98[0] = fVar25 * local_98[0];
  *(float *)(this + 0x138) = local_98[0];
  uStack_88._4_4_ = local_98[0];
  local_70 = local_98[0];
  stack0xffffffffffffff74 = 0;
  local_98[1] = 0.0;
  auStack_90._0_4_ = 0;
  local_80[1] = 0;
  local_80[0] = 0;
  uStack_64 = 0;
  local_6c = 0;
  local_5c = 0x3f800000;
  if (uVar2 < 8) {
    pfVar13 = local_98;
    pfVar14 = (float *)(lVar11 + 0x158);
LAB_004d4d78:
    do {
      pfVar15 = pfVar14 + 1;
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar15;
    } while (pfVar15 < pfVar1);
  }
  else {
    uVar16 = uVar2 & 0x7ffffffffffffff8;
    puVar18 = (undefined8 *)(lVar11 + 0x168);
    pfVar13 = local_98 + uVar16;
    pfVar14 = (float *)(lVar11 + uVar16 * 4 + 0x158);
    puVar17 = &uStack_88;
    uVar19 = uVar16;
    do {
      puVar6 = puVar17 + -1;
      uVar22 = puVar17[-2];
      uVar24 = puVar17[1];
      uVar23 = *puVar17;
      uVar19 = uVar19 - 8;
      puVar17 = puVar17 + 4;
      puVar18[-1] = *puVar6;
      puVar18[-2] = uVar22;
      puVar18[1] = uVar24;
      *puVar18 = uVar23;
      puVar18 = puVar18 + 4;
    } while (uVar19 != 0);
    if (uVar2 != uVar16) goto LAB_004d4d78;
  }
  lVar11 = *(long *)(this + 0x150);
  local_98[0] = *(float *)(this + 0x138);
  uStack_88._4_4_ = local_98[0];
  local_70 = local_98[0];
  pfVar1 = (float *)(lVar11 + 0x198);
  pfVar14 = pfVar1;
  if (pfVar1 <= (float *)(lVar11 + 0x15cU)) {
    pfVar14 = (float *)(lVar11 + 0x15cU);
  }
  uVar2 = ((ulong)((long)pfVar14 + (-0x159 - lVar11)) >> 2) + 1;
  stack0xffffffffffffff74 = 0;
  local_98[1] = 0.0;
  auStack_90._0_4_ = 0;
  local_80[1] = 0;
  local_80[0] = 0;
  uStack_64 = 0;
  local_6c = 0;
  local_5c = 0x3f800000;
  if (uVar2 < 8) {
    pfVar13 = local_98;
    pfVar14 = (float *)(lVar11 + 0x158);
LAB_004d4e30:
    do {
      pfVar15 = pfVar14 + 1;
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar15;
    } while (pfVar15 < pfVar1);
  }
  else {
    uVar16 = uVar2 & 0x7ffffffffffffff8;
    puVar18 = (undefined8 *)(lVar11 + 0x168);
    pfVar13 = local_98 + uVar16;
    pfVar14 = (float *)(lVar11 + uVar16 * 4 + 0x158);
    puVar17 = &uStack_88;
    uVar19 = uVar16;
    do {
      puVar6 = puVar17 + -1;
      uVar22 = puVar17[-2];
      uVar24 = puVar17[1];
      uVar23 = *puVar17;
      uVar19 = uVar19 - 8;
      puVar17 = puVar17 + 4;
      puVar18[-1] = *puVar6;
      puVar18[-2] = uVar22;
      puVar18[1] = uVar24;
      *puVar18 = uVar23;
      puVar18 = puVar18 + 4;
    } while (uVar19 != 0);
    if (uVar2 != uVar16) goto LAB_004d4e30;
  }
  lVar11 = *(long *)(this + 0x160);
  local_98[0] = *(float *)(this + 0x138);
  uStack_88._4_4_ = local_98[0];
  local_70 = local_98[0];
  pfVar1 = (float *)(lVar11 + 0x198);
  pfVar14 = pfVar1;
  if (pfVar1 <= (float *)(lVar11 + 0x15cU)) {
    pfVar14 = (float *)(lVar11 + 0x15cU);
  }
  uVar2 = ((ulong)((long)pfVar14 + (-0x159 - lVar11)) >> 2) + 1;
  stack0xffffffffffffff74 = 0;
  local_98[1] = 0.0;
  auStack_90._0_4_ = 0;
  local_80[1] = 0;
  local_80[0] = 0;
  uStack_64 = 0;
  local_6c = 0;
  local_5c = 0x3f800000;
  if (uVar2 < 8) {
    pfVar13 = local_98;
    pfVar14 = (float *)(lVar11 + 0x158);
LAB_004d4ee8:
    do {
      pfVar15 = pfVar14 + 1;
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar15;
    } while (pfVar15 < pfVar1);
  }
  else {
    uVar16 = uVar2 & 0x7ffffffffffffff8;
    puVar18 = (undefined8 *)(lVar11 + 0x168);
    pfVar13 = local_98 + uVar16;
    pfVar14 = (float *)(lVar11 + uVar16 * 4 + 0x158);
    puVar17 = &uStack_88;
    uVar19 = uVar16;
    do {
      puVar6 = puVar17 + -1;
      uVar22 = puVar17[-2];
      uVar24 = puVar17[1];
      uVar23 = *puVar17;
      uVar19 = uVar19 - 8;
      puVar17 = puVar17 + 4;
      puVar18[-1] = *puVar6;
      puVar18[-2] = uVar22;
      puVar18[1] = uVar24;
      *puVar18 = uVar23;
      puVar18 = puVar18 + 4;
    } while (uVar19 != 0);
    if (uVar2 != uVar16) goto LAB_004d4ee8;
  }
  lVar11 = *(long *)(this + 0x170);
  local_98[0] = *(float *)(this + 0x138);
  uStack_88._4_4_ = local_98[0];
  local_70 = local_98[0];
  pfVar1 = (float *)(lVar11 + 0x198);
  pfVar14 = pfVar1;
  if (pfVar1 <= (float *)(lVar11 + 0x15cU)) {
    pfVar14 = (float *)(lVar11 + 0x15cU);
  }
  uVar2 = ((ulong)((long)pfVar14 + (-0x159 - lVar11)) >> 2) + 1;
  stack0xffffffffffffff74 = 0;
  local_98[1] = 0.0;
  auStack_90._0_4_ = 0;
  local_80[1] = 0;
  local_80[0] = 0;
  uStack_64 = 0;
  local_6c = 0;
  local_5c = 0x3f800000;
  if (uVar2 < 8) {
    pfVar13 = local_98;
    pfVar14 = (float *)(lVar11 + 0x158);
LAB_004d4fa0:
    do {
      pfVar15 = pfVar14 + 1;
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar15;
    } while (pfVar15 < pfVar1);
  }
  else {
    uVar16 = uVar2 & 0x7ffffffffffffff8;
    puVar18 = (undefined8 *)(lVar11 + 0x168);
    pfVar13 = local_98 + uVar16;
    pfVar14 = (float *)(lVar11 + uVar16 * 4 + 0x158);
    puVar17 = &uStack_88;
    uVar19 = uVar16;
    do {
      puVar6 = puVar17 + -1;
      uVar22 = puVar17[-2];
      uVar24 = puVar17[1];
      uVar23 = *puVar17;
      uVar19 = uVar19 - 8;
      puVar17 = puVar17 + 4;
      puVar18[-1] = *puVar6;
      puVar18[-2] = uVar22;
      puVar18[1] = uVar24;
      *puVar18 = uVar23;
      puVar18 = puVar18 + 4;
    } while (uVar19 != 0);
    if (uVar2 != uVar16) goto LAB_004d4fa0;
  }
  lVar11 = *(long *)(this + 0x180);
  local_98[0] = *(float *)(this + 0x138);
  uStack_88._4_4_ = local_98[0];
  local_70 = local_98[0];
  pfVar1 = (float *)(lVar11 + 0x198);
  pfVar14 = pfVar1;
  if (pfVar1 <= (float *)(lVar11 + 0x15cU)) {
    pfVar14 = (float *)(lVar11 + 0x15cU);
  }
  uVar2 = ((ulong)((long)pfVar14 + (-0x159 - lVar11)) >> 2) + 1;
  stack0xffffffffffffff74 = 0;
  local_98[1] = 0.0;
  auStack_90._0_4_ = 0;
  local_80[1] = 0;
  local_80[0] = 0;
  uStack_64 = 0;
  local_6c = 0;
  local_5c = 0x3f800000;
  if (uVar2 < 8) {
    pfVar13 = local_98;
    pfVar14 = (float *)(lVar11 + 0x158);
LAB_004d5058:
    do {
      pfVar15 = pfVar14 + 1;
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar15;
    } while (pfVar15 < pfVar1);
  }
  else {
    uVar16 = uVar2 & 0x7ffffffffffffff8;
    puVar18 = (undefined8 *)(lVar11 + 0x168);
    pfVar13 = local_98 + uVar16;
    pfVar14 = (float *)(lVar11 + uVar16 * 4 + 0x158);
    puVar17 = &uStack_88;
    uVar19 = uVar16;
    do {
      puVar6 = puVar17 + -1;
      uVar22 = puVar17[-2];
      uVar24 = puVar17[1];
      uVar23 = *puVar17;
      uVar19 = uVar19 - 8;
      puVar17 = puVar17 + 4;
      puVar18[-1] = *puVar6;
      puVar18[-2] = uVar22;
      puVar18[1] = uVar24;
      *puVar18 = uVar23;
      puVar18 = puVar18 + 4;
    } while (uVar19 != 0);
    if (uVar2 != uVar16) goto LAB_004d5058;
  }
  lVar11 = *(long *)(this + 400);
  local_98[0] = *(float *)(this + 0x138);
  stack0xffffffffffffff74 = 0;
  local_98[1] = 0.0;
  auStack_90._0_4_ = 0;
  uStack_88._4_4_ = local_98[0];
  local_70 = local_98[0];
  local_80[1] = 0;
  local_80[0] = 0;
  uStack_64 = 0;
  local_6c = 0;
  pfVar1 = (float *)(lVar11 + 0x198);
  pfVar14 = pfVar1;
  if (pfVar1 <= (float *)(lVar11 + 0x15cU)) {
    pfVar14 = (float *)(lVar11 + 0x15cU);
  }
  uVar2 = ((ulong)((long)pfVar14 + (-0x159 - lVar11)) >> 2) + 1;
  local_5c = 0x3f800000;
  if (uVar2 < 8) {
    pfVar13 = local_98;
    pfVar14 = (float *)(lVar11 + 0x158);
  }
  else {
    uVar16 = uVar2 & 0x7ffffffffffffff8;
    puVar18 = (undefined8 *)(lVar11 + 0x168);
    pfVar13 = local_98 + uVar16;
    pfVar14 = (float *)(lVar11 + uVar16 * 4 + 0x158);
    puVar17 = &uStack_88;
    uVar19 = uVar16;
    do {
      puVar6 = puVar17 + -1;
      uVar22 = puVar17[-2];
      uVar24 = puVar17[1];
      uVar23 = *puVar17;
      uVar19 = uVar19 - 8;
      puVar17 = puVar17 + 4;
      puVar18[-1] = *puVar6;
      puVar18[-2] = uVar22;
      puVar18[1] = uVar24;
      *puVar18 = uVar23;
      puVar18 = puVar18 + 4;
    } while (uVar19 != 0);
    if (uVar2 == uVar16) goto LAB_004d5120;
  }
  do {
    pfVar15 = pfVar14 + 1;
    *pfVar14 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    pfVar14 = pfVar15;
  } while (pfVar15 < pfVar1);
LAB_004d5120:
  psVar21 = *(string **)param_1;
  FUN_00666bb8(local_98,"left",auStack_c8);
  GUIViewLayout::SubviewWithIdentifier(psVar21);
  *(float *)(local_c0 + 0x6c) = fVar25;
  if ((plStack_b8 != (long *)0x0) &&
     (lVar11 = plStack_b8[1], plStack_b8[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
    lVar11 = plStack_b8[2];
    plStack_b8[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plStack_b8 + 0x18))(plStack_b8);
    }
  }
  puVar7 = PTR_DAT_007e5de8;
  puVar9 = (undefined *)(CONCAT44(local_98[1],local_98[0]) + -0x18);
  if (puVar9 != PTR_DAT_007e5de8) {
    piVar12 = (int *)(CONCAT44(local_98[1],local_98[0]) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar12;
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar9);
    }
  }
  psVar21 = *(string **)param_1;
  FUN_00666bb8(local_98,"right",auStack_c8);
  GUIViewLayout::SubviewWithIdentifier(psVar21);
  *(float *)(local_d8 + 0x6c) = fVar25;
  if ((plStack_d0 != (long *)0x0) &&
     (lVar11 = plStack_d0[1], plStack_d0[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plStack_d0 + 0x10))(plStack_d0);
    lVar11 = plStack_d0[2];
    plStack_d0[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plStack_d0 + 0x18))(plStack_d0);
    }
  }
  puVar9 = (undefined *)(CONCAT44(local_98[1],local_98[0]) + -0x18);
  if (puVar9 != puVar7) {
    piVar12 = (int *)(CONCAT44(local_98[1],local_98[0]) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar12;
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
                    /* catch() { ... } // from try @ 004d5564 with catch @ 004d5534 */
    if (iVar8 < 1) {
      operator_delete(puVar9);
    }
  }
  psVar21 = *(string **)param_1;
  FUN_00666bb8(local_98,"jump",auStack_c8);
  GUIViewLayout::SubviewWithIdentifier(psVar21);
  *(float *)(local_e8 + 0x6c) = fVar25;
  if ((plStack_e0 != (long *)0x0) &&
     (lVar11 = plStack_e0[1], plStack_e0[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plStack_e0 + 0x10))(plStack_e0);
    lVar11 = plStack_e0[2];
    plStack_e0[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plStack_e0 + 0x18))(plStack_e0);
    }
  }
  puVar9 = (undefined *)(CONCAT44(local_98[1],local_98[0]) + -0x18);
  if (puVar9 != puVar7) {
    piVar12 = (int *)(CONCAT44(local_98[1],local_98[0]) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar12;
                    /* try { // try from 004d5550 to 005d5563 has its CatchHandler @ 004d5588 */
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar9);
                    /* try { // try from 004d5564 to 005d558b has its CatchHandler @ 004d5534 */
    }
  }
  psVar21 = *(string **)param_1;
  FUN_00666bb8(local_98,"swing",auStack_c8);
  GUIViewLayout::SubviewWithIdentifier(psVar21);
  *(float *)(local_f8 + 0x6c) = fVar25;
  if ((plStack_f0 != (long *)0x0) &&
     (lVar11 = plStack_f0[1], plStack_f0[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
    lVar11 = plStack_f0[2];
    plStack_f0[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plStack_f0 + 0x18))(plStack_f0);
    }
  }
  puVar9 = (undefined *)(CONCAT44(local_98[1],local_98[0]) + -0x18);
  if (puVar9 != puVar7) {
    piVar12 = (int *)(CONCAT44(local_98[1],local_98[0]) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar8 = *piVar12;
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar9);
    }
  }
  psVar21 = *(string **)param_1;
  FUN_00666bb8(local_98,"skill",auStack_c8);
  GUIViewLayout::SubviewWithIdentifier(psVar21);
  *(float *)(local_108 + 0x6c) = fVar25;
  if ((plStack_100 != (long *)0x0) &&
     (lVar11 = plStack_100[1], plStack_100[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*plStack_100 + 0x10))(plStack_100);
    lVar11 = plStack_100[2];
    plStack_100[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*plStack_100 + 0x18))(plStack_100);
    }
  }
  puVar9 = (undefined *)(CONCAT44(local_98[1],local_98[0]) + -0x18);
  if (puVar9 != puVar7) {
    piVar12 = (int *)(CONCAT44(local_98[1],local_98[0]) + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
                    /* catch() { ... } // from try @ 004d5550 with catch @ 004d5588 */
      iVar8 = *piVar12;
      *piVar12 = iVar8 + -1;
    }
    else {
      do {
        iVar8 = *piVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (iVar8 < 1) {
      operator_delete(puVar9);
    }
  }
  if (DAT_00683734 < *(float *)(this + 0x8c)) {
    (**(code **)(*(long *)this + 0x58))(this);
  }
  if ((local_a8 != (long *)0x0) &&
     (lVar11 = local_a8[1], local_a8[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_a8 + 0x10))(local_a8);
    lVar11 = local_a8[2];
    local_a8[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*local_a8 + 0x18))(local_a8);
    }
  }
  if (*(long *)(lVar5 + 0x28) == lVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


